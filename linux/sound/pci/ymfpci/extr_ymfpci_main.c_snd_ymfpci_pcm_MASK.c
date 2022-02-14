
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {int pci; struct snd_pcm* pcm; int card; } ;
struct snd_pcm {int name; scalar_t__ info_flags; struct snd_ymfpci* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int ,int *) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct snd_ymfpci *VAR_6, int VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_3(VAR_6->card, "YMFPCI", VAR_7, 32, 1, &VAR_8)) < 0)
  return VAR_9;
 VAR_8->private_data = VAR_6;

 FUNC_4(VAR_8, VAR_2, &VAR_5);
 FUNC_4(VAR_8, VAR_1, &VAR_4);


 VAR_8->info_flags = 0;
 FUNC_5(VAR_8->name, "YMFPCI");
 VAR_6->pcm = VAR_8;

 FUNC_2(VAR_8, VAR_0,
           FUNC_0(VAR_6->pci), 64*1024, 256*1024);

 return FUNC_1(VAR_8, VAR_2,
         VAR_3, 2, 0, ((void*)0));
}
