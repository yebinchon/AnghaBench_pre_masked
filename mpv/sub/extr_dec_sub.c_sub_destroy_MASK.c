
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dec_sub {int lock; struct dec_sub* sd; TYPE_1__* driver; int sh; } ;
struct TYPE_2__ {int (* uninit ) (struct dec_sub*) ;} ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dec_sub*) ;
 int FUNC_3 (struct dec_sub*) ;
 int FUNC_4 (struct dec_sub*) ;

void FUNC_5(struct dec_sub *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_0(VAR_0->sh, ((void*)0), ((void*)0));
    if (VAR_0->sd) {
        FUNC_3(VAR_0);
        VAR_0->sd->driver->uninit(VAR_0->sd);
    }
    FUNC_4(VAR_0->sd);
    FUNC_1(&VAR_0->lock);
    FUNC_4(VAR_0);
}
