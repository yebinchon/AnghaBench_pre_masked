
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (long) ;
 int FUNC_1 (long) ;
 scalar_t__ VAR_0 ;
 long FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
    long VAR_4 = FUNC_2();
    int VAR_5;

    if (VAR_3)
        VAR_5 = VAR_2;
    else
        VAR_5 = VAR_1;

    if (FUNC_0(VAR_4) == VAR_0
            && FUNC_1(VAR_4) == VAR_5)
        return 1;

    return 0;
}
