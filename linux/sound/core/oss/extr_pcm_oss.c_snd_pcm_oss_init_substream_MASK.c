
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_oss_setup {scalar_t__ block; scalar_t__ nonblock; } ;
struct TYPE_3__ {int oss; struct snd_pcm_oss_setup setup; } ;
struct snd_pcm_substream {int pcm_release; struct snd_pcm_runtime* runtime; int f_flags; TYPE_1__ oss; } ;
struct TYPE_4__ {int params; int trigger; int rate; int channels; int rw_ref; scalar_t__ subdivision; scalar_t__ maxfrags; scalar_t__ fragshift; int format; int params_lock; } ;
struct snd_pcm_runtime {TYPE_2__ oss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;


 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_5,
           struct snd_pcm_oss_setup *VAR_6,
           int VAR_7)
{
 struct snd_pcm_runtime *VAR_8;

 VAR_5->oss.oss = 1;
 VAR_5->oss.setup = *VAR_6;
 if (VAR_6->nonblock)
  VAR_5->f_flags |= VAR_3;
 else if (VAR_6->block)
  VAR_5->f_flags &= ~VAR_3;
 VAR_8 = VAR_5->runtime;
 VAR_8->oss.params = 1;
 VAR_8->oss.trigger = 1;
 VAR_8->oss.rate = 8000;
 FUNC_2(&VAR_8->oss.params_lock);
 switch (FUNC_0(VAR_7)) {
 case 128:
  VAR_8->oss.format = VAR_2;
  break;
 case 129:
  VAR_8->oss.format = VAR_1;
  break;
 default:
  VAR_8->oss.format = VAR_0;
 }
 VAR_8->oss.channels = 1;
 VAR_8->oss.fragshift = 0;
 VAR_8->oss.maxfrags = 0;
 VAR_8->oss.subdivision = 0;
 VAR_5->pcm_release = VAR_4;
 FUNC_1(&VAR_8->oss.rw_ref, 0);
}
