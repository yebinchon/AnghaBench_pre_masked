
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct uda1380_priv {unsigned int* reg_cache; } ;
struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct uda1380_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct snd_soc_component *VAR_2,
 unsigned int VAR_3)
{
 struct uda1380_priv *VAR_4 = FUNC_0(VAR_2);
 u16 *VAR_5 = VAR_4->reg_cache;

 if (VAR_3 == VAR_1)
  return 0;
 if (VAR_3 >= VAR_0)
  return -1;
 return VAR_5[VAR_3];
}
