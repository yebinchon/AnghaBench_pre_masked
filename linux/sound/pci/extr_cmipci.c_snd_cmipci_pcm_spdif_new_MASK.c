
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct cmipci* private_data; } ;
struct cmipci {int max_channels; int pci; struct snd_pcm* pcm_spdif; TYPE_1__* card; } ;
struct TYPE_2__ {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct cmipci *VAR_6, int VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6->card, VAR_6->card->driver, VAR_7, 1, 1, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_4(VAR_8, VAR_2, &VAR_4);
 FUNC_4(VAR_8, VAR_1, &VAR_3);

 VAR_8->private_data = VAR_6;
 VAR_8->info_flags = 0;
 FUNC_5(VAR_8->name, "C-Media PCI IEC958");
 VAR_6->pcm_spdif = VAR_8;

 FUNC_2(VAR_8, VAR_0,
           FUNC_0(VAR_6->pci), 64*1024, 128*1024);

 VAR_9 = FUNC_1(VAR_8, VAR_2,
         VAR_5, VAR_6->max_channels, 0,
         ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
