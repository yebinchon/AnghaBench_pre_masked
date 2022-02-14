
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {char* name; int info_flags; struct snd_es18xx* private_data; } ;
struct snd_es18xx {int version; int caps; int dma1; int dma2; struct snd_pcm* pcm; } ;
struct snd_card {int dev; struct snd_es18xx* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_1 (struct snd_card*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_9, int VAR_10)
{
 struct snd_es18xx *VAR_11 = VAR_9->private_data;
        struct snd_pcm *VAR_12;
 char VAR_13[16];
 int VAR_14;

 FUNC_3(VAR_13, "ES%x", VAR_11->version);
 if (VAR_11->caps & VAR_1)
  VAR_14 = FUNC_1(VAR_9, VAR_13, VAR_10, 2, 1, &VAR_12);
 else
  VAR_14 = FUNC_1(VAR_9, VAR_13, VAR_10, 1, 1, &VAR_12);
        if (VAR_14 < 0)
                return VAR_14;

 FUNC_2(VAR_12, VAR_6, &VAR_8);
 FUNC_2(VAR_12, VAR_5, &VAR_7);


        VAR_12->private_data = VAR_11;
        VAR_12->info_flags = 0;
 if (VAR_11->caps & VAR_0)
  VAR_12->info_flags |= VAR_4;
 if (! (VAR_11->caps & VAR_1))
  VAR_12->info_flags |= VAR_3;
 FUNC_3(VAR_12->name, "ESS AudioDrive ES%x", VAR_11->version);
        VAR_11->pcm = VAR_12;

 FUNC_0(VAR_12, VAR_2,
           VAR_9->dev,
           64*1024,
           VAR_11->dma1 > 3 || VAR_11->dma2 > 3 ? 128*1024 : 64*1024);
 return 0;
}
