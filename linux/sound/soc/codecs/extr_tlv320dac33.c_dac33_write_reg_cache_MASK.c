
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tlv320dac33_priv {size_t* reg_cache; } ;
struct snd_soc_component {int dummy; } ;


 size_t VAR_0 ;
 struct tlv320dac33_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static inline void FUNC_1(struct snd_soc_component *VAR_1,
      u8 VAR_2, u8 VAR_3)
{
 struct tlv320dac33_priv *VAR_4 = FUNC_0(VAR_1);
 u8 *VAR_5 = VAR_4->reg_cache;
 if (VAR_2 >= VAR_0)
  return;

 VAR_5[VAR_2] = VAR_3;
}
