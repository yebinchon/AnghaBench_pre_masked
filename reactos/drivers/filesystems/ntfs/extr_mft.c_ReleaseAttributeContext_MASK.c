
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {scalar_t__ IsNonResident; } ;
struct TYPE_7__ {int AttrCtxtLookasideList; } ;
struct TYPE_6__ {TYPE_5__* pRecord; int DataRunsMCB; } ;
typedef TYPE_1__* PNTFS_ATTR_CONTEXT ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;

VOID
FUNC_3(PNTFS_ATTR_CONTEXT VAR_2)
{
    if (VAR_2->pRecord)
    {
        if (VAR_2->pRecord->IsNonResident)
        {
            FUNC_2(&VAR_2->DataRunsMCB);
        }

        FUNC_0(VAR_2->pRecord, VAR_1);
    }

    FUNC_1(&VAR_0->AttrCtxtLookasideList, VAR_2);
}
