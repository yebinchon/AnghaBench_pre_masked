
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {unsigned int s_addr; } ;


 char* FUNC_0 (struct in_addr) ;
 int FUNC_1 (char*,char*,int) ;

char *FUNC_2(unsigned int VAR_0, char VAR_1[16])
{
    struct in_addr VAR_2;

    VAR_2.s_addr = VAR_0;

    if (VAR_1)
        FUNC_1(VAR_1, FUNC_0(VAR_2), 16);

    return FUNC_0(VAR_2);
}
