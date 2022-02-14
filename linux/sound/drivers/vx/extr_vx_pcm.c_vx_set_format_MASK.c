
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int dummy; } ;
struct vx_core {int dummy; } ;
struct snd_pcm_runtime {int channels; int rate; int format; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vx_core*,struct vx_pipe*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct vx_core *VAR_8, struct vx_pipe *VAR_9,
    struct snd_pcm_runtime *VAR_10)
{
 unsigned int VAR_11 = VAR_3;

 if (VAR_10->channels == 1)
  VAR_11 |= VAR_5;
 if (FUNC_1(VAR_10->format))
  VAR_11 |= VAR_4;
 if (VAR_10->rate < 32000 && VAR_10->rate > 11025)
  VAR_11 |= VAR_7;
 else if (VAR_10->rate <= 11025)
  VAR_11 |= VAR_6;

 switch (FUNC_2(VAR_10->format)) {

 case 16: VAR_11 |= VAR_1; break;
 case 24: VAR_11 |= VAR_2; break;
 default :
  FUNC_0();
  return -VAR_0;
 }

 return FUNC_3(VAR_8, VAR_9, VAR_11);
}
