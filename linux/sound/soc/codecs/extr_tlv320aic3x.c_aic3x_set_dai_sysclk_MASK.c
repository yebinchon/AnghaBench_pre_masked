
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct aic3x_priv {unsigned int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct aic3x_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
    int VAR_6, unsigned int VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_5->component;
 struct aic3x_priv *VAR_10 = FUNC_0(VAR_9);


 FUNC_1(VAR_9, VAR_0, VAR_3,
    VAR_6 << VAR_4);
 FUNC_1(VAR_9, VAR_0, VAR_1,
    VAR_6 << VAR_2);

 VAR_10->sysclk = VAR_7;
 return 0;
}
