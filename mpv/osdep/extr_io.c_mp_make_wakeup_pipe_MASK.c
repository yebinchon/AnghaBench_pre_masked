
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,...) ;
 scalar_t__ FUNC_1 (int*) ;

int FUNC_2(int VAR_3[2])
{
    if (FUNC_1(VAR_3) < 0)
        return -1;

    for (int VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        int VAR_5 = FUNC_0(VAR_3[VAR_4], VAR_0) | VAR_2;
        FUNC_0(VAR_3[VAR_4], VAR_1, VAR_5);
    }
    return 0;
}
