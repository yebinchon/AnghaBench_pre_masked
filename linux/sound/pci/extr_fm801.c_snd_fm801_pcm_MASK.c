
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; scalar_t__ info_flags; struct fm801* private_data; } ;
struct pci_dev {int dummy; } ;
struct fm801 {scalar_t__ multichannel; struct snd_pcm* pcm; int card; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,char*) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct fm801 *VAR_6, int VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_6(VAR_6->dev);
 struct snd_pcm *VAR_9;
 int VAR_10;

 if ((VAR_10 = FUNC_3(VAR_6->card, "FM801", VAR_7, 1, 1, &VAR_9)) < 0)
  return VAR_10;

 FUNC_4(VAR_9, VAR_2, &VAR_4);
 FUNC_4(VAR_9, VAR_1, &VAR_3);

 VAR_9->private_data = VAR_6;
 VAR_9->info_flags = 0;
 FUNC_5(VAR_9->name, "FM801");
 VAR_6->pcm = VAR_9;

 FUNC_2(VAR_9, VAR_0,
           FUNC_0(VAR_8),
           VAR_6->multichannel ? 128*1024 : 64*1024, 128*1024);

 return FUNC_1(VAR_9, VAR_2,
         VAR_5,
         VAR_6->multichannel ? 6 : 2, 0,
         ((void*)0));
}
