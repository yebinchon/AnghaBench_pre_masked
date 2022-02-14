
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_7__ {int SectionItemList; int SectionItemCount; } ;
struct TYPE_6__ {int ListEntry; struct TYPE_6__* ItemValue; struct TYPE_6__* ItemName; } ;
typedef TYPE_1__* PINI_SECTION_ITEM ;
typedef TYPE_2__* PINI_SECTION ;
typedef int PCSTR ;
typedef int INI_SECTION_ITEM ;
typedef int BOOLEAN ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;

BOOLEAN FUNC_6(ULONG_PTR VAR_5, PCSTR VAR_6, PCSTR VAR_7)
{
    PINI_SECTION VAR_8 = (PINI_SECTION)VAR_5;
    PINI_SECTION_ITEM VAR_9;


    VAR_9 = FUNC_0(sizeof(INI_SECTION_ITEM), VAR_2);
    if (!VAR_9)
    {
        return VAR_0;
    }

    FUNC_3(VAR_9, sizeof(INI_SECTION_ITEM));


    VAR_9->ItemName = FUNC_0(FUNC_5(VAR_6) + 1, VAR_1);
    if (!VAR_9->ItemName)
    {
        FUNC_1(VAR_9, VAR_2);
        return VAR_0;
    }


    VAR_9->ItemValue = FUNC_0(FUNC_5(VAR_7) + 1, VAR_3);
    if (!VAR_9->ItemValue)
    {
        FUNC_1(VAR_9->ItemName, VAR_1);
        FUNC_1(VAR_9, VAR_2);
        return VAR_0;
    }

    FUNC_4(VAR_9->ItemName, VAR_6);
    FUNC_4(VAR_9->ItemValue, VAR_7);


    VAR_8->SectionItemCount++;
    FUNC_2(&VAR_8->SectionItemList, &VAR_9->ListEntry);

    return VAR_4;
}
