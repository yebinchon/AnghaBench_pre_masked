
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {struct snd_pcm* pcm; int pci; int card; } ;
struct snd_pcm {int info_flags; struct snd_sb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_sb *VAR_6, int VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6->card, "ALS4000 DSP", VAR_7, 1, 1, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8->private_data = VAR_6;
 VAR_8->info_flags = VAR_1;
 FUNC_3(VAR_8, VAR_3, &VAR_5);
 FUNC_3(VAR_8, VAR_2, &VAR_4);

 FUNC_1(VAR_8, VAR_0, FUNC_0(VAR_6->pci),
           64*1024, 64*1024);

 VAR_6->pcm = VAR_8;

 return 0;
}
