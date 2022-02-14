
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct urb {TYPE_2__* iso_frame_desc; int transfer_buffer; int complete; } ;
struct TYPE_7__ {unsigned int queue_length; unsigned int frame_bytes; TYPE_1__** urbs; } ;
struct ua101 {unsigned int rate_feedback_count; unsigned int* rate_feedback; size_t rate_feedback_start; TYPE_3__ playback; int states; int lock; int rate_feedback_wait; int ready_playback_urbs; int playback_tasklet; } ;
struct TYPE_6__ {unsigned int length; } ;
struct TYPE_5__ {struct urb urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ua101*,size_t*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ua101*,int ) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ua101*) ;
 int FUNC_10 (struct ua101*,TYPE_3__*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static int FUNC_14(struct ua101 *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 struct urb *VAR_11;
 int VAR_12 = 0;

 if (FUNC_12(VAR_0, &VAR_8->states))
  return -VAR_2;

 if (FUNC_12(VAR_6, &VAR_8->states))
  return 0;

 FUNC_4(&VAR_8->playback);
 FUNC_11(&VAR_8->playback_tasklet);

 VAR_12 = FUNC_3(VAR_8, VAR_3);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_2(VAR_4, &VAR_8->states);
 VAR_8->playback.urbs[0]->urb.complete =
  VAR_7;
 FUNC_7(&VAR_8->lock);
 FUNC_0(&VAR_8->ready_playback_urbs);
 FUNC_8(&VAR_8->lock);





 FUNC_13(VAR_8->rate_feedback_wait,
     VAR_8->rate_feedback_count >= VAR_8->playback.queue_length ||
     !FUNC_12(VAR_5, &VAR_8->states) ||
     FUNC_12(VAR_0, &VAR_8->states));
 if (FUNC_12(VAR_0, &VAR_8->states)) {
  FUNC_9(VAR_8);
  return -VAR_2;
 }
 if (!FUNC_12(VAR_5, &VAR_8->states)) {
  FUNC_9(VAR_8);
  return -VAR_1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->playback.queue_length; ++VAR_9) {

  FUNC_7(&VAR_8->lock);
  VAR_10 = VAR_8->rate_feedback[VAR_8->rate_feedback_start];
  FUNC_1(VAR_8, &VAR_8->rate_feedback_start, 1);
  VAR_8->rate_feedback_count--;
  FUNC_8(&VAR_8->lock);
  VAR_11 = &VAR_8->playback.urbs[VAR_9]->urb;
  VAR_11->iso_frame_desc[0].length =
   VAR_10 * VAR_8->playback.frame_bytes;
  FUNC_5(VAR_11->transfer_buffer, 0,
         VAR_11->iso_frame_desc[0].length);
 }

 FUNC_6(VAR_6, &VAR_8->states);
 VAR_12 = FUNC_10(VAR_8, &VAR_8->playback);
 if (VAR_12 < 0)
  FUNC_9(VAR_8);
 return VAR_12;
}
