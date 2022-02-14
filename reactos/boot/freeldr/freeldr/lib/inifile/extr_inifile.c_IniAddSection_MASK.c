
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_4__ {int ListEntry; int SectionItemList; void* SectionName; } ;
typedef TYPE_1__* PINI_SECTION ;
typedef int PCSTR ;
typedef int INI_SECTION ;
typedef int CHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int ) ;

BOOLEAN FUNC_7(PCSTR VAR_6, ULONG_PTR* VAR_7)
{
    PINI_SECTION VAR_8;


    VAR_8 = FUNC_0(sizeof(INI_SECTION), VAR_4);
    if (!VAR_8)
    {
        return VAR_0;
    }

    FUNC_4(VAR_8, sizeof(INI_SECTION));


    VAR_8->SectionName = FUNC_0(FUNC_6(VAR_6) + sizeof(CHAR), VAR_3);
    if (!VAR_8->SectionName)
    {
        FUNC_1(VAR_8, VAR_4);
        return VAR_0;
    }


    FUNC_5(VAR_8->SectionName, VAR_6);
    FUNC_2(&VAR_8->SectionItemList);


    VAR_1++;
    FUNC_3(&VAR_2, &VAR_8->ListEntry);

    *VAR_7 = (ULONG_PTR)VAR_8;

    return VAR_5;
}
