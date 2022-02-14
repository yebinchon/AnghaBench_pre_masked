
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigmatel_spec {int gpio_mask; } ;
struct hda_jack_callback {int private_data; } ;
struct hda_fixup {int dummy; } ;
struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_jack_callback*) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;
 struct hda_jack_callback* FUNC_3 (struct hda_codec*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3,
          const struct hda_fixup *VAR_4, int VAR_5)
{
 struct sigmatel_spec *VAR_6 = VAR_3->spec;
 struct hda_jack_callback *VAR_7;

 if (VAR_5 != VAR_1)
  return;


 FUNC_2(VAR_3, VAR_3->core.afg, 0,
      VAR_0, 0x02);
 VAR_7 = FUNC_3(VAR_3, VAR_3->core.afg,
         VAR_2);
 if (!FUNC_0(VAR_7))
  VAR_7->private_data = 0x02;

 VAR_6->gpio_mask |= 0x02;


 FUNC_1(VAR_3, 0x0e, 0x01813040);
}
