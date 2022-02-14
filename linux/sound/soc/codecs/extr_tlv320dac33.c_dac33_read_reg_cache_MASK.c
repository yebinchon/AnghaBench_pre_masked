
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct tlv320dac33_priv {unsigned int* reg_cache; } ;
struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 struct tlv320dac33_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct snd_soc_component *VAR_1,
      unsigned VAR_2)
{
 struct tlv320dac33_priv *VAR_3 = FUNC_0(VAR_1);
 u8 *VAR_4 = VAR_3->reg_cache;
 if (VAR_2 >= VAR_0)
  return 0;

 return VAR_4[VAR_2];
}
