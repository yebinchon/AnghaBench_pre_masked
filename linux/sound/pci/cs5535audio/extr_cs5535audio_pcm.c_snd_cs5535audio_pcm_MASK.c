
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct cs5535audio* private_data; } ;
struct cs5535audio {struct snd_pcm* pcm; int pci; TYPE_1__* dmas; int card; } ;
struct TYPE_2__ {int * ops; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct cs5535audio *VAR_9)
{
 struct snd_pcm *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_9->card, "CS5535 Audio", 0, 1, 1, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->dmas[VAR_1].ops =
     &VAR_7;
 VAR_9->dmas[VAR_0].ops =
     &VAR_5;
 FUNC_3(VAR_10, VAR_4,
     &VAR_8);
 FUNC_3(VAR_10, VAR_3,
     &VAR_6);

 VAR_10->private_data = VAR_9;
 VAR_10->info_flags = 0;
 FUNC_4(VAR_10->name, "CS5535 Audio");

 FUNC_1(VAR_10, VAR_2,
     FUNC_0(VAR_9->pci),
     64*1024, 128*1024);
 VAR_9->pcm = VAR_10;

 return 0;
}
