
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ioctl; int release; int open; } ;
struct snd_hwdep {TYPE_1__ ops; int name; } ;
struct snd_card {int dummy; } ;
struct TYPE_6__ {int wavefront; } ;
typedef TYPE_2__ snd_wavefront_card_t ;


 scalar_t__ FUNC_0 (struct snd_card*,char*,int,struct snd_hwdep**) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct snd_hwdep *FUNC_4(struct snd_card *VAR_3,
       int VAR_4,
       snd_wavefront_card_t *VAR_5)
{
 struct snd_hwdep *VAR_6;

 if (FUNC_1 (VAR_5) < 0) {
  return ((void*)0);
 }

 if (FUNC_2 (&VAR_5->wavefront) < 0) {
  return ((void*)0);
 }

 if (FUNC_0(VAR_3, "WaveFront", VAR_4, &VAR_6) < 0)
  return ((void*)0);
 FUNC_3 (VAR_6->name,
  "WaveFront (ICS2115) wavetable synthesizer");
 VAR_6->ops.open = VAR_1;
 VAR_6->ops.release = VAR_2;
 VAR_6->ops.ioctl = VAR_0;

 return VAR_6;
}
