
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; int info_flags; struct snd_ad1816a* private_data; } ;
struct snd_ad1816a {int dma1; int dma2; struct snd_pcm* pcm; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_ad1816a*) ;
 int FUNC_1 (struct snd_ad1816a*) ;
 int VAR_5 ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct snd_ad1816a *VAR_6, int VAR_7)
{
 int VAR_8;
 struct snd_pcm *VAR_9;

 if ((VAR_8 = FUNC_3(VAR_6->card, "AD1816A", VAR_7, 1, 1, &VAR_9)))
  return VAR_8;

 FUNC_4(VAR_9, VAR_3, &VAR_5);
 FUNC_4(VAR_9, VAR_2, &VAR_4);

 VAR_9->private_data = VAR_6;
 VAR_9->info_flags = (VAR_6->dma1 == VAR_6->dma2 ) ? VAR_1 : 0;

 FUNC_5(VAR_9->name, FUNC_0(VAR_6));
 FUNC_1(VAR_6);

 FUNC_2(VAR_9, VAR_0,
           VAR_6->card->dev,
           64*1024, VAR_6->dma1 > 3 || VAR_6->dma2 > 3 ? 128*1024 : 64*1024);

 VAR_6->pcm = VAR_9;
 return 0;
}
