
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ cluster_slave_no_failover; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_1(void) {
    int VAR_5 = VAR_3->flags;
    int VAR_6 = VAR_4.cluster_slave_no_failover ?
                     VAR_0 : 0;
    VAR_3->flags &= ~VAR_0;
    VAR_3->flags |= VAR_6;
    if (VAR_3->flags != VAR_5) {
        FUNC_0(VAR_1|
                             VAR_2);
    }
}
