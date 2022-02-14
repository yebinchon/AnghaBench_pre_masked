
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct samsung_i2s_priv {int quirks; int pcm_lock; } ;
struct i2s_dai {TYPE_1__* priv; int mode; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2s_dai*) ;
 struct i2s_dai* FUNC_1 (struct i2s_dai*) ;
 scalar_t__ FUNC_2 (struct i2s_dai*) ;
 int FUNC_3 (int ) ;
 struct samsung_i2s_priv* FUNC_4 (struct snd_soc_dai*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct i2s_dai* FUNC_7 (struct snd_soc_dai*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_5,
   struct snd_soc_dai *VAR_6)
{
 struct samsung_i2s_priv *VAR_7 = FUNC_4(VAR_6);
 struct i2s_dai *VAR_8 = FUNC_7(VAR_6);
 struct i2s_dai *VAR_9 = FUNC_1(VAR_8);
 unsigned long VAR_10;

 FUNC_3(VAR_6->dev);

 FUNC_5(&VAR_7->pcm_lock, VAR_10);

 VAR_8->mode |= VAR_2;

 if (FUNC_2(VAR_9))
  VAR_8->mode &= ~VAR_1;
 else
  VAR_8->mode |= VAR_1;

 if (!FUNC_0(VAR_8) && (VAR_7->quirks & VAR_4))
  FUNC_8(VAR_0, VAR_8->priv->addr + VAR_3);

 FUNC_6(&VAR_7->pcm_lock, VAR_10);

 return 0;
}
