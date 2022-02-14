
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;


 scalar_t__ FUNC_0 (char*,struct in_addr*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*) ;

int
FUNC_3(char * VAR_0)
{
    char *VAR_1;
    struct in_addr VAR_2;
    int VAR_3 = 0;

    FUNC_1("Input: %s", VAR_0);

    do {
        VAR_1 = FUNC_2(VAR_0, " ");
        FUNC_1("got %s", VAR_1);
  if( VAR_1 && FUNC_0(VAR_1, &VAR_2) ) VAR_3++;
        VAR_0 = ((void*)0);
    } while( VAR_1 );

    return (VAR_3);
}
