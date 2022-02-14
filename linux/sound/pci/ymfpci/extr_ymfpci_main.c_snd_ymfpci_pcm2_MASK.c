
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {scalar_t__ device_id; int pci; struct snd_pcm* pcm2; int card; } ;
struct snd_pcm {int name; scalar_t__ info_flags; struct snd_ymfpci* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int ,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,char*) ;

int FUNC_5(struct snd_ymfpci *VAR_4, int VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_2(VAR_4->card, "YMFPCI - PCM2", VAR_5, 0, 1, &VAR_6)) < 0)
  return VAR_7;
 VAR_6->private_data = VAR_4;

 FUNC_3(VAR_6, VAR_2, &VAR_3);


 VAR_6->info_flags = 0;
 FUNC_4(VAR_6->name, "YMFPCI - %s",
  VAR_4->device_id == VAR_0 ? "Direct Recording" : "AC'97");
 VAR_4->pcm2 = VAR_6;

 FUNC_1(VAR_6, VAR_1,
           FUNC_0(VAR_4->pci), 64*1024, 256*1024);

 return 0;
}
