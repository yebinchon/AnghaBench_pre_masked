
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; } ;
struct samsung_i2s_priv {struct i2s_dai* dai; } ;
struct i2s_dai {int dummy; } ;


 struct samsung_i2s_priv* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static inline struct i2s_dai *FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct samsung_i2s_priv *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->dai[VAR_0->id - 1];
}
