
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*) ;

char *FUNC_2(void)
{
    char VAR_1[VAR_0];
    char *VAR_2;

    VAR_2 = FUNC_0(VAR_1, sizeof(VAR_1));
    return FUNC_1(VAR_2 ? VAR_2 : "/");
}
