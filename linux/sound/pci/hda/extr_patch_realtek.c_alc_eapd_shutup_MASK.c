
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int no_depop_delay; } ;


 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 struct alc_spec *VAR_1 = VAR_0->spec;

 FUNC_0(VAR_0, 0);
 if (!VAR_1->no_depop_delay)
  FUNC_2(200);
 FUNC_1(VAR_0);
}
