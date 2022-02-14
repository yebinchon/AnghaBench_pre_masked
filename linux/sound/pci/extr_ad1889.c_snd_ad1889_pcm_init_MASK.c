
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct snd_ad1889* private_data; } ;
struct snd_ad1889 {int pci; int * csubs; int * psubs; struct snd_pcm* pcm; TYPE_1__* card; } ;
struct TYPE_2__ {int shortname; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct snd_ad1889 *VAR_6, int VAR_7)
{
 int VAR_8;
 struct snd_pcm *VAR_9;

 VAR_8 = FUNC_2(VAR_6->card, VAR_6->card->driver, VAR_7, 1, 1, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_3(VAR_9, VAR_3,
   &VAR_5);
 FUNC_3(VAR_9, VAR_2,
   &VAR_4);

 VAR_9->private_data = VAR_6;
 VAR_9->info_flags = 0;
 FUNC_4(VAR_9->name, VAR_6->card->shortname);

 VAR_6->pcm = VAR_9;
 VAR_6->psubs = ((void*)0);
 VAR_6->csubs = ((void*)0);

 FUNC_1(VAR_9, VAR_1,
      FUNC_0(VAR_6->pci),
      VAR_0 / 2,
      VAR_0);

 return 0;
}
