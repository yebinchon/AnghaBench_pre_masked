
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_dev_data {scalar_t__ base; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct spdif_dev_data* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4, int VAR_5,
         struct snd_soc_dai *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;
 struct spdif_dev_data *VAR_9 = FUNC_0(VAR_6->dev);

 VAR_7 = FUNC_1(VAR_9->base + VAR_2);
 switch (VAR_5) {
 case 130:
 case 131:
 case 132:
  VAR_7 |= VAR_3;
  FUNC_3(VAR_7, VAR_9->base + VAR_2);
  if (VAR_4->stream == VAR_1)
   VAR_8 = FUNC_2(VAR_6);
  break;
 case 129:
 case 128:
 case 133:
  VAR_7 &= ~VAR_3;
  FUNC_3(VAR_7, VAR_9->base + VAR_2);
  break;
 default:
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
