
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; } ;
struct TYPE_4__ {int size; } ;
struct snd_sof_dev {TYPE_2__ dsp_box; TYPE_1__ stream_box; } ;
struct snd_pcm_substream {TYPE_3__* runtime; } ;
struct intel_stream {int posn_offset; } ;
struct TYPE_6__ {struct intel_stream* private_data; } ;


 int FUNC_0 (struct snd_sof_dev*,int ,void*,size_t) ;

void FUNC_1(struct snd_sof_dev *VAR_0,
   struct snd_pcm_substream *VAR_1,
   void *VAR_2, size_t VAR_3)
{
 if (!VAR_1 || !VAR_0->stream_box.size) {
  FUNC_0(VAR_0, VAR_0->dsp_box.offset, VAR_2, VAR_3);
 } else {
  struct intel_stream *VAR_4 = VAR_1->runtime->private_data;


  if (VAR_4)
   FUNC_0(VAR_0, VAR_4->posn_offset, VAR_2, VAR_3);
 }
}
