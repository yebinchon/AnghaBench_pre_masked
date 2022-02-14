
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct snd_ice1712* private_data; } ;
struct snd_ice1712 {TYPE_1__* card; int pci; struct snd_pcm* pcm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_ice1712 *VAR_5, int VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5->card, "ICE1712 consumer", VAR_6, 1, 1, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(VAR_7, VAR_2, &VAR_4);
 FUNC_4(VAR_7, VAR_1, &VAR_3);

 VAR_7->private_data = VAR_5;
 VAR_7->info_flags = 0;
 FUNC_5(VAR_7->name, "ICE1712 consumer");
 VAR_5->pcm = VAR_7;

 FUNC_2(VAR_7, VAR_0,
           FUNC_1(VAR_5->pci), 64*1024, 64*1024);

 FUNC_0(VAR_5->card->dev,
   "Consumer PCM code does not work well at the moment --jk\n");

 return 0;
}
