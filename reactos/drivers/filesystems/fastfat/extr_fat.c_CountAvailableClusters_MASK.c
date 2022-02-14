
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ FatType; } ;
struct TYPE_11__ {int FatResource; int AvailableClusters; TYPE_1__ FatInfo; int AvailableClustersValid; } ;
struct TYPE_10__ {int QuadPart; } ;
typedef TYPE_2__* PLARGE_INTEGER ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

NTSTATUS
FUNC_5(
    PDEVICE_EXTENSION VAR_5,
    PLARGE_INTEGER VAR_6)
{
    NTSTATUS VAR_7 = VAR_3;
    FUNC_0 (&VAR_5->FatResource, VAR_4);
    if (!VAR_5->AvailableClustersValid)
    {
        if (VAR_5->FatInfo.FatType == VAR_0)
            VAR_7 = FUNC_2(VAR_5);
        else if (VAR_5->FatInfo.FatType == VAR_1 || VAR_5->FatInfo.FatType == VAR_2)
            VAR_7 = FUNC_3(VAR_5);
        else
            VAR_7 = FUNC_4(VAR_5);
    }
    if (VAR_6 != ((void*)0))
    {
        VAR_6->QuadPart = VAR_5->AvailableClusters;
    }
    FUNC_1 (&VAR_5->FatResource);

    return VAR_7;
}
