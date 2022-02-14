
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {char* name; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct adau1373 {TYPE_1__* dais; } ;
struct TYPE_2__ {int enable_src; } ;


 struct adau1373* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
 struct snd_soc_dapm_widget *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_1(VAR_0->dapm);
 struct adau1373 *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;

 VAR_4 = VAR_1->name[3] - '1';

 return VAR_3->dais[VAR_4].enable_src;
}
