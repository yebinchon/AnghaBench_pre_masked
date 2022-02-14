
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct alc_spec*) ;
 int FUNC_1 (struct hda_codec*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_1,
        const struct hda_fixup *VAR_2,
        int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_1->spec;

 if (VAR_3 == VAR_0) {
  int VAR_5 = FUNC_1(VAR_1);
  int VAR_6 = FUNC_0(VAR_4);

  if (FUNC_2(!VAR_5 || !VAR_6))
   return;
  FUNC_3(VAR_1, VAR_5, VAR_6);
 }
}
