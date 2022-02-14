
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct twl4030_priv {unsigned int* ctl_cache; } ;
struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;






 struct twl4030_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int ,unsigned int*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct snd_soc_component *VAR_3, unsigned int VAR_4)
{
 struct twl4030_priv *VAR_5 = FUNC_0(VAR_3);
 u8 VAR_6 = 0;

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 switch (VAR_4) {
 case 133:
 case 129:
 case 128:
 case 131:
 case 130:
 case 132:
  VAR_6 = VAR_5->ctl_cache[VAR_4 - 133];
  break;
 default:
  FUNC_1(VAR_2, &VAR_6, VAR_4);
  break;
 }

 return VAR_6;
}
