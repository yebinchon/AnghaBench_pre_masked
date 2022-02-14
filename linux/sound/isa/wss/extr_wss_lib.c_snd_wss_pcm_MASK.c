
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wss {scalar_t__ hardware; int dma1; int dma2; struct snd_pcm* pcm; TYPE_1__* card; scalar_t__ single_dma; } ;
struct snd_pcm {int name; int info_flags; struct snd_wss* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct snd_wss*) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct snd_wss *VAR_8, int VAR_9)
{
 struct snd_pcm *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_8->card, "WSS", VAR_9, 1, 1, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_2(VAR_10, VAR_4, &VAR_7);
 FUNC_2(VAR_10, VAR_3, &VAR_6);


 VAR_10->private_data = VAR_8;
 VAR_10->info_flags = 0;
 if (VAR_8->single_dma)
  VAR_10->info_flags |= VAR_1;
 if (VAR_8->hardware != VAR_5)
  VAR_10->info_flags |= VAR_2;
 FUNC_4(VAR_10->name, FUNC_3(VAR_8));

 FUNC_0(VAR_10, VAR_0,
           VAR_8->card->dev,
           64*1024, VAR_8->dma1 > 3 || VAR_8->dma2 > 3 ? 128*1024 : 64*1024);

 VAR_8->pcm = VAR_10;
 return 0;
}
