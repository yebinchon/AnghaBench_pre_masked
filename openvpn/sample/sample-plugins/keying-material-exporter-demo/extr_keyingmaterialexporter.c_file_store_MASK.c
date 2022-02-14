
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0, char *VAR_1)
{
    FILE *VAR_2;
    if (!(VAR_2 = FUNC_1(VAR_0, "w+")))
    {
        return;
    }

    FUNC_2(VAR_2, "%s", VAR_1);
    FUNC_0(VAR_2);
}
