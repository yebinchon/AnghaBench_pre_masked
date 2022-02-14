
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {int core; struct conexant_spec* spec; } ;
struct TYPE_2__ {int (* automute_hook ) (struct hda_codec*) ;int cap_sync_hook; } ;
struct conexant_spec {TYPE_1__ gen; int parse_flags; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2,
        const struct hda_fixup *VAR_3, int VAR_4)
{
 struct conexant_spec *VAR_5 = VAR_2->spec;

 switch (VAR_4) {
 case 129:
  VAR_5->parse_flags |= VAR_0;
  FUNC_2(&VAR_2->core, 0x410);
  break;
 case 128:
  FUNC_0(VAR_5->gen.cap_sync_hook);
  VAR_5->gen.cap_sync_hook = VAR_1;
  VAR_5->gen.automute_hook = FUNC_1;
  break;
 case 130:
  FUNC_1(VAR_2);
  break;
 }
}
