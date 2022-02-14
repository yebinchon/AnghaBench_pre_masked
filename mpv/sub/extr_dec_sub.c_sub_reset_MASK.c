
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dec_sub {int lock; int * new_segment; void* last_vo_pts; void* last_pkt_pts; TYPE_2__* sd; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* reset ) (TYPE_2__*) ;} ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dec_sub *VAR_1)
{
    FUNC_0(&VAR_1->lock);
    if (VAR_1->sd->driver->reset)
        VAR_1->sd->driver->reset(VAR_1->sd);
    VAR_1->last_pkt_pts = VAR_0;
    VAR_1->last_vo_pts = VAR_0;
    FUNC_3(VAR_1->new_segment);
    VAR_1->new_segment = ((void*)0);
    FUNC_1(&VAR_1->lock);
}
