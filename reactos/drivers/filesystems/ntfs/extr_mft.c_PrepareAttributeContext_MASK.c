
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONGLONG ;
struct TYPE_17__ {int AttrCtxtLookasideList; } ;
struct TYPE_13__ {scalar_t__ MappingPairsOffset; } ;
struct TYPE_16__ {TYPE_1__ NonResident; } ;
struct TYPE_15__ {int CacheRunStartLCN; int CacheRunLastLCN; TYPE_4__* pRecord; int DataRunsMCB; scalar_t__ CacheRunCurrentOffset; int CacheRunLength; int CacheRun; scalar_t__ CacheRunOffset; } ;
struct TYPE_14__ {scalar_t__ IsNonResident; int Length; } ;
typedef int PUCHAR ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;
typedef TYPE_3__* PNTFS_ATTR_CONTEXT ;
typedef int LONGLONG ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int*,int *) ;
 TYPE_3__* FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 TYPE_8__* VAR_1 ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*,int ) ;
 int VAR_2 ;

PNTFS_ATTR_CONTEXT
FUNC_9(PNTFS_ATTR_RECORD VAR_3)
{
    PNTFS_ATTR_CONTEXT VAR_4;

    VAR_4 = FUNC_3(&VAR_1->AttrCtxtLookasideList);
    if(!VAR_4)
    {
        FUNC_1("Error: Unable to allocate memory for context!\n");
        return ((void*)0);
    }


    VAR_4->pRecord = FUNC_4(VAR_0, VAR_3->Length, VAR_2);
    if(!VAR_4->pRecord)
    {
        FUNC_1("Error: Unable to allocate memory for attribute record!\n");
        FUNC_6(&VAR_1->AttrCtxtLookasideList, VAR_4);
        return ((void*)0);
    }


    FUNC_8(VAR_4->pRecord, VAR_3, VAR_3->Length);

    if (VAR_3->IsNonResident)
    {
        LONGLONG VAR_5;
        ULONGLONG VAR_6;
        ULONGLONG VAR_7 = 0;
        PUCHAR VAR_8 = (PUCHAR)((ULONG_PTR)VAR_4->pRecord + VAR_4->pRecord->NonResident.MappingPairsOffset);

        VAR_4->CacheRun = VAR_8;
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


        if (!FUNC_7(FUNC_0(VAR_8, &VAR_4->DataRunsMCB, &VAR_7)))
        {
            FUNC_1("Unable to convert data runs to MCB!\n");
            FUNC_5(VAR_4->pRecord, VAR_2);
            FUNC_6(&VAR_1->AttrCtxtLookasideList, VAR_4);
            return ((void*)0);
        }
    }

    return VAR_4;
}
