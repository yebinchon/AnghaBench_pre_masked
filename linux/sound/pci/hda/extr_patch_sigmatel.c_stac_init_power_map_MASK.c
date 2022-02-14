
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int num_pwrs; scalar_t__* pwr_nids; scalar_t__ vref_mute_led_nid; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,scalar_t__) ;
 int VAR_2 ;
 unsigned int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,int ) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_3)
{
 struct sigmatel_spec *VAR_4 = VAR_3->spec;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_pwrs; VAR_5++) {
  hda_nid_t VAR_6 = VAR_4->pwr_nids[VAR_5];
  unsigned int VAR_7 = FUNC_2(VAR_3, VAR_6);
  VAR_7 = FUNC_0(VAR_7);
  if (VAR_7 == VAR_0 &&
      VAR_4->vref_mute_led_nid != VAR_6 &&
      FUNC_1(VAR_3, VAR_6)) {
   FUNC_3(VAR_3, VAR_6,
           VAR_2);
  } else {
   if (VAR_7 == VAR_1)
    FUNC_4(VAR_3, VAR_6, 0, 0);
   else
    FUNC_4(VAR_3, VAR_6, 1, 0);
  }
 }
}
