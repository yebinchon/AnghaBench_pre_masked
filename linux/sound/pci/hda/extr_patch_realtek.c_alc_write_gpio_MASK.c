
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ gpio_write_delay; int gpio_dir; int gpio_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2)
{
 struct alc_spec *VAR_3 = VAR_2->spec;

 if (!VAR_3->gpio_mask)
  return;

 FUNC_2(VAR_2, VAR_2->core.afg, 0,
       VAR_1, VAR_3->gpio_mask);
 FUNC_2(VAR_2, VAR_2->core.afg, 0,
       VAR_0, VAR_3->gpio_dir);
 if (VAR_3->gpio_write_delay)
  FUNC_1(1);
 FUNC_0(VAR_2);
}
