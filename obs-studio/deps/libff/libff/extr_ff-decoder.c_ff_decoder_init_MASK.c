
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ff_frame {int dummy; } ;
struct ff_decoder {int abort; int finished; unsigned int packet_queue_size; double timer_next_wake; int previous_pts_diff; int first_frame; int packet_queue; int refresh_timer; int frame_queue; scalar_t__ predicted_pts; scalar_t__ start_pts; scalar_t__ current_pts_time; int * stream; TYPE_1__* codec; } ;
struct TYPE_3__ {struct ff_decoder* opaque; } ;
typedef int AVStream ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ff_decoder*) ;
 scalar_t__ FUNC_2 () ;
 struct ff_decoder* FUNC_3 (int) ;
 int FUNC_4 (int *,int,unsigned int) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,struct ff_decoder*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct ff_decoder *FUNC_9(AVCodecContext *VAR_1,
                                   AVStream *VAR_2,
                                   unsigned int VAR_3,
                                   unsigned int VAR_4)
{
 bool VAR_5;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 struct ff_decoder *VAR_6 = FUNC_3(sizeof(struct ff_decoder));

 if (VAR_6 == ((void*)0))
  goto fail;

 VAR_6->codec = VAR_1;
 VAR_6->codec->opaque = VAR_6;
 VAR_6->stream = VAR_2;
 VAR_6->abort = 0;
 VAR_6->finished = 0;

 VAR_6->packet_queue_size = VAR_3;
 if (!FUNC_8(&VAR_6->packet_queue))
  goto fail1;

 VAR_6->timer_next_wake = (double)FUNC_2() / 1000000.0;
 VAR_6->previous_pts_diff = 40e-3;
 VAR_6->current_pts_time = FUNC_2();
 VAR_6->start_pts = 0;
 VAR_6->predicted_pts = 0;
 VAR_6->first_frame = 1;

 VAR_5 = FUNC_6(&VAR_6->refresh_timer, VAR_0,
                         VAR_6);
 if (!VAR_5)
  goto fail2;

 VAR_5 = FUNC_4(&VAR_6->frame_queue,
                                  sizeof(struct ff_frame),
                                  VAR_4);
 if (!VAR_5)
  goto fail3;

 return VAR_6;

fail3:
 FUNC_5(&VAR_6->refresh_timer);
fail2:
 FUNC_7(&VAR_6->packet_queue);
fail1:
 FUNC_1(VAR_6);
fail:
 return ((void*)0);
}
