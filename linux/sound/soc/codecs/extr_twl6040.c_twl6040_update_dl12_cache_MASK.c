
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6040_data {int* dl12_cache; } ;
struct snd_soc_component {int dummy; } ;







 struct twl6040_data* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static inline void FUNC_1(struct snd_soc_component *VAR_0,
          u8 VAR_1, u8 VAR_2)
{
 struct twl6040_data *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 129:
 case 128:
 case 132:
 case 131:
 case 130:
  VAR_3->dl12_cache[VAR_1 - 129] = VAR_2;
  break;
 default:
  break;
 }
}
