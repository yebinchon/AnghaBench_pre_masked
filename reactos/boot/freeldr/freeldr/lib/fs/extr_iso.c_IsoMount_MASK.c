
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_6__ {int LowPart; scalar_t__ HighPart; } ;
struct TYPE_5__ {int VdType; int StandardId; } ;
typedef int PVD ;
typedef TYPE_1__* PPVD ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int DEVVTBL ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ FUNC_0 (int,TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;

const DEVVTBL* FUNC_4(ULONG VAR_4)
{
    UCHAR VAR_5[VAR_2];
    PPVD VAR_6 = (PPVD)VAR_5;
    LARGE_INTEGER VAR_7;
    ULONG VAR_8;
    ARC_STATUS VAR_9;

    FUNC_3("Enter IsoMount(%lu)\n", VAR_4);




    VAR_7.HighPart = 0;
    VAR_7.LowPart = 16 * VAR_2;
    VAR_9 = FUNC_1(VAR_4, &VAR_7, VAR_3);
    if (VAR_9 != VAR_0)
        return ((void*)0);
    VAR_9 = FUNC_0(VAR_4, VAR_6, VAR_2, &VAR_8);
    if (VAR_9 != VAR_0 || VAR_8 < sizeof(PVD))
        return ((void*)0);




    if (VAR_6->VdType == 1 && FUNC_2(VAR_6->StandardId, "CD001", 5))
    {
        FUNC_3("IsoMount(%lu) success\n", VAR_4);
        return &VAR_1;
    }

    return ((void*)0);
}
