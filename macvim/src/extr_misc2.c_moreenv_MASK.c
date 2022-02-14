
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1()
{
    int VAR_3;
    char **VAR_4;

    VAR_3 = VAR_2 + VAR_0;
    VAR_4 = (char **)FUNC_0((char *)VAR_1, VAR_3 * sizeof (*VAR_4));
    if (VAR_4 == 0)
 return -1;
    VAR_1 = VAR_4;
    VAR_2 = VAR_3;
    return 0;
}
