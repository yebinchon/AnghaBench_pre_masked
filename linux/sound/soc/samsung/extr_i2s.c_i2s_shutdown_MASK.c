
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct samsung_i2s_priv {int pcm_lock; } ;
struct i2s_dai {scalar_t__ bfs; scalar_t__ rfs; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2s_dai* FUNC_0 (struct i2s_dai*) ;
 scalar_t__ FUNC_1 (struct i2s_dai*) ;
 int FUNC_2 (int ) ;
 struct samsung_i2s_priv* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct i2s_dai* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_7(struct snd_pcm_substream *VAR_2,
 struct snd_soc_dai *VAR_3)
{
 struct samsung_i2s_priv *VAR_4 = FUNC_3(VAR_3);
 struct i2s_dai *VAR_5 = FUNC_6(VAR_3);
 struct i2s_dai *VAR_6 = FUNC_0(VAR_5);
 unsigned long VAR_7;

 FUNC_4(&VAR_4->pcm_lock, VAR_7);

 VAR_5->mode &= ~VAR_1;
 VAR_5->mode &= ~VAR_0;

 if (FUNC_1(VAR_6))
  VAR_6->mode |= VAR_0;


 VAR_5->rfs = 0;
 VAR_5->bfs = 0;

 FUNC_5(&VAR_4->pcm_lock, VAR_7);

 FUNC_2(VAR_3->dev);
}
