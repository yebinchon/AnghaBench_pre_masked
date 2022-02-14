
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int version; int dma8; scalar_t__ dma16; struct snd_card* card; } ;
struct snd_pcm {struct snd_sb* private_data; int info_flags; int name; } ;
struct snd_card {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,int,size_t) ;
 int FUNC_1 (struct snd_card*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int,int) ;

int FUNC_4(struct snd_sb *VAR_6, int VAR_7)
{
 struct snd_card *VAR_8 = VAR_6->card;
 struct snd_pcm *VAR_9;
 int VAR_10;
 size_t VAR_11 = 64 * 1024;

 if ((VAR_10 = FUNC_1(VAR_8, "SB8 DSP", VAR_7, 1, 1, &VAR_9)) < 0)
  return VAR_10;
 FUNC_3(VAR_9->name, "DSP v%i.%i", VAR_6->version >> 8, VAR_6->version & 0xff);
 VAR_9->info_flags = VAR_1;
 VAR_9->private_data = VAR_6;

 FUNC_2(VAR_9, VAR_3, &VAR_5);
 FUNC_2(VAR_9, VAR_2, &VAR_4);

 if (VAR_6->dma8 > 3 || VAR_6->dma16 >= 0)
  VAR_11 = 128 * 1024;
 FUNC_0(VAR_9, VAR_0,
           VAR_8->dev,
           64*1024, VAR_11);

 return 0;
}
