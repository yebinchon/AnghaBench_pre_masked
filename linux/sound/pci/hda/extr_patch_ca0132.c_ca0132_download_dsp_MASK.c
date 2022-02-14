
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct ca0132_spec*) ;
 int FUNC_3 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_3->spec;


 return;


 if (VAR_4->dsp_state == VAR_2)
  return;

 FUNC_3(VAR_3);
 if (VAR_4->dsp_state != VAR_0) {
  VAR_4->dsp_state = VAR_1;

  if (!FUNC_0(VAR_3))
   VAR_4->dsp_state = VAR_2;
  else
   VAR_4->dsp_state = VAR_0;
 }


 if (VAR_4->dsp_state == VAR_0 && !FUNC_2(VAR_4))
  FUNC_1(VAR_3, 1);
}
