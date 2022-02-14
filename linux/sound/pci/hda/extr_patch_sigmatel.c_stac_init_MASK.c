
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_all_adcs; int * all_adcs; } ;
struct sigmatel_spec {int active_adcs; TYPE_2__ gen; scalar_t__ powerdown_adcs; int power_map_bits; scalar_t__ num_pwrs; int gpio_data; int gpio_dir; int gpio_mask; int eapd_mask; int eapd_switch; } ;
struct TYPE_3__ {int afg; } ;
struct hda_codec {TYPE_1__ core; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3)
{
 struct sigmatel_spec *VAR_4 = VAR_3->spec;
 int VAR_5;


 FUNC_3(VAR_3);





 if (!VAR_4->eapd_switch)
  VAR_4->gpio_data |= VAR_4->eapd_mask;
 FUNC_2(VAR_3, VAR_4->gpio_mask, VAR_4->gpio_dir, VAR_4->gpio_data);

 FUNC_1(VAR_3);


 if (VAR_4->num_pwrs)
  FUNC_0(VAR_3, VAR_3->core.afg, 0,
        VAR_1,
        VAR_4->power_map_bits);


 if (VAR_4->powerdown_adcs) {
  for (VAR_5 = 0; VAR_5 < VAR_4->gen.num_all_adcs; VAR_5++) {
   if (VAR_4->active_adcs & (1 << VAR_5))
    continue;
   FUNC_0(VAR_3, VAR_4->gen.all_adcs[VAR_5], 0,
         VAR_2,
         VAR_0);
  }
 }

 return 0;
}
