
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2 (
    char *VAR_0)
{
    char *VAR_1;


    FUNC_0 ();


    if (!VAR_0)
    {
        return;
    }



    for (VAR_1 = VAR_0; *VAR_1; VAR_1++)
    {
        *VAR_1 = (char) FUNC_1 ((int) *VAR_1);
    }
}
