
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int keep_vref_in_automute; } ;
struct alc_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,int const) ;
 int FUNC_1 (struct hda_codec*,int const,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1,
      const hda_nid_t *VAR_2, int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_1->spec;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  unsigned int VAR_6;
  VAR_6 = FUNC_0(VAR_1, VAR_2[VAR_5]);
  VAR_6 |= VAR_0;
  FUNC_1(VAR_1, VAR_2[VAR_5], VAR_6);
 }
 VAR_4->gen.keep_vref_in_automute = 1;
}
