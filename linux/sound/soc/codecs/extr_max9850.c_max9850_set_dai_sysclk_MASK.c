
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct max9850_priv {unsigned int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max9850_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2,
  int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct max9850_priv *VAR_7 = FUNC_0(VAR_6);


 if (VAR_4 <= 13000000)
  FUNC_1(VAR_6, VAR_1, 0x0);
 else if (VAR_4 <= 26000000)
  FUNC_1(VAR_6, VAR_1, 0x4);
 else if (VAR_4 <= 40000000)
  FUNC_1(VAR_6, VAR_1, 0x8);
 else
  return -VAR_0;

 VAR_7->sysclk = VAR_4;
 return 0;
}
