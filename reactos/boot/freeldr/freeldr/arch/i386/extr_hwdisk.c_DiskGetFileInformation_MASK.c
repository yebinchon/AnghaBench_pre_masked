
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_13__ {int SectorOffset; int SectorSize; int SectorCount; int SectorNumber; } ;
struct TYPE_9__ {int QuadPart; } ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_10__ {int QuadPart; } ;
struct TYPE_12__ {TYPE_1__ CurrentAddress; TYPE_3__ EndingAddress; TYPE_2__ StartingAddress; } ;
typedef TYPE_4__ FILEINFORMATION ;
typedef TYPE_5__ DISKCONTEXT ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int) ;

__attribute__((used)) static ARC_STATUS
FUNC_2(ULONG VAR_1, FILEINFORMATION* VAR_2)
{
    DISKCONTEXT* VAR_3 = FUNC_0(VAR_1);

    FUNC_1(VAR_2, sizeof(*VAR_2));







    VAR_2->StartingAddress.QuadPart = VAR_3->SectorOffset * VAR_3->SectorSize;
    VAR_2->EndingAddress.QuadPart = (VAR_3->SectorOffset + VAR_3->SectorCount) * VAR_3->SectorSize;
    VAR_2->CurrentAddress.QuadPart = VAR_3->SectorNumber * VAR_3->SectorSize;

    return VAR_0;
}
