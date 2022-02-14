
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs35l35_private {unsigned int sclk; } ;


 struct cs35l35_private* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0,
    int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_0->component;
 struct cs35l35_private *VAR_5 = FUNC_0(VAR_4);


 VAR_5->sclk = VAR_2;

 return 0;
}
