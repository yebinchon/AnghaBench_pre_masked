
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_requeue_packets; int * requeue_packets; int hw_probing; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_1__* priv; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct mp_filter*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mp_filter *VAR_1)
{
    vd_ffmpeg_ctx *VAR_2 = VAR_1->priv;

    FUNC_2(VAR_2->num_requeue_packets);
    FUNC_2(!VAR_2->hw_probing);

    if (FUNC_3(VAR_1, VAR_2->requeue_packets[0]) != FUNC_0(VAR_0)) {
        FUNC_4(VAR_2->requeue_packets[0]);
        FUNC_1(VAR_2->requeue_packets, VAR_2->num_requeue_packets, 0);
    }
}
