
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ IsAcquired; int Irql; int QueueNumber; } ;
typedef int PKSPIN_LOCK ;
typedef TYPE_1__* PCHECK_DATA ;
typedef scalar_t__ LOGICAL ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ VAR_1 ;

BOOLEAN FUNC_2(PKSPIN_LOCK VAR_2, PCHECK_DATA VAR_3) {
    LOGICAL VAR_4 = FUNC_1(VAR_3->QueueNumber, &VAR_3->Irql);
    VAR_3->IsAcquired = VAR_1;
    FUNC_0(VAR_4 == VAR_0 || VAR_4 == VAR_1);
    return (BOOLEAN)VAR_4;
}
