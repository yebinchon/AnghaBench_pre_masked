
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_delay_queue; int num_sent_packets; int num_requeue_packets; int * requeue_packets; int * sent_packets; int * delay_queue; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_1__* priv; } ;


 int FUNC_0 (struct mp_filter*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_0)
{
    vd_ffmpeg_ctx *VAR_1 = VAR_0->priv;

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_delay_queue; VAR_2++)
        FUNC_1(VAR_1->delay_queue[VAR_2]);
    VAR_1->num_delay_queue = 0;

    for (int VAR_3 = 0; VAR_3 < VAR_1->num_sent_packets; VAR_3++)
        FUNC_1(VAR_1->sent_packets[VAR_3]);
    VAR_1->num_sent_packets = 0;

    for (int VAR_4 = 0; VAR_4 < VAR_1->num_requeue_packets; VAR_4++)
        FUNC_1(VAR_1->requeue_packets[VAR_4]);
    VAR_1->num_requeue_packets = 0;

    FUNC_0(VAR_0);
}
