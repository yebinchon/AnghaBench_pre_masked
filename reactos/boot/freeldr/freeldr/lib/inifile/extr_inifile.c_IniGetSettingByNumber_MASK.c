
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_6__ {int Flink; } ;
struct TYPE_8__ {TYPE_1__ SectionItemList; } ;
struct TYPE_7__ {TYPE_1__ ListEntry; } ;
typedef TYPE_2__* PINI_SECTION_ITEM ;
typedef TYPE_3__* PINI_SECTION ;


 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

PINI_SECTION_ITEM FUNC_1(ULONG_PTR VAR_2, ULONG VAR_3)
{
    PINI_SECTION VAR_4 = (PINI_SECTION)VAR_2;
    PINI_SECTION_ITEM VAR_5;


    VAR_5 = FUNC_0(VAR_4->SectionItemList.Flink, VAR_0, VAR_1);
    while (&VAR_5->ListEntry != &VAR_4->SectionItemList)
    {

        if (VAR_3 == 0)
        {
            return VAR_5;
        }


        VAR_3--;


        VAR_5 = FUNC_0(VAR_5->ListEntry.Flink, VAR_0, VAR_1);
    }
    return ((void*)0);
}
