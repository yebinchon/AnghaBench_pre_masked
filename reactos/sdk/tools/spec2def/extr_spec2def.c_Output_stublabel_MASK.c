
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 scalar_t__ VAR_1 ;

void
FUNC_1(FILE *VAR_2, char* VAR_3)
{
    if (VAR_1 == VAR_0)
    {
        FUNC_0(VAR_2,
                "\tEXPORT |%s| [FUNC]\n|%s|\n",
                VAR_3,
                VAR_3);
    }
    else
    {
        FUNC_0(VAR_2,
                "PUBLIC %s\n%s: nop\n",
                VAR_3,
                VAR_3);
    }
}
