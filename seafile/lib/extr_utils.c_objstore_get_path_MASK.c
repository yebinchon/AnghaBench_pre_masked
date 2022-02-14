
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

void
FUNC_3 (char *VAR_1, const char *VAR_2, const char *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_2(VAR_2);
    FUNC_0(VAR_1, VAR_2, VAR_4);
    VAR_1[VAR_4] = VAR_0;
    VAR_1[VAR_4+1] = VAR_3[0];
    VAR_1[VAR_4+2] = VAR_3[1];
    VAR_1[VAR_4+3] = VAR_0;
    FUNC_1(VAR_1+VAR_4+4, VAR_3+2);
}
