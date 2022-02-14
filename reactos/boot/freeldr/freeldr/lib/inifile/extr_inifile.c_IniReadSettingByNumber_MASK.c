
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_3__ {int ItemValue; int ItemName; } ;
typedef TYPE_1__* PINI_SECTION_ITEM ;
typedef char* PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (char*,size_t,...) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,size_t) ;

BOOLEAN FUNC_4(ULONG_PTR VAR_3, ULONG VAR_4, PCHAR VAR_5, ULONG VAR_6, PCHAR VAR_7, ULONG VAR_8)
{
    PINI_SECTION_ITEM VAR_9;
    FUNC_2(".001 NameSize = %d ValueSize = %d\n", VAR_6, VAR_8);

    FUNC_2("IniReadSettingByNumber() SectionId = 0x%x\n", VAR_3);


    VAR_9 = FUNC_1(VAR_3, VAR_4);
    if (!VAR_9)
    {
        FUNC_2("IniReadSettingByNumber() Setting number %d not found.\n", VAR_4);
        return VAR_1;
    }

    FUNC_2("IniReadSettingByNumber() Setting number %d found.\n", VAR_4);
    FUNC_2("IniReadSettingByNumber() Setting name = %s\n", VAR_9->ItemName);
    FUNC_2("IniReadSettingByNumber() Setting value = %s\n", VAR_9->ItemValue);

    FUNC_2("1 NameSize = %d ValueSize = %d\n", VAR_6, VAR_8);
    FUNC_2("2 NameSize = %d ValueSize = %d\n", VAR_6, VAR_8);
    FUNC_3(VAR_5, VAR_9->ItemName, VAR_6 - 1);
    VAR_5[VAR_6 - 1] = '\0';
    FUNC_2("3 NameSize = %d ValueSize = %d\n", VAR_6, VAR_8);
    FUNC_3(VAR_7, VAR_9->ItemValue, VAR_8 - 1);
    VAR_7[VAR_8 - 1] = '\0';
    FUNC_2("4 NameSize = %d ValueSize = %d\n", VAR_6, VAR_8);
    FUNC_0(VAR_0, VAR_5, VAR_6);
    FUNC_0(VAR_0, VAR_7, VAR_8);

    return VAR_2;
}
