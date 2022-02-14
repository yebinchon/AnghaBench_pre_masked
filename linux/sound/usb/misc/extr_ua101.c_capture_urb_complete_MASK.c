
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {TYPE_1__* iso_frame_desc; int status; struct ua101* context; } ;
struct ua101_stream {unsigned int frame_bytes; int substream; } ;
struct TYPE_6__ {scalar_t__ queue_length; } ;
struct ua101 {unsigned int rate_feedback_start; int rate_feedback_count; unsigned int* rate_feedback; int lock; int playback_tasklet; int ready_playback_urbs; int states; int rate_feedback_wait; TYPE_3__ playback; TYPE_2__* dev; struct ua101_stream capture; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ status; unsigned int actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ua101*) ;
 int FUNC_1 (struct ua101*) ;
 int FUNC_2 (struct ua101*) ;
 int FUNC_3 (struct ua101*) ;
 int FUNC_4 (struct ua101*,unsigned int*,int) ;
 int FUNC_5 (struct ua101_stream*,struct urb*,unsigned int) ;
 int FUNC_6 (int *,char*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct urb*,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct urb *VAR_8)
{
 struct ua101 *VAR_9 = VAR_8->context;
 struct ua101_stream *VAR_10 = &VAR_9->capture;
 unsigned long VAR_11;
 unsigned int VAR_12, VAR_13;
 bool VAR_14;
 int VAR_15;

 if (FUNC_13(VAR_8->status == -VAR_3 ||
       VAR_8->status == -VAR_2 ||
       VAR_8->status == -VAR_1 ||
       VAR_8->status == -VAR_4))
  goto stream_stopped;

 if (VAR_8->status >= 0 && VAR_8->iso_frame_desc[0].status >= 0)
  VAR_12 = VAR_8->iso_frame_desc[0].actual_length /
   VAR_10->frame_bytes;
 else
  VAR_12 = 0;

 FUNC_9(&VAR_9->lock, VAR_11);

 if (VAR_12 > 0 && FUNC_12(VAR_0, &VAR_9->states))
  VAR_14 = FUNC_5(VAR_10, VAR_8, VAR_12);
 else
  VAR_14 = 0;

 if (FUNC_12(VAR_6, &VAR_9->states)) {
  VAR_15 = FUNC_15(VAR_8, VAR_5);
  if (FUNC_13(VAR_15 < 0)) {
   FUNC_10(&VAR_9->lock, VAR_11);
   FUNC_6(&VAR_9->dev->dev, "USB request error %d: %s\n",
    VAR_15, FUNC_14(VAR_15));
   goto stream_stopped;
  }


  VAR_13 = VAR_9->rate_feedback_start;
  FUNC_4(VAR_9, &VAR_13, VAR_9->rate_feedback_count);
  VAR_9->rate_feedback[VAR_13] = VAR_12;
  if (VAR_9->rate_feedback_count < VAR_9->playback.queue_length) {
   VAR_9->rate_feedback_count++;
   if (VAR_9->rate_feedback_count ==
      VAR_9->playback.queue_length)
    FUNC_16(&VAR_9->rate_feedback_wait);
  } else {






   FUNC_4(VAR_9, &VAR_9->rate_feedback_start, 1);
  }
  if (FUNC_12(VAR_7, &VAR_9->states) &&
      !FUNC_7(&VAR_9->ready_playback_urbs))
   FUNC_11(&VAR_9->playback_tasklet);
 }

 FUNC_10(&VAR_9->lock, VAR_11);

 if (VAR_14)
  FUNC_8(VAR_10->substream);

 return;

stream_stopped:
 FUNC_3(VAR_9);
 FUNC_2(VAR_9);
 FUNC_1(VAR_9);
 FUNC_0(VAR_9);
}
