
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int eapd_switch; int gpio_mask; int gpio_mute; int eapd_mask; int gpio_data; int gpio_dir; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 scalar_t__ FUNC_0 (struct hda_codec*,char*,int *) ;
 int FUNC_1 (struct hda_codec*,char*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct sigmatel_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 if (FUNC_0(VAR_0, "gpio_mask", &VAR_1->gpio_mask)) {
  VAR_1->eapd_mask = VAR_1->gpio_dir = VAR_1->gpio_data =
   VAR_1->gpio_mask;
 }
 if (FUNC_0(VAR_0, "gpio_dir", &VAR_1->gpio_dir))
  VAR_1->gpio_dir &= VAR_1->gpio_mask;
 if (FUNC_0(VAR_0, "gpio_data", &VAR_1->gpio_data))
  VAR_1->gpio_data &= VAR_1->gpio_mask;
 if (FUNC_0(VAR_0, "eapd_mask", &VAR_1->eapd_mask))
  VAR_1->eapd_mask &= VAR_1->gpio_mask;
 if (FUNC_0(VAR_0, "gpio_mute", &VAR_1->gpio_mute))
  VAR_1->gpio_mute &= VAR_1->gpio_mask;
 VAR_2 = FUNC_1(VAR_0, "eapd_switch");
 if (VAR_2 >= 0)
  VAR_1->eapd_switch = VAR_2;
}
