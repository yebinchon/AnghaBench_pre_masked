
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned short FUNC_1 (unsigned short) ;
 unsigned long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static bool
FUNC_3(char *VAR_1, unsigned short *VAR_2)
{
    unsigned long VAR_3;
    char *VAR_4;

    VAR_0 = 0;
    VAR_3 = FUNC_2(VAR_1, &VAR_4, 10);

    if (FUNC_0(VAR_0 != 0))
        return 0;

    if (FUNC_0(*VAR_4 != '\0'))
        return 0;

    if (FUNC_0((unsigned long)(unsigned short)VAR_3 != VAR_3))
        return 0;

    *VAR_2 = FUNC_1((unsigned short)VAR_3);
    return 1;
}
