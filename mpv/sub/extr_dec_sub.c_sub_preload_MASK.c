
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demux_packet {int dummy; } ;
struct dec_sub {int preload_attempted; int lock; TYPE_2__* sd; int demux_waiter; int sh; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* decode ) (TYPE_2__*,struct demux_packet*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct demux_packet**) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,struct demux_packet*) ;
 int FUNC_5 (struct demux_packet*) ;

void FUNC_6(struct dec_sub *VAR_1)
{
    FUNC_2(&VAR_1->lock);

    VAR_1->preload_attempted = 1;

    for (;;) {
        struct demux_packet *VAR_2 = ((void*)0);
        int VAR_3 = FUNC_0(VAR_1->sh, &VAR_2);
        if (VAR_3 == 0) {
            FUNC_1(VAR_1->demux_waiter, VAR_0);
            continue;
        }
        if (!VAR_2)
            break;
        VAR_1->sd->driver->decode(VAR_1->sd, VAR_2);
        FUNC_5(VAR_2);
    }

    FUNC_3(&VAR_1->lock);
}
