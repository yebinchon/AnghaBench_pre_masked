
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int event; } ;
struct TYPE_7__ {int locked; TYPE_2__ balance; scalar_t__ lock_paused_balance; int * locked_fileobj; TYPE_1__* Vpb; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_5__ {int Flags; } ;
typedef int KIRQL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_0 ;

void FUNC_3(device_extension* VAR_1) {
    KIRQL VAR_2;

    FUNC_0(&VAR_2);

    VAR_1->locked = 0;
    VAR_1->Vpb->Flags &= ~VAR_0;
    VAR_1->locked_fileobj = ((void*)0);

    FUNC_1(VAR_2);

    if (VAR_1->lock_paused_balance)
        FUNC_2(&VAR_1->balance.event, 0, 0);
}
