
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dec_sub {int lock; TYPE_2__* sd; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* select ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;

void FUNC_3(struct dec_sub *VAR_0, bool VAR_1)
{
    FUNC_0(&VAR_0->lock);
    if (VAR_0->sd->driver->select)
        VAR_0->sd->driver->select(VAR_0->sd, VAR_1);
    FUNC_1(&VAR_0->lock);
}
