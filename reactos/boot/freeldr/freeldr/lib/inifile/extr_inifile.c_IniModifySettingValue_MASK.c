
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_5__ {int Flink; } ;
struct TYPE_7__ {TYPE_1__ SectionItemList; } ;
struct TYPE_6__ {scalar_t__ ItemValue; TYPE_1__ ListEntry; int ItemName; } ;
typedef TYPE_2__* PINI_SECTION_ITEM ;
typedef TYPE_3__* PINI_SECTION ;
typedef int PCSTR ;
typedef scalar_t__ PCHAR ;
typedef int BOOLEAN ;


 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ) ;

BOOLEAN FUNC_7(ULONG_PTR VAR_5, PCSTR VAR_6, PCSTR VAR_7)
{
    PINI_SECTION VAR_8 = (PINI_SECTION)VAR_5;
    PINI_SECTION_ITEM VAR_9;
    PCHAR VAR_10;


    VAR_9 = FUNC_0(VAR_8->SectionItemList.Flink, VAR_1, VAR_2);
    while (&VAR_9->ListEntry != &VAR_8->SectionItemList)
    {

        if (FUNC_4(VAR_9->ItemName, VAR_6) == 0)
        {
            break;
        }



        VAR_9 = FUNC_0(VAR_9->ListEntry.Flink, VAR_1, VAR_2);
    }

    if (&VAR_9->ListEntry == &VAR_8->SectionItemList)
    {
        return FUNC_3(VAR_5, VAR_6, VAR_7);
    }


    VAR_10 = FUNC_1(FUNC_6(VAR_7) + 1, VAR_3);
    if (!VAR_10)
    {

        return VAR_0;
    }
    FUNC_2(VAR_9->ItemValue, VAR_3);
    VAR_9->ItemValue = VAR_10;

    FUNC_5(VAR_9->ItemValue, VAR_7);

    return VAR_4;
}
