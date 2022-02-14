
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct urb {TYPE_4__* iso_frame_desc; int start_frame; int transfer_buffer_length; int transfer_buffer; scalar_t__ context; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; } ;
struct TYPE_10__ {scalar_t__ pos_done; int bytes; int period; int lock; int running; int unlink_urbs; int active_urbs; struct urb** urbs; int last_frame; } ;
struct snd_line6_pcm {TYPE_5__ out; TYPE_3__* line6; TYPE_2__* properties; } ;
struct TYPE_9__ {int status; scalar_t__ length; } ;
struct TYPE_8__ {int iso_buffers; } ;
struct TYPE_6__ {int channels_max; } ;
struct TYPE_7__ {int bytes_per_channel; TYPE_1__ playback_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 struct snd_pcm_substream* FUNC_1 (struct snd_line6_pcm*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct snd_line6_pcm*) ;
 scalar_t__ FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct urb *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;
 unsigned long VAR_9;
 struct snd_line6_pcm *VAR_10 = (struct snd_line6_pcm *)VAR_4->context;
 struct snd_pcm_substream *VAR_11 =
     FUNC_1(VAR_10, VAR_3);
 const int VAR_12 =
  VAR_10->properties->bytes_per_channel *
  VAR_10->properties->playback_hw.channels_max;





 VAR_10->out.last_frame = VAR_4->start_frame;


 for (VAR_6 = 0; VAR_6 < VAR_10->line6->iso_buffers; VAR_6++)
  if (VAR_4 == VAR_10->out.urbs[VAR_6])
   break;

 if (VAR_6 >= VAR_10->line6->iso_buffers)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_7 += VAR_4->iso_frame_desc[VAR_5].length;

 FUNC_5(&VAR_10->out.lock, VAR_9);

 if (FUNC_10(VAR_2, &VAR_10->out.running)) {
  struct snd_pcm_runtime *VAR_13 = VAR_11->runtime;

  VAR_10->out.pos_done +=
      VAR_7 / VAR_12;

  if (VAR_10->out.pos_done >= VAR_13->buffer_size)
   VAR_10->out.pos_done -= VAR_13->buffer_size;
 }

 FUNC_0(VAR_6, &VAR_10->out.active_urbs);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_4->iso_frame_desc[VAR_5].status == -VAR_0) {
   VAR_8 = 1;
   break;
  }

 if (FUNC_9(VAR_6, &VAR_10->out.unlink_urbs))
  VAR_8 = 1;

 if (!VAR_8) {
  FUNC_8(VAR_10);

  if (FUNC_10(VAR_2, &VAR_10->out.running)) {
   VAR_10->out.bytes += VAR_7;
   if (VAR_10->out.bytes >= VAR_10->out.period) {
    VAR_10->out.bytes %= VAR_10->out.period;
    FUNC_6(&VAR_10->out.lock);
    FUNC_3(VAR_11);
    FUNC_4(&VAR_10->out.lock);
   }
  }
 }
 FUNC_7(&VAR_10->out.lock, VAR_9);
}
