
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pins; int (* func ) (struct hda_codec*,struct hda_fixup const*,int) ;int verbs; } ;
struct hda_fixup {int chain_id; int type; scalar_t__ chained_before; int chained; TYPE_1__ v; } ;
struct TYPE_4__ {int chip_name; } ;
struct hda_codec {char* fixup_name; TYPE_2__ core; struct hda_fixup* fixup_list; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct hda_codec*,char*,int ,char const*) ;
 int FUNC_1 (struct hda_codec*,char*,int ,int) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,struct hda_fixup const*,int) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 const char *VAR_6 = VAR_2->fixup_name;

 while (VAR_3 >= 0) {
  const struct hda_fixup *VAR_7 = VAR_2->fixup_list + VAR_3;

  if (++VAR_5 > 10)
   break;
  if (VAR_7->chained_before)
   FUNC_6(VAR_2, VAR_7->chain_id, VAR_4, VAR_5 + 1);

  switch (VAR_7->type) {
  case 129:
   if (VAR_4 != VAR_0 || !VAR_7->v.pins)
    break;
   FUNC_0(VAR_2, "%s: Apply pincfg for %s\n",
        VAR_2->core.chip_name, VAR_6);
   FUNC_4(VAR_2, VAR_7->v.pins);
   break;
  case 128:
   if (VAR_4 != VAR_1 || !VAR_7->v.verbs)
    break;
   FUNC_0(VAR_2, "%s: Apply fix-verbs for %s\n",
        VAR_2->core.chip_name, VAR_6);
   FUNC_3(VAR_2, VAR_7->v.verbs);
   break;
  case 131:
   if (!VAR_7->v.func)
    break;
   FUNC_0(VAR_2, "%s: Apply fix-func for %s\n",
        VAR_2->core.chip_name, VAR_6);
   VAR_7->v.func(VAR_2, VAR_7, VAR_4);
   break;
  case 130:
   if (VAR_4 != VAR_1 || !VAR_7->v.pins)
    break;
   FUNC_0(VAR_2, "%s: Apply pinctl for %s\n",
        VAR_2->core.chip_name, VAR_6);
   FUNC_2(VAR_2, VAR_7->v.pins);
   break;
  default:
   FUNC_1(VAR_2, "%s: Invalid fixup type %d\n",
       VAR_2->core.chip_name, VAR_7->type);
   break;
  }
  if (!VAR_7->chained || VAR_7->chained_before)
   break;
  VAR_3 = VAR_7->chain_id;
 }
}
