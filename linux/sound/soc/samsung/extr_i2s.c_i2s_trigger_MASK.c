
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct samsung_i2s_priv {int lock; } ;
struct i2s_dai {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;






 int FUNC_0 (struct i2s_dai*) ;
 int FUNC_1 (struct i2s_dai*,int ) ;
 int FUNC_2 (struct i2s_dai*,int) ;
 int FUNC_3 (struct i2s_dai*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct samsung_i2s_priv* FUNC_6 (struct snd_soc_dai*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct i2s_dai* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_4,
 int VAR_5, struct snd_soc_dai *VAR_6)
{
 struct samsung_i2s_priv *VAR_7 = FUNC_6(VAR_6);
 int VAR_8 = (VAR_4->stream == VAR_3);
 struct snd_soc_pcm_runtime *VAR_9 = VAR_4->private_data;
 struct i2s_dai *VAR_10 = FUNC_9(VAR_9->cpu_dai);
 unsigned long VAR_11;

 switch (VAR_5) {
 case 130:
 case 131:
 case 132:
  FUNC_4(VAR_6->dev);
  FUNC_7(&VAR_7->lock, VAR_11);

  if (FUNC_0(VAR_10)) {
   FUNC_8(&VAR_7->lock, VAR_11);
   return -VAR_0;
  }

  if (VAR_8)
   FUNC_2(VAR_10, 1);
  else
   FUNC_3(VAR_10, 1);

  FUNC_8(&VAR_7->lock, VAR_11);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_7(&VAR_7->lock, VAR_11);

  if (VAR_8) {
   FUNC_2(VAR_10, 0);
   FUNC_1(VAR_10, VAR_1);
  } else {
   FUNC_3(VAR_10, 0);
   FUNC_1(VAR_10, VAR_2);
  }

  FUNC_8(&VAR_7->lock, VAR_11);
  FUNC_5(VAR_6->dev);
  break;
 }

 return 0;
}
