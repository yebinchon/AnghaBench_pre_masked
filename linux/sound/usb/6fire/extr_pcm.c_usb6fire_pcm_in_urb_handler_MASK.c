
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct urb {scalar_t__ status; struct pcm_urb* context; } ;
struct pcm_urb {int instance; TYPE_5__* packets; int * buffer; TYPE_1__* chip; struct pcm_urb* peer; } ;
struct pcm_substream {int lock; TYPE_6__* instance; int period_off; scalar_t__ active; } ;
struct pcm_runtime {int panic; scalar_t__ stream_state; int in_n_analog; int out_n_analog; struct pcm_substream playback; struct pcm_substream capture; TYPE_3__* chip; } ;
struct TYPE_12__ {TYPE_4__* runtime; } ;
struct TYPE_11__ {int offset; int length; int actual_length; scalar_t__ status; } ;
struct TYPE_10__ {int period_size; } ;
struct TYPE_9__ {TYPE_2__* dev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {struct pcm_runtime* pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct pcm_substream*,struct pcm_urb*) ;
 int FUNC_6 (struct pcm_substream*,struct pcm_urb*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_4)
{
 struct pcm_urb *VAR_5 = VAR_4->context;
 struct pcm_urb *VAR_6 = VAR_5->peer;
 struct pcm_runtime *VAR_7 = VAR_5->chip->pcm;
 struct pcm_substream *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 u8 *VAR_15;

 if (VAR_4->status || VAR_7->panic || VAR_7->stream_state == VAR_3)
  return;
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
  if (VAR_5->packets[VAR_14].status) {
   VAR_7->panic = 1;
   return;
  }

 if (VAR_7->stream_state == VAR_2) {
  FUNC_0(&VAR_7->chip->dev->dev,
   "internal error: stream disabled in in-urb handler.\n");
  return;
 }


 VAR_8 = &VAR_7->capture;
 FUNC_3(&VAR_8->lock, VAR_9);
 if (VAR_8->active) {
  FUNC_5(VAR_8, VAR_5);
  if (VAR_8->period_off >= VAR_8->instance->runtime->period_size) {
   VAR_8->period_off %= VAR_8->instance->runtime->period_size;
   FUNC_4(&VAR_8->lock, VAR_9);
   FUNC_2(VAR_8->instance);
  } else
   FUNC_4(&VAR_8->lock, VAR_9);
 } else
  FUNC_4(&VAR_8->lock, VAR_9);


 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  VAR_6->packets[VAR_14].offset = VAR_10;
  VAR_6->packets[VAR_14].length = (VAR_5->packets[VAR_14].actual_length
    - 4) / (VAR_7->in_n_analog << 2)
    * (VAR_7->out_n_analog << 2) + 4;
  VAR_6->packets[VAR_14].status = 0;
  VAR_10 += VAR_6->packets[VAR_14].length;
 }
 FUNC_1(VAR_6->buffer, 0, VAR_10);


 VAR_8 = &VAR_7->playback;
 FUNC_3(&VAR_8->lock, VAR_9);
 if (VAR_8->active) {
  FUNC_6(VAR_8, VAR_6);
  if (VAR_8->period_off >= VAR_8->instance->runtime->period_size) {
   VAR_8->period_off %= VAR_8->instance->runtime->period_size;
   FUNC_4(&VAR_8->lock, VAR_9);
   FUNC_2(VAR_8->instance);
  } else
   FUNC_4(&VAR_8->lock, VAR_9);
 } else
  FUNC_4(&VAR_8->lock, VAR_9);


 VAR_15 = VAR_6->buffer;
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
  if (VAR_6->packets[VAR_14].length >= 4) {
   VAR_11 = (VAR_6->packets[VAR_14].length - 4)
     / (VAR_7->out_n_analog << 2);
   *(VAR_15++) = 0xaa;
   *(VAR_15++) = 0xaa;
   *(VAR_15++) = VAR_11;
   *(VAR_15++) = 0x00;
   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    for (VAR_13 = 0;
      VAR_13 < VAR_7->out_n_analog;
      VAR_13++) {
     VAR_15 += 3;
     *(VAR_15++) = 0x40;
    }
  }
 FUNC_7(&VAR_6->instance, VAR_0);
 FUNC_7(&VAR_5->instance, VAR_0);
}
