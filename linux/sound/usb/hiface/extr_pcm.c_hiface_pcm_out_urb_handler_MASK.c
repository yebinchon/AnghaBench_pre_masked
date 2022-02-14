
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct pcm_urb* context; } ;
struct pcm_urb {int instance; int buffer; TYPE_1__* chip; } ;
struct pcm_substream {int instance; int lock; scalar_t__ active; } ;
struct pcm_runtime {int panic; scalar_t__ stream_state; int stream_wait_cond; struct pcm_substream playback; int stream_wait_queue; } ;
struct TYPE_2__ {struct pcm_runtime* pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct pcm_substream*,struct pcm_urb*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_8)
{
 struct pcm_urb *VAR_9 = VAR_8->context;
 struct pcm_runtime *VAR_10 = VAR_9->chip->pcm;
 struct pcm_substream *VAR_11;
 bool VAR_12 = 0;
 unsigned long VAR_13;
 int VAR_14;

 if (VAR_10->panic || VAR_10->stream_state == VAR_7)
  return;

 if (FUNC_5(VAR_8->status == -VAR_2 ||
       VAR_8->status == -VAR_1 ||
       VAR_8->status == -VAR_0 ||
       VAR_8->status == -VAR_3)) {
  goto out_fail;
 }

 if (VAR_10->stream_state == VAR_6) {
  VAR_10->stream_wait_cond = 1;
  FUNC_7(&VAR_10->stream_wait_queue);
 }


 VAR_11 = &VAR_10->playback;
 FUNC_3(&VAR_11->lock, VAR_13);
 if (VAR_11->active)
  VAR_12 = FUNC_0(VAR_11, VAR_9);
 else
  FUNC_1(VAR_9->buffer, 0, VAR_5);

 FUNC_4(&VAR_11->lock, VAR_13);

 if (VAR_12)
  FUNC_2(VAR_11->instance);

 VAR_14 = FUNC_6(&VAR_9->instance, VAR_4);
 if (VAR_14 < 0)
  goto out_fail;

 return;

out_fail:
 VAR_10->panic = 1;
}
