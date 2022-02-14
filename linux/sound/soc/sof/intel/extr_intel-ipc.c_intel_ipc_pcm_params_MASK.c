
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sof_ipc_stream_posn {int dummy; } ;
struct sof_ipc_pcm_params_reply {size_t posn_offset; } ;
struct TYPE_4__ {size_t size; size_t offset; } ;
struct snd_sof_dev {int dev; TYPE_2__ stream_box; } ;
struct snd_pcm_substream {int stream; TYPE_1__* runtime; } ;
struct intel_stream {size_t posn_offset; } ;
struct TYPE_3__ {struct intel_stream* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,size_t) ;

int FUNC_1(struct snd_sof_dev *VAR_1,
    struct snd_pcm_substream *VAR_2,
    const struct sof_ipc_pcm_params_reply *VAR_3)
{
 struct intel_stream *VAR_4 = VAR_2->runtime->private_data;
 size_t VAR_5 = VAR_3->posn_offset;


 if (VAR_5 > VAR_1->stream_box.size ||
     VAR_5 % sizeof(struct sof_ipc_stream_posn) != 0)
  return -VAR_0;

 VAR_4->posn_offset = VAR_1->stream_box.offset + VAR_5;

 FUNC_0(VAR_1->dev, "pcm: stream dir %d, posn mailbox offset is %zu",
  VAR_2->stream, VAR_4->posn_offset);

 return 0;
}
