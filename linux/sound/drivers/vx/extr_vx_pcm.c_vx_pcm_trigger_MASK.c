
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_pipe {int running; int is_capture; } ;
struct vx_core {int chip_status; int pcm_running; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct vx_pipe* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct vx_core* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct vx_core*,struct snd_pcm_substream*,struct vx_pipe*,int) ;
 int FUNC_3 (struct vx_core*,struct vx_pipe*) ;
 int FUNC_4 (struct vx_core*,struct vx_pipe*) ;
 int FUNC_5 (struct vx_core*,struct vx_pipe*) ;
 int FUNC_6 (struct vx_core*,struct vx_pipe*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct vx_core *VAR_5 = FUNC_1(VAR_3);
 struct vx_pipe *VAR_6 = VAR_3->runtime->private_data;
 int VAR_7;

 if (VAR_5->chip_status & VAR_2)
  return -VAR_0;

 switch (VAR_4) {
 case 130:
 case 131:
  if (! VAR_6->is_capture)
   FUNC_2(VAR_5, VAR_3, VAR_6, 2);
  VAR_7 = FUNC_3(VAR_5, VAR_6);
  if (VAR_7 < 0) {
   FUNC_0("vx: cannot start stream\n");
   return VAR_7;
  }
  VAR_7 = FUNC_6(VAR_5, VAR_6, 1);
  if (VAR_7 < 0) {
   FUNC_0("vx: cannot start pipe\n");
   FUNC_5(VAR_5, VAR_6);
   return VAR_7;
  }
  VAR_5->pcm_running++;
  VAR_6->running = 1;
  break;
 case 129:
 case 128:
  FUNC_6(VAR_5, VAR_6, 0);
  FUNC_4(VAR_5, VAR_6);
  FUNC_5(VAR_5, VAR_6);
  VAR_5->pcm_running--;
  VAR_6->running = 0;
  break;
 case 133:
  if ((VAR_7 = FUNC_6(VAR_5, VAR_6, 0)) < 0)
   return VAR_7;
  break;
 case 132:
  if ((VAR_7 = FUNC_6(VAR_5, VAR_6, 1)) < 0)
   return VAR_7;
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
