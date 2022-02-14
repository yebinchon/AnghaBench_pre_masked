
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {struct TYPE_6__* SectionName; struct TYPE_6__* ItemValue; struct TYPE_6__* ItemName; int SectionItemList; } ;
typedef int PLIST_ENTRY ;
typedef TYPE_1__* PINI_SECTION_ITEM ;
typedef TYPE_1__* PINI_SECTION ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

VOID FUNC_4(PINI_SECTION VAR_5)
{
    PLIST_ENTRY VAR_6;
    PINI_SECTION_ITEM VAR_7;


    while (!FUNC_2(&VAR_5->SectionItemList))
    {

        VAR_6 = FUNC_3(&VAR_5->SectionItemList);
        VAR_7 = FUNC_0(VAR_6, VAR_0, VAR_6);


        FUNC_1(VAR_7->ItemName, VAR_1);
        FUNC_1(VAR_7->ItemValue, VAR_4);
        FUNC_1(VAR_7, VAR_3);
    }

    FUNC_1(VAR_5->SectionName, VAR_1);
    FUNC_1(VAR_5, VAR_2);
}
