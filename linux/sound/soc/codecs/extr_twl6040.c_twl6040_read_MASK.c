
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct twl6040_data {unsigned int* dl12_cache; } ;
struct twl6040 {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;





 struct twl6040_data* FUNC_0 (struct snd_soc_component*) ;
 struct twl6040* FUNC_1 (struct snd_soc_component*) ;
 unsigned int FUNC_2 (struct twl6040*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct snd_soc_component *VAR_2, unsigned int VAR_3)
{
 struct twl6040_data *VAR_4 = FUNC_0(VAR_2);
 struct twl6040 *VAR_5 = FUNC_1(VAR_2);
 u8 VAR_6;

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 switch (VAR_3) {
 case 129:
 case 128:
 case 132:
 case 131:
 case 130:
  VAR_6 = VAR_4->dl12_cache[VAR_3 - 129];
  break;
 default:
  VAR_6 = FUNC_2(VAR_5, VAR_3);
  break;
 }

 return VAR_6;
}
