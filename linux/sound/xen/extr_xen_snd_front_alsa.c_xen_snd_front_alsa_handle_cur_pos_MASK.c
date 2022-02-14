
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct xen_snd_front_pcm_stream_info {int be_cur_frame; int out_frames; int hw_ptr; } ;
struct TYPE_4__ {struct snd_pcm_substream* substream; } ;
struct TYPE_5__ {TYPE_1__ evt; } ;
struct xen_snd_front_evtchnl {TYPE_2__ u; } ;
struct snd_pcm_substream {TYPE_3__* runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_6__ {int buffer_size; int period_size; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct xen_snd_front_pcm_stream_info* FUNC_4 (struct snd_pcm_substream*) ;

void FUNC_5(struct xen_snd_front_evtchnl *VAR_0,
           u64 VAR_1)
{
 struct snd_pcm_substream *VAR_2 = VAR_0->u.evt.substream;
 struct xen_snd_front_pcm_stream_info *VAR_3 = FUNC_4(VAR_2);
 snd_pcm_uframes_t VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_2(VAR_2->runtime, VAR_1);

 VAR_4 = VAR_6 - VAR_3->be_cur_frame;
 VAR_3->be_cur_frame = VAR_6;

 VAR_5 = (snd_pcm_uframes_t)FUNC_0(&VAR_3->hw_ptr);
 VAR_5 = (VAR_5 + VAR_4) % VAR_2->runtime->buffer_size;
 FUNC_1(&VAR_3->hw_ptr, (int)VAR_5);

 VAR_3->out_frames += VAR_4;
 if (VAR_3->out_frames > VAR_2->runtime->period_size) {
  VAR_3->out_frames %= VAR_2->runtime->period_size;
  FUNC_3(VAR_2);
 }
}
