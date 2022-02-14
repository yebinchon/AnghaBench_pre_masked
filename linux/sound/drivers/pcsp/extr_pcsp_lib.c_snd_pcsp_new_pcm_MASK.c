
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcsp {TYPE_1__* pcm; int card; } ;
struct TYPE_4__ {int name; int info_flags; struct snd_pcsp* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct snd_pcsp *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6->card, "pcspeaker", 0, 1, 0, &VAR_6->pcm);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_6->pcm, VAR_4,
   &VAR_5);

 VAR_6->pcm->private_data = VAR_6;
 VAR_6->pcm->info_flags = VAR_3;
 FUNC_4(VAR_6->pcm->name, "pcsp");

 FUNC_1(VAR_6->pcm,
           VAR_2,
           FUNC_0
           (VAR_0), VAR_1,
           VAR_1);

 return 0;
}
