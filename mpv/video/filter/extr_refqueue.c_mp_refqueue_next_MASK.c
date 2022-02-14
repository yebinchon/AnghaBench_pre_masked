
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {int pos; int second_field; int num_queue; int needed_past_frames; int * queue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_refqueue*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mp_refqueue *VAR_0)
{
    if (!FUNC_1(VAR_0))
        return;

    VAR_0->pos--;
    VAR_0->second_field = 0;

    FUNC_0(VAR_0->pos >= -1 && VAR_0->pos < VAR_0->num_queue);


    while (VAR_0->num_queue - (VAR_0->pos + 1) > VAR_0->needed_past_frames) {
        FUNC_0(VAR_0->num_queue > 0);
        FUNC_2(VAR_0->queue[VAR_0->num_queue - 1]);
        VAR_0->num_queue--;
    }

    FUNC_0(VAR_0->pos >= -1 && VAR_0->pos < VAR_0->num_queue);
}
