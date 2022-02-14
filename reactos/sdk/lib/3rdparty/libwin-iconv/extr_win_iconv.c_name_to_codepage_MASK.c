
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int codepage; int * name; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1)
{
    int VAR_2;

    if (*VAR_1 == '\0' ||
 FUNC_4(VAR_1, "char") == 0)
        return FUNC_0();
    else if (FUNC_4(VAR_1, "wchar_t") == 0)
        return 1200;
    else if (FUNC_2(VAR_1, "cp", 2) == 0)
        return FUNC_3(VAR_1 + 2);
    else if ('0' <= VAR_1[0] && VAR_1[0] <= '9')
        return FUNC_3(VAR_1);
    else if (FUNC_2(VAR_1, "xx", 2) == 0)
        return FUNC_3(VAR_1 + 2);

    for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); ++VAR_2)
        if (FUNC_1(VAR_1, VAR_0[VAR_2].name) == 0)
            return VAR_0[VAR_2].codepage;
    return -1;
}
