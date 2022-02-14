
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int version; scalar_t__ dma16; scalar_t__ dma8; struct snd_pcm* pcm; struct snd_card* card; } ;
struct snd_pcm {int info_flags; struct snd_sb* private_data; int name; } ;
struct snd_card {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_card*,int ) ;
 int FUNC_1 (int *,struct snd_sb*) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (struct snd_card*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,char*,int,int) ;

int FUNC_6(struct snd_sb *VAR_8, int VAR_9)
{
 struct snd_card *VAR_10 = VAR_8->card;
 struct snd_pcm *VAR_11;
 int VAR_12;

 if ((VAR_12 = FUNC_3(VAR_10, "SB16 DSP", VAR_9, 1, 1, &VAR_11)) < 0)
  return VAR_12;
 FUNC_5(VAR_11->name, "DSP v%i.%i", VAR_8->version >> 8, VAR_8->version & 0xff);
 VAR_11->info_flags = VAR_2;
 VAR_11->private_data = VAR_8;
 VAR_8->pcm = VAR_11;

 FUNC_4(VAR_11, VAR_4, &VAR_7);
 FUNC_4(VAR_11, VAR_3, &VAR_5);

 if (VAR_8->dma16 >= 0 && VAR_8->dma8 != VAR_8->dma16) {
  VAR_12 = FUNC_0(VAR_10, FUNC_1(
     &VAR_6, VAR_8));
  if (VAR_12)
   return VAR_12;
 } else {
  VAR_11->info_flags = VAR_1;
 }

 FUNC_2(VAR_11, VAR_0,
           VAR_10->dev,
           64*1024, 128*1024);
 return 0;
}
