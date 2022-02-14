
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {unsigned int gpio_data; } ;


 int FUNC_0 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, unsigned int VAR_1,
     bool VAR_2)
{
 struct alc_spec *VAR_3 = VAR_0->spec;
 unsigned int VAR_4 = VAR_3->gpio_data;

 if (VAR_2)
  VAR_3->gpio_data |= VAR_1;
 else
  VAR_3->gpio_data &= ~VAR_1;
 if (VAR_4 != VAR_3->gpio_data)
  FUNC_0(VAR_0);
}
