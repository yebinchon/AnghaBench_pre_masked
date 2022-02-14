
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {TYPE_1__** widgets; } ;
struct TYPE_3__ {struct snd_soc_dapm_context* dapm; } ;


 TYPE_2__* FUNC_0 (struct snd_kcontrol*) ;

struct snd_soc_dapm_context *FUNC_1(
 struct snd_kcontrol *VAR_0)
{
 return FUNC_0(VAR_0)->widgets[0]->dapm;
}
