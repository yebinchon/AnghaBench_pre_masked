
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {int tracking_clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_0(client *VAR_3) {
    if (VAR_3->flags & VAR_0) {
        VAR_2.tracking_clients--;
        VAR_3->flags &= ~(VAR_0|VAR_1);
    }
}
