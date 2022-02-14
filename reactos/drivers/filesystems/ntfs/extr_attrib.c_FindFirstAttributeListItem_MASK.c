
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* NonResidentCur; TYPE_1__* NonResidentStart; } ;
struct TYPE_5__ {scalar_t__ Type; } ;
typedef TYPE_1__* PNTFS_ATTRIBUTE_LIST_ITEM ;
typedef TYPE_2__* PFIND_ATTR_CONTXT ;
typedef int NTSTATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_0(PFIND_ATTR_CONTXT VAR_3,
                           PNTFS_ATTRIBUTE_LIST_ITEM *VAR_4)
{
    if (VAR_3->NonResidentStart == ((void*)0) || VAR_3->NonResidentStart->Type == VAR_0)
    {
        return VAR_2;
    }

    VAR_3->NonResidentCur = VAR_3->NonResidentStart;
    *VAR_4 = VAR_3->NonResidentCur;
    return VAR_1;
}
