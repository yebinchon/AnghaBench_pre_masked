
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ RequestedVirtualAddress; } ;
typedef TYPE_1__ VIDEO_MEMORY ;
typedef int ULONG ;
struct TYPE_5__ {int KMDriver; scalar_t__ fbScreen; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_2__* PPDEV ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

BOOL FUNC_3(PPDEV VAR_3)
{
    VIDEO_MEMORY VAR_4;
    ULONG VAR_5;

    VAR_4.RequestedVirtualAddress = (PVOID)VAR_3->fbScreen;

    if (FUNC_2(VAR_3->KMDriver,
                           VAR_1,
                           (PVOID)&VAR_4,
                           sizeof(VIDEO_MEMORY),
                           ((void*)0),
                           0,
                           &VAR_5))
    {
        FUNC_0("Failed to unmap video memory.\n");
        FUNC_1();
        return VAR_0;
    }
    return VAR_2;
}
