
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
struct TYPE_9__ {scalar_t__ FatType; } ;
struct TYPE_13__ {TYPE_1__ FatInfo; } ;
struct TYPE_11__ {int FirstCluster; int FirstClusterHigh; } ;
struct TYPE_10__ {int FirstCluster; } ;
struct TYPE_12__ {TYPE_3__ Fat; TYPE_2__ FatX; } ;
typedef TYPE_4__* PDIR_ENTRY ;
typedef TYPE_5__* PDEVICE_EXTENSION ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;

ULONG
FUNC_1(
    PDEVICE_EXTENSION VAR_1,
    PDIR_ENTRY VAR_2)
{
    ULONG VAR_3;

    if (VAR_1->FatInfo.FatType == VAR_0)
    {
        VAR_3 = VAR_2->Fat.FirstCluster |
                 (VAR_2->Fat.FirstClusterHigh << 16);
    }
    else if (FUNC_0(VAR_1))
    {
        VAR_3 = VAR_2->FatX.FirstCluster;
    }
    else
    {
        VAR_3 = VAR_2->Fat.FirstCluster;
    }

    return VAR_3;
}
