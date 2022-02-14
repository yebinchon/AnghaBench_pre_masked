
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int mute_led_eapd; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 struct hda_codec *VAR_3 = VAR_1;
 struct conexant_spec *VAR_4 = VAR_3->spec;

 FUNC_0(VAR_3, VAR_4->mute_led_eapd, 0,
       VAR_0,
       VAR_2 ? 0x00 : 0x02);
}
