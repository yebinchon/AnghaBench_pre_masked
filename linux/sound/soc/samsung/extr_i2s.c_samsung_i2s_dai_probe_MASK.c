
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct samsung_i2s_priv {int quirks; int lock; scalar_t__ addr; } ;
struct TYPE_2__ {int addr; } ;
struct i2s_dai {scalar_t__ bfs; scalar_t__ rfs; TYPE_1__ idma_playback; int dma_capture; int dma_playback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct i2s_dai* FUNC_0 (struct i2s_dai*) ;
 int FUNC_1 (struct i2s_dai*,int ) ;
 int FUNC_2 (struct i2s_dai*,int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int ,int ) ;
 int FUNC_4 (struct i2s_dai*,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct i2s_dai*) ;
 scalar_t__ FUNC_7 (struct i2s_dai*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct samsung_i2s_priv* FUNC_10 (struct snd_soc_dai*) ;
 int FUNC_11 (struct snd_soc_dai*,int *,int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct i2s_dai* FUNC_14 (struct snd_soc_dai*) ;
 int FUNC_15 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct snd_soc_dai *VAR_8)
{
 struct samsung_i2s_priv *VAR_9 = FUNC_10(VAR_8);
 struct i2s_dai *VAR_10 = FUNC_14(VAR_8);
 struct i2s_dai *VAR_11 = FUNC_0(VAR_10);
 unsigned long VAR_12;

 FUNC_8(VAR_8->dev);

 if (FUNC_7(VAR_10)) {

  FUNC_11(VAR_8, &VAR_10->dma_playback, ((void*)0));
 } else {
  FUNC_11(VAR_8, &VAR_10->dma_playback,
       &VAR_10->dma_capture);

  if (VAR_9->quirks & VAR_4)
   FUNC_15(VAR_0, VAR_9->addr + VAR_3);

  if (VAR_9->quirks & VAR_5)
   FUNC_5(VAR_9->addr,
        VAR_11->idma_playback.addr);
 }


 VAR_10->rfs = 0;
 VAR_10->bfs = 0;

 FUNC_12(&VAR_9->lock, VAR_12);
 FUNC_4(VAR_10, 0);
 FUNC_2(VAR_10, 0);
 FUNC_1(VAR_10, VAR_2);
 FUNC_1(VAR_11, VAR_2);
 FUNC_1(VAR_10, VAR_1);
 FUNC_13(&VAR_9->lock, VAR_12);


 if (!FUNC_6(VAR_11))
  FUNC_3(VAR_8, VAR_6,
    0, VAR_7);
 FUNC_9(VAR_8->dev);

 return 0;
}
