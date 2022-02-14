
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int capacity; void** slots; } ;
struct ff_frame {int abort; int codec; TYPE_1__ frame_queue; int packet_queue; int * clock; int * frame; int callbacks; int decoder_thread; int refresh_timer; } ;
struct ff_decoder {int abort; int codec; TYPE_1__ frame_queue; int packet_queue; int * clock; int * frame; int callbacks; int decoder_thread; int refresh_timer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ff_frame*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ff_frame*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,void**) ;

void FUNC_12(struct ff_decoder *VAR_0)
{
 void *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0 != ((void*)0));

 VAR_0->abort = 1;

 FUNC_5(&VAR_0->frame_queue);
 FUNC_9(&VAR_0->packet_queue);

 FUNC_8(&VAR_0->refresh_timer);

 FUNC_11(VAR_0->decoder_thread, &VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->frame_queue.capacity; VAR_2++) {
  void *VAR_3 = VAR_0->frame_queue.slots[VAR_2];
  struct ff_frame *VAR_4 = (struct ff_frame *)VAR_3;

  FUNC_4(VAR_4, VAR_0->callbacks);

  if (VAR_4 != ((void*)0)) {
   if (VAR_4->frame != ((void*)0))
    FUNC_1(VAR_4->frame);
   if (VAR_4->clock != ((void*)0))
    FUNC_7(&VAR_4->clock);
   FUNC_2(VAR_4);
  }
 }

 FUNC_10(&VAR_0->packet_queue);
 FUNC_6(&VAR_0->frame_queue);

 FUNC_3(VAR_0->codec);

 FUNC_2(VAR_0);
}
