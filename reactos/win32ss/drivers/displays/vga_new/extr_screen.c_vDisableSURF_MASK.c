
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {scalar_t__ RequestedVirtualAddress; } ;
typedef TYPE_1__ VIDEO_MEMORY ;
struct TYPE_6__ {int hDriver; scalar_t__ pjScreen; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_2__* PPDEV ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*,int,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

VOID FUNC_2(PPDEV VAR_1)
{
    DWORD VAR_2;
    VIDEO_MEMORY VAR_3;

    VAR_3.RequestedVirtualAddress = (PVOID) VAR_1->pjScreen;

    if (FUNC_0(VAR_1->hDriver,
                           VAR_0,
                           &VAR_3,
                           sizeof(VIDEO_MEMORY),
                           ((void*)0),
                           0,
                           &VAR_2))
    {
        FUNC_1("DISP vDisableSURF failed IOCTL_VIDEO_UNMAP\n");
    }
}
