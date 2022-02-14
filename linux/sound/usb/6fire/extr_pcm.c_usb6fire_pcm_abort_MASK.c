
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sfire_chip {struct pcm_runtime* pcm; } ;
struct TYPE_5__ {scalar_t__ instance; } ;
struct TYPE_8__ {scalar_t__ instance; } ;
struct pcm_runtime {int panic; TYPE_3__* out_urbs; TYPE_2__* in_urbs; TYPE_1__ capture; TYPE_4__ playback; } ;
struct TYPE_7__ {int instance; } ;
struct TYPE_6__ {int instance; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sfire_chip *VAR_1)
{
 struct pcm_runtime *VAR_2 = VAR_1->pcm;
 int VAR_3;

 if (VAR_2) {
  VAR_2->panic = 1;

  if (VAR_2->playback.instance)
   FUNC_0(VAR_2->playback.instance);

  if (VAR_2->capture.instance)
   FUNC_0(VAR_2->capture.instance);

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_1(&VAR_2->in_urbs[VAR_3].instance);
   FUNC_1(&VAR_2->out_urbs[VAR_3].instance);
  }

 }
}
