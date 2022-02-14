
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 char FUNC_2 (char) ;

int
FUNC_3(char *VAR_1)
{
    if (VAR_1[0] == VAR_0)
 return 0;
    if (VAR_1[1] == ':')
    {
 if (FUNC_0(FUNC_2(VAR_1[0]) - 'A' + 1))
     return -1;
 VAR_1 += 2;
    }
    if (*VAR_1 == VAR_0)
 return 0;
    return FUNC_1(VAR_1);
}
