
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {unsigned int* ctl_cache; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;






 struct twl4030_priv* FUNC_0 (struct snd_soc_component*) ;
 scalar_t__ FUNC_1 (struct twl4030_priv*,unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 struct twl4030_priv *VAR_4 = FUNC_0(VAR_1);


 switch (VAR_2) {
 case 133:
 case 129:
 case 128:
 case 131:
 case 130:
 case 132:
  VAR_4->ctl_cache[VAR_2 - 133] = VAR_3;
  break;
 default:
  break;
 }

 if (FUNC_1(VAR_4, VAR_2))
  return FUNC_2(VAR_0, VAR_3, VAR_2);

 return 0;
}
