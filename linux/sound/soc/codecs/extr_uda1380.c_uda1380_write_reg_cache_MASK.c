
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uda1380_priv {int* reg_cache; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 struct uda1380_priv* FUNC_1 (struct snd_soc_component*) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct snd_soc_component *VAR_2,
 u16 VAR_3, unsigned int VAR_4)
{
 struct uda1380_priv *VAR_5 = FUNC_1(VAR_2);
 u16 *VAR_6 = VAR_5->reg_cache;

 if (VAR_3 >= VAR_0)
  return;
 if ((VAR_3 >= 0x10) && (VAR_6[VAR_3] != VAR_4))
  FUNC_0(VAR_3 - 0x10, &VAR_1);
 VAR_6[VAR_3] = VAR_4;
}
