
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct urb {int dummy; } ;
struct TYPE_9__ {TYPE_3__* iso_frame_desc; int status; struct ua101* context; } ;
struct ua101_urb {TYPE_4__ urb; int ready_list; } ;
struct TYPE_10__ {int frame_bytes; TYPE_2__* substream; } ;
struct ua101 {scalar_t__ rate_feedback_count; int lock; TYPE_5__ playback; int playback_tasklet; int ready_playback_urbs; int states; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_7__ {TYPE_1__* runtime; } ;
struct TYPE_6__ {int delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ua101*) ;
 int FUNC_1 (struct ua101*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_5)
{
 struct ua101_urb *VAR_6 = (struct ua101_urb *)VAR_5;
 struct ua101 *VAR_7 = VAR_6->urb.context;
 unsigned long VAR_8;

 if (FUNC_7(VAR_6->urb.status == -VAR_2 ||
       VAR_6->urb.status == -VAR_1 ||
       VAR_6->urb.status == -VAR_0 ||
       VAR_6->urb.status == -VAR_3)) {
  FUNC_1(VAR_7);
  FUNC_0(VAR_7);
  return;
 }

 if (FUNC_6(VAR_4, &VAR_7->states)) {

  FUNC_3(&VAR_7->lock, VAR_8);
  FUNC_2(&VAR_6->ready_list, &VAR_7->ready_playback_urbs);
  if (VAR_7->rate_feedback_count > 0)
   FUNC_5(&VAR_7->playback_tasklet);
  VAR_7->playback.substream->runtime->delay -=
    VAR_6->urb.iso_frame_desc[0].length /
      VAR_7->playback.frame_bytes;
  FUNC_4(&VAR_7->lock, VAR_8);
 }
}
