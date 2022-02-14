
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_dev_data {scalar_t__ base; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct spdif_dev_data* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_7,
         struct snd_soc_dai *VAR_8)
{
 u32 VAR_9;
 struct spdif_dev_data *VAR_10 = FUNC_0(VAR_8->dev);

 VAR_9 = FUNC_1(VAR_10->base + VAR_2);
 VAR_9 |= VAR_3;
 FUNC_2(VAR_9, VAR_10->base + VAR_2);

 if (VAR_7->stream == VAR_0) {
  FUNC_2(VAR_1,
         VAR_10->base + VAR_6);
  FUNC_2(VAR_4,
         VAR_10->base + VAR_5);
 }

 return 0;
}
