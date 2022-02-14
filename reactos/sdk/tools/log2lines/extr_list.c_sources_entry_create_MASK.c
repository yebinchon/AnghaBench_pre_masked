
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buf; char* name; } ;
typedef TYPE_1__* PLIST_MEMBER ;
typedef scalar_t__ PLIST ;
typedef int LIST_MEMBER ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (int,char*,...) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

PLIST_MEMBER
FUNC_8(PLIST VAR_0, char *VAR_1, char *VAR_2)
{
    PLIST_MEMBER VAR_3;
    char *VAR_4 = ((void*)0);
    int VAR_5;

    if (!VAR_1)
        return ((void*)0);
    if (!VAR_2)
        VAR_2 = "";

    VAR_3 = FUNC_4(sizeof(LIST_MEMBER));
    if (!VAR_3)
        return ((void*)0);

    VAR_5 = FUNC_7(VAR_1) + FUNC_7(VAR_2);
    VAR_3->buf = VAR_4 = FUNC_4(VAR_5 + 1);
    if (!VAR_4)
    {
        FUNC_3(1, "Alloc entry failed\n");
        return FUNC_0(VAR_3);
    }

    FUNC_6(VAR_4, VAR_2);
    FUNC_5(VAR_4, VAR_1);
    if (VAR_4[VAR_5] == '\n')
        VAR_4[VAR_5] = '\0';

    VAR_3->name = VAR_4;
    if (VAR_0)
    {
        if (FUNC_2(VAR_0, VAR_3->name))
        {
            FUNC_3(1, "Entry %s exists\n", VAR_3->name);
            VAR_3 = FUNC_0(VAR_3);
        }
        else
        {
            FUNC_3(1, "Inserting entry %s\n", VAR_3->name);
            FUNC_1(VAR_0, VAR_3);
        }
    }

    return VAR_3;
}
