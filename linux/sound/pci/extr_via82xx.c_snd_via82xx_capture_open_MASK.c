
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {int dummy; } ;
struct via82xx {size_t capture_devno; struct viadev* devs; } ;
struct snd_pcm_substream {TYPE_1__* pcm; } ;
struct TYPE_2__ {size_t device; } ;


 struct via82xx* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct via82xx*,struct viadev*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct via82xx *VAR_1 = FUNC_0(VAR_0);
 struct viadev *VAR_2 = &VAR_1->devs[VAR_1->capture_devno + VAR_0->pcm->device];

 return FUNC_1(VAR_1, VAR_2, VAR_0);
}
