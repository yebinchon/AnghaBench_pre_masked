
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {TYPE_2__* cached_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(void) {
    if (VAR_2.cached_master == ((void*)0)) return;

    FUNC_1(VAR_1,"Discarding previously cached master state.");
    VAR_2.cached_master->flags &= ~VAR_0;
    FUNC_0(VAR_2.cached_master);
    VAR_2.cached_master = ((void*)0);
}
