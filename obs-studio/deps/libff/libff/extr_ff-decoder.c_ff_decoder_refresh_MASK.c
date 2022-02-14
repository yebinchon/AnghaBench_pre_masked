
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ff_frame {double pts; int frame; int clock; } ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_9__ {int abort; } ;
struct ff_decoder {double current_pts; long double current_pts_time; double previous_pts; int first_frame; double previous_pts_diff; double timer_next_wake; TYPE_7__ frame_queue; int callbacks; int natural_sync_clock; TYPE_1__ refresh_timer; int finished; int eof; scalar_t__ stream; } ;
struct TYPE_10__ {int sync_type; } ;
typedef TYPE_2__ ff_clock_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 long double FUNC_1 () ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ,struct ff_frame*) ;
 int FUNC_4 (TYPE_7__*) ;
 struct ff_frame* FUNC_5 (TYPE_7__*) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__**) ;
 int FUNC_8 (TYPE_2__*,int ,int*) ;
 int FUNC_9 (struct ff_decoder*,int) ;
 double FUNC_10 (TYPE_2__*,double,double) ;

void FUNC_11(void *VAR_1)
{
 struct ff_decoder *VAR_2 = (struct ff_decoder *)VAR_1;

 struct ff_frame *VAR_3;

 if (VAR_2->stream) {
  if (VAR_2->frame_queue.size == 0) {
   if (!VAR_2->eof || !VAR_2->finished) {




    FUNC_9(VAR_2, 1);
   } else {
    FUNC_3(VAR_2->callbacks, ((void*)0));
    VAR_2->refresh_timer.abort = 1;

    FUNC_2(((void*)0), VAR_0,
           "refresh timer stopping; eof");
    return;
   }
  } else {
   double VAR_4;
   double VAR_5;
   bool VAR_6 = 0;

   VAR_3 = FUNC_5(
           &VAR_2->frame_queue);


   ff_clock_t *VAR_7 = FUNC_6(&VAR_3->clock);
   if (!FUNC_8(VAR_7, VAR_2->natural_sync_clock,
                       &VAR_2->refresh_timer.abort)) {
    FUNC_7(&VAR_7);




    if (VAR_2->refresh_timer.abort) {
     FUNC_2(((void*)0), VAR_0,
            "refresh timer aborted");
     return;
    }






    FUNC_9(VAR_2, 100);



    FUNC_4(
            &VAR_2->frame_queue);
    return;
   }

   VAR_2->current_pts = VAR_3->pts;
   VAR_2->current_pts_time = FUNC_1();



   VAR_4 = VAR_3->pts - VAR_2->previous_pts;




   if (VAR_2->first_frame) {
    VAR_6 = VAR_4 >= 1.0;
    VAR_2->first_frame = 0;
   }

   if (VAR_4 <= 0 || VAR_6) {

    VAR_4 = VAR_2->previous_pts_diff;
   }


   VAR_2->previous_pts_diff = VAR_4;
   VAR_2->previous_pts = VAR_3->pts;


   if (VAR_7->sync_type != VAR_2->natural_sync_clock) {
    VAR_4 = FUNC_10(
            VAR_7, VAR_3->pts, VAR_4);
   }

   VAR_2->timer_next_wake += VAR_4;


   VAR_5 = VAR_2->timer_next_wake -
                           (FUNC_1() / 1000000.0L);
   if (VAR_5 < 0.010L) {
    VAR_5 = 0.010L;
   }

   if (VAR_5 > VAR_4)
    VAR_5 = VAR_4;

   FUNC_7(&VAR_7);
   FUNC_3(VAR_2->callbacks, VAR_3);

   FUNC_9(
           VAR_2,
           (int)(VAR_5 * 1000 + 0.5L));

   FUNC_0(&VAR_3->frame);

   FUNC_4(&VAR_2->frame_queue);
  }
 } else {
  FUNC_9(VAR_2, 100);
 }
}
