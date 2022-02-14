
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name_on_cd; char* name; scalar_t__* extension; char* extension_on_cd; scalar_t__* joliet_name; scalar_t__ flags; } ;
typedef TYPE_1__* PDIR_RECORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (char const,char const*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (scalar_t__*,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(const char* VAR_3, PDIR_RECORD VAR_4, BOOL VAR_5)
{
    const char *VAR_6 = VAR_3;
    char *VAR_7 = VAR_4->name_on_cd;
    char *VAR_8 = VAR_4->name;
    int VAR_9;
    int VAR_10;
    VAR_10 = 1;
    while (*VAR_6 != 0)
    {
        if (*VAR_6 == '.')
        {
            VAR_6++;
            break;
        }

        if ((size_t)(VAR_7-VAR_4->name_on_cd) < sizeof(VAR_4->name_on_cd)-1)
            *VAR_7++ = FUNC_1(*VAR_6, VAR_3);
        else if (!VAR_2)
            FUNC_2("'%s' is not ISO-9660, aborting...", VAR_3);

        if ((size_t)(VAR_8-VAR_4->name) < sizeof(VAR_4->name)-1)
            *VAR_8++ = *VAR_6;
        else if (!VAR_2)
            FUNC_2("'%s' is not ISO-9660, aborting...", VAR_3);
        VAR_6++;
    }

    if (!VAR_2 && FUNC_7(VAR_6) > VAR_1)
    {
        FUNC_2("'%s' has too long extension, aborting...", VAR_3);
    }
    *VAR_7 = 0;
    FUNC_6(VAR_4->extension, VAR_6);
    VAR_7 = VAR_4->extension_on_cd;
    while (*VAR_6 != 0)
    {
        if ((size_t)(VAR_7-VAR_4->extension_on_cd) < sizeof(VAR_4->extension_on_cd)-1)
            *VAR_7++ = FUNC_1(*VAR_6, VAR_3);
        else if (!VAR_2)
            FUNC_2("'%s' is not ISO-9660, aborting...", VAR_3);
        VAR_6++;
    }
    *VAR_7 = 0;
    *VAR_8 = 0;

    if (VAR_5)
    {
        if (VAR_4->extension[0] != 0)
        {
            if (!VAR_2)
                FUNC_2("Directory with extension '%s'", VAR_3);
        }
        VAR_4->flags = VAR_0;
    } else
    {
        VAR_4->flags = 0;
    }

    VAR_10 = 1;
    while (FUNC_0(VAR_4))
    {

        if (FUNC_7(VAR_4->name_on_cd)<8)
            FUNC_2("'%s' is a duplicate file name, aborting...", VAR_3);

        if ((VAR_4->name_on_cd[8] == '.') && (FUNC_7(VAR_4->name_on_cd) < 13))
            FUNC_2("'%s' is a duplicate file name, aborting...", VAR_3);


        if (VAR_10>255)
            FUNC_2("'%s' is a duplicate file name, aborting...", VAR_3);

        VAR_4->name_on_cd[8] = '~';
        FUNC_4(&VAR_4->name_on_cd[9],0,5);
        FUNC_5(&VAR_4->name_on_cd[9],"%d",VAR_10);
        VAR_10++;
    }

    if (VAR_2)
    {
        VAR_9 = FUNC_7(VAR_3);
        if (VAR_9 > 64)
            FUNC_2("'%s' is not Joliet, aborting...", VAR_3);
        VAR_4->joliet_name = FUNC_3(VAR_9 + 1);
        if (VAR_4->joliet_name == ((void*)0))
            FUNC_2("Insufficient memory");
        FUNC_6(VAR_4->joliet_name, VAR_3);
    }
}
