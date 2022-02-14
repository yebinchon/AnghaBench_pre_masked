
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {int pci; struct snd_pcm* pcm_4ch; int card; } ;
struct snd_pcm {int name; scalar_t__ info_flags; struct snd_ymfpci* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int ,int *) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int,int ,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;

int FUNC_6(struct snd_ymfpci *VAR_4, int VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_3(VAR_4->card, "YMFPCI - Rear", VAR_5, 1, 0, &VAR_6)) < 0)
  return VAR_7;
 VAR_6->private_data = VAR_4;

 FUNC_4(VAR_6, VAR_1, &VAR_2);


 VAR_6->info_flags = 0;
 FUNC_5(VAR_6->name, "YMFPCI - Rear PCM");
 VAR_4->pcm_4ch = VAR_6;

 FUNC_2(VAR_6, VAR_0,
           FUNC_0(VAR_4->pci), 64*1024, 256*1024);

 return FUNC_1(VAR_6, VAR_1,
         VAR_3, 2, 0, ((void*)0));
}
