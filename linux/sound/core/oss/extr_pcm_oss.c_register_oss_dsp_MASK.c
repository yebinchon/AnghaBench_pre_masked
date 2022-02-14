
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int device; TYPE_1__* card; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm*,char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int,int *,struct snd_pcm*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_0,
        VAR_2->card, VAR_3, &VAR_1,
        VAR_2) < 0) {
  FUNC_0(VAR_2, "unable to register OSS PCM device %i:%i\n",
      VAR_2->card->number, VAR_2->device);
 }
}
