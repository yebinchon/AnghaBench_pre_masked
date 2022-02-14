
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {unsigned int gpio_mask; unsigned int gpio_dir; unsigned int gpio_data; } ;



__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_0, unsigned int VAR_1)
{
 struct alc_spec *VAR_2 = VAR_0->spec;

 VAR_2->gpio_mask |= VAR_1;
 VAR_2->gpio_dir |= VAR_1;
 VAR_2->gpio_data |= VAR_1;
}
