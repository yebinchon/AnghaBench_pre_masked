
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int gpio_write_delay; } ;


 int FUNC_0 (struct hda_codec*,struct hda_fixup const*,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0,
         const struct hda_fixup *VAR_1, int VAR_2)
{
 struct alc_spec *VAR_3 = VAR_0->spec;

 VAR_3->gpio_write_delay = 1;
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
