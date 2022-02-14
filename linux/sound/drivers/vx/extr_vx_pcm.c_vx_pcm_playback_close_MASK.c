
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_pipe {scalar_t__ references; size_t number; } ;
struct vx_core {int ** playback_pipes; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct vx_pipe* private_data; } ;


 int VAR_0 ;
 struct vx_core* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct vx_core*,struct vx_pipe*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct vx_core *VAR_2 = FUNC_0(VAR_1);
 struct vx_pipe *VAR_3;

 if (! VAR_1->runtime->private_data)
  return -VAR_0;

 VAR_3 = VAR_1->runtime->private_data;

 if (--VAR_3->references == 0) {
  VAR_2->playback_pipes[VAR_3->number] = ((void*)0);
  FUNC_1(VAR_2, VAR_3);
 }

 return 0;

}
