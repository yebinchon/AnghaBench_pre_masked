
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int irq_lock; int * substream; int sai_ck; int regmap; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct stm32_sai_sub_data* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_pcm_substream *VAR_2,
          struct snd_soc_dai *VAR_3)
{
 struct stm32_sai_sub_data *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;

 FUNC_1(VAR_4->regmap, VAR_1, VAR_0, 0);

 FUNC_0(VAR_4->sai_ck);

 FUNC_3(&VAR_4->irq_lock, VAR_5);
 VAR_4->substream = ((void*)0);
 FUNC_4(&VAR_4->irq_lock, VAR_5);
}
