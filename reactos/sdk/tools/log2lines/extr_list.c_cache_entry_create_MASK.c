
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* buf; char* name; char* path; scalar_t__ Size; int RelBase; int ImageBase; } ;
typedef TYPE_1__* PLIST_MEMBER ;
typedef int LIST_MEMBER ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,unsigned int*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

PLIST_MEMBER
FUNC_7(char *VAR_1)
{
    PLIST_MEMBER VAR_2;
    char *VAR_3 = ((void*)0);
    int VAR_4;

    if (!VAR_1)
        return ((void*)0);

    VAR_2 = FUNC_2(sizeof(LIST_MEMBER));
    if (!VAR_2)
        return ((void*)0);

    VAR_4 = FUNC_6(VAR_1);
    VAR_2->buf = VAR_3 = FUNC_2(VAR_4 + 1);
    if (!VAR_3)
    {
        FUNC_1(1, "Alloc entry failed\n");
        return FUNC_0(VAR_2);
    }

    FUNC_5(VAR_3, VAR_1);
    if (VAR_3[VAR_4] == '\n')
        VAR_3[VAR_4] = '\0';

    VAR_2->name = VAR_3;
    VAR_3 = FUNC_4(VAR_3, '|');
    if (!VAR_3)
    {
        FUNC_1(1, "Name field missing\n");
        return FUNC_0(VAR_2);
    }
    *VAR_3++ = '\0';

    VAR_2->path = VAR_3;
    VAR_3 = FUNC_4(VAR_3, '|');
    if (!VAR_3)
    {
        FUNC_1(1, "Path field missing\n");
        return FUNC_0(VAR_2);
    }
    *VAR_3++ = '\0';
    if (1 != FUNC_3(VAR_3, "%x", (unsigned int *)(&VAR_2->ImageBase)))
    {
        FUNC_1(1, "ImageBase field missing\n");
        return FUNC_0(VAR_2);
    }
    VAR_2->RelBase = VAR_0;
    VAR_2->Size = 0;
    return VAR_2;
}
