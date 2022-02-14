
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IsAcquired; int Irql; int QueueNumber; } ;
typedef int PKSPIN_LOCK ;
typedef TYPE_1__* PCHECK_DATA ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

BOOLEAN FUNC_1(PKSPIN_LOCK VAR_1, PCHECK_DATA VAR_2) {
    BOOLEAN VAR_3 = FUNC_0(VAR_2->QueueNumber, &VAR_2->Irql);
    VAR_2->IsAcquired = VAR_0;
    return VAR_3;
}
