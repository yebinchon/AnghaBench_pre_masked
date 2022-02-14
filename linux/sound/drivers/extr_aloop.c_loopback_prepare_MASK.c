
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int buffer_size; int period_size; int dma_area; int format; struct loopback_pcm* private_data; } ;
struct loopback_pcm {int pcm_bps; int pcm_salign; TYPE_1__* loopback; void* pcm_period_size; scalar_t__ period_update_pending; scalar_t__ irq_pos; void* pcm_buffer_size; void* silent_size; scalar_t__ buf_pos; struct loopback_cable* cable; } ;
struct loopback_cable {int valid; } ;
struct TYPE_4__ {scalar_t__ notify; } ;
struct TYPE_3__ {int cable_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct snd_pcm_runtime*,int) ;
 TYPE_2__* FUNC_1 (struct loopback_pcm*) ;
 int FUNC_2 (struct loopback_pcm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct loopback_pcm *VAR_5 = VAR_4->private_data;
 struct loopback_cable *VAR_6 = VAR_5->cable;
 int VAR_7, VAR_8;

 FUNC_2(VAR_5);

 VAR_8 = (FUNC_6(VAR_4->format) *
      VAR_4->channels) / 8;
 VAR_7 = VAR_8 * VAR_4->rate;
 if (VAR_7 <= 0 || VAR_8 <= 0)
  return -VAR_0;

 VAR_5->buf_pos = 0;
 VAR_5->pcm_buffer_size = FUNC_0(VAR_4, VAR_4->buffer_size);
 if (VAR_3->stream == VAR_1) {

  VAR_5->silent_size = VAR_5->pcm_buffer_size;
  FUNC_7(VAR_4->format, VAR_4->dma_area,
        VAR_4->buffer_size * VAR_4->channels);
 }

 VAR_5->irq_pos = 0;
 VAR_5->period_update_pending = 0;
 VAR_5->pcm_bps = VAR_7;
 VAR_5->pcm_salign = VAR_8;
 VAR_5->pcm_period_size = FUNC_0(VAR_4, VAR_4->period_size);

 FUNC_3(&VAR_5->loopback->cable_lock);
 if (!(VAR_6->valid & ~(1 << VAR_3->stream)) ||
            (FUNC_1(VAR_5)->notify &&
      VAR_3->stream == VAR_2))
  FUNC_5(VAR_3);
 VAR_6->valid |= 1 << VAR_3->stream;
 FUNC_4(&VAR_5->loopback->cable_lock);

 return 0;
}
