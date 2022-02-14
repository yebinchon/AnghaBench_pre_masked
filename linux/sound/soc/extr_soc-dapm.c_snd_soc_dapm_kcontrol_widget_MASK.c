
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dapm_widget** widgets; } ;


 TYPE_1__* FUNC_0 (struct snd_kcontrol*) ;

struct snd_soc_dapm_widget *FUNC_1(
    struct snd_kcontrol *VAR_0)
{
 return FUNC_0(VAR_0)->widgets[0];
}
