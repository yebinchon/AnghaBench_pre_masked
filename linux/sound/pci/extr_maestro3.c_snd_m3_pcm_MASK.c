
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct snd_m3* private_data; } ;
struct snd_m3 {int pci; struct snd_pcm* pcm; TYPE_1__* card; } ;
struct TYPE_2__ {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ,int ,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct snd_m3 * VAR_7, int VAR_8)
{
 struct snd_pcm *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_7->card, VAR_7->card->driver, VAR_8,
     VAR_1, VAR_0, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(VAR_9, VAR_4, &VAR_6);
 FUNC_3(VAR_9, VAR_3, &VAR_5);

 VAR_9->private_data = VAR_7;
 VAR_9->info_flags = 0;
 FUNC_4(VAR_9->name, VAR_7->card->driver);
 VAR_7->pcm = VAR_9;

 FUNC_1(VAR_9, VAR_2,
           FUNC_0(VAR_7->pci), 64*1024, 64*1024);

 return 0;
}
