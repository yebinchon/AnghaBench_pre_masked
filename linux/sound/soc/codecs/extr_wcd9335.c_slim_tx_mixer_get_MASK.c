
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wcd9335_codec {int tx_port_value; } ;
struct snd_soc_dapm_context {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct wcd9335_codec* FUNC_0 (int ) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{

 struct snd_soc_dapm_context *VAR_2 = FUNC_1(VAR_0);
 struct wcd9335_codec *VAR_3 = FUNC_0(VAR_2->dev);

 VAR_1->value.integer.value[0] = VAR_3->tx_port_value;

 return 0;
}
