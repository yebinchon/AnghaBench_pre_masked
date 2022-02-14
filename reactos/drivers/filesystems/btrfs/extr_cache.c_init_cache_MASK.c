
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ReleaseFromReadAhead; int AcquireForReadAhead; int ReleaseFromLazyWrite; int AcquireForLazyWrite; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0() {
    VAR_2.AcquireForLazyWrite = VAR_0;
    VAR_2.ReleaseFromLazyWrite = VAR_3;
    VAR_2.AcquireForReadAhead = VAR_1;
    VAR_2.ReleaseFromReadAhead = VAR_4;
}
