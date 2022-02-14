
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; int info_flags; struct snd_es1688* private_data; } ;
struct snd_es1688 {struct snd_pcm* pcm; } ;
struct snd_card {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_es1688*) ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (struct snd_card*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct snd_card *VAR_6, struct snd_es1688 *VAR_7, int VAR_8)
{
 struct snd_pcm *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, "ESx688", VAR_8, 1, 1, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(VAR_9, VAR_3, &VAR_5);
 FUNC_3(VAR_9, VAR_2, &VAR_4);

 VAR_9->private_data = VAR_7;
 VAR_9->info_flags = VAR_1;
 FUNC_4(VAR_9->name, FUNC_0(VAR_7));
 VAR_7->pcm = VAR_9;

 FUNC_1(VAR_9, VAR_0,
           VAR_6->dev,
           64*1024, 64*1024);
 return 0;
}
