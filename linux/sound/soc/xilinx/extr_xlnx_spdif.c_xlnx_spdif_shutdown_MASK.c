
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdif_dev_data {scalar_t__ base; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct spdif_dev_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct spdif_dev_data *VAR_4 = FUNC_0(VAR_3->dev);

 FUNC_1(VAR_1, VAR_4->base + VAR_0);
}
