
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {char* name; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct adau1373 {TYPE_1__* dais; } ;
struct TYPE_2__ {scalar_t__ clk_src; int master; } ;


 scalar_t__ VAR_0 ;
 struct adau1373* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_1,
 struct snd_soc_dapm_widget *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1->dapm);
 struct adau1373 *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5;
 const char *VAR_6;

 VAR_5 = VAR_2->name[3] - '1';

 if (!VAR_4->dais[VAR_5].master)
  return 0;

 if (VAR_4->dais[VAR_5].clk_src == VAR_0)
  VAR_6 = "SYSCLK1";
 else
  VAR_6 = "SYSCLK2";

 return FUNC_2(VAR_1->name, VAR_6) == 0;
}
