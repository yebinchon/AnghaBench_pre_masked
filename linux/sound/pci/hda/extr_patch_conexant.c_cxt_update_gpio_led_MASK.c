
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {unsigned int gpio_led; scalar_t__ mute_led_polarity; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,unsigned int,int,unsigned int) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1, unsigned int VAR_2,
    bool VAR_3)
{
 struct conexant_spec *VAR_4 = VAR_1->spec;
 unsigned int VAR_5 = VAR_4->gpio_led;

 if (VAR_4->mute_led_polarity)
  VAR_3 = !VAR_3;

 if (VAR_3)
  VAR_4->gpio_led |= VAR_2;
 else
  VAR_4->gpio_led &= ~VAR_2;
 FUNC_0(VAR_1, "mask:%d enabled:%d gpio_led:%d\n",
   VAR_2, VAR_3, VAR_4->gpio_led);
 if (VAR_4->gpio_led != VAR_5)
  FUNC_1(VAR_1, 0x01, 0, VAR_0,
        VAR_4->gpio_led);
}
