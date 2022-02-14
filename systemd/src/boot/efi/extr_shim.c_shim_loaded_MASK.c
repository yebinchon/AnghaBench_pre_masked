
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ShimLock {int dummy; } ;
typedef int VOID ;
struct TYPE_2__ {int LocateProtocol; } ;
typedef int EFI_GUID ;
typedef int BOOLEAN ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int *,int *,int **) ;

BOOLEAN FUNC_1(void) {
        struct ShimLock *VAR_3;

        return FUNC_0(VAR_0->LocateProtocol, 3, (EFI_GUID*) &VAR_2, ((void*)0), (VOID**) &VAR_3) == VAR_1;
}
