
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_9__ {scalar_t__ MappingPairsOffset; } ;
struct TYPE_12__ {TYPE_1__ NonResident; } ;
struct TYPE_11__ {int CacheRunStartLCN; int CacheRunLastLCN; scalar_t__ CacheRunCurrentOffset; int CacheRunLength; scalar_t__ CacheRun; scalar_t__ CacheRunOffset; TYPE_4__ Record; } ;
struct TYPE_10__ {scalar_t__ IsNonResident; scalar_t__ Length; } ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;
typedef TYPE_3__* PNTFS_ATTR_CONTEXT ;
typedef int LONGLONG ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,int*,int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static PNTFS_ATTR_CONTEXT FUNC_4(PNTFS_ATTR_RECORD VAR_3)
{
    PNTFS_ATTR_CONTEXT VAR_4;

    VAR_4 = FUNC_1(FUNC_0(VAR_0, VAR_1) + VAR_3->Length,
                             VAR_2);
    FUNC_3(&VAR_4->Record, VAR_3, VAR_3->Length);
    if (VAR_3->IsNonResident)
    {
        LONGLONG VAR_5;
        ULONGLONG VAR_6;

        VAR_4->CacheRun = (PUCHAR)&VAR_4->Record + VAR_4->Record.NonResident.MappingPairsOffset;
        VAR_4->CacheRunOffset = 0;
        VAR_4->CacheRun = FUNC_2(VAR_4->CacheRun, &VAR_5, &VAR_6);
        VAR_4->CacheRunLength = VAR_6;
        if (VAR_5 != -1)
        {

            VAR_4->CacheRunStartLCN =
            VAR_4->CacheRunLastLCN = VAR_5;
        }
        else
        {

            VAR_4->CacheRunStartLCN = -1;
            VAR_4->CacheRunLastLCN = 0;
        }
        VAR_4->CacheRunCurrentOffset = 0;
    }

    return VAR_4;
}
