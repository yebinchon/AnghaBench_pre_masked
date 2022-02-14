
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_5__ {int Flink; } ;
struct TYPE_7__ {TYPE_1__ SectionItemList; } ;
struct TYPE_6__ {TYPE_1__ ListEntry; int ItemValue; int ItemName; } ;
typedef TYPE_2__* PINI_SECTION_ITEM ;
typedef TYPE_3__* PINI_SECTION ;
typedef int PCSTR ;
typedef char* PCHAR ;
typedef int BOOLEAN ;


 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,size_t) ;

BOOLEAN FUNC_5(ULONG_PTR VAR_4, PCSTR VAR_5, PCHAR VAR_6, ULONG VAR_7)
{
    PINI_SECTION VAR_8 = (PINI_SECTION)VAR_4;
    PINI_SECTION_ITEM VAR_9;

    FUNC_1("IniReadSettingByName() SectionId = 0x%x\n", VAR_4);


    VAR_9 = FUNC_0(VAR_8->SectionItemList.Flink, VAR_1, VAR_2);
    while (&VAR_9->ListEntry != &VAR_8->SectionItemList)
    {

        if (FUNC_3(VAR_5, VAR_9->ItemName) == 0)
        {
            FUNC_1("IniReadSettingByName() Setting \'%s\' found.\n", VAR_5);
            FUNC_1("IniReadSettingByName() Setting value = %s\n", VAR_9->ItemValue);

            FUNC_4(VAR_6, VAR_9->ItemValue, VAR_7 - 1);
            VAR_6[VAR_7 - 1] = '\0';

            return VAR_3;
        }


        VAR_9 = FUNC_0(VAR_9->ListEntry.Flink, VAR_1, VAR_2);
    }

    FUNC_2("IniReadSettingByName() Setting \'%s\' not found.\n", VAR_5);

    return VAR_0;
}
