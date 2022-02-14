
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct pm860x_priv {int dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pm860x_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2,
     int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct pm860x_priv *VAR_7 = FUNC_0(VAR_6);

 if (VAR_5 == VAR_1)
  VAR_7->dir = VAR_1;
 else
  return -VAR_0;

 return 0;
}
