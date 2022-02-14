
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (long,long) ;
 int FUNC_2 (long,long) ;
 int FUNC_3 (long,long) ;
 int FUNC_4 (long,long) ;
 int FUNC_5 (long,long) ;
 int FUNC_6 (long,long) ;

__attribute__((used)) static int FUNC_7(void)
{
    if (!FUNC_0(1, FUNC_1(123l, 123l))
        | !FUNC_0(0, FUNC_1(123l, -123l))
        | !FUNC_0(1, FUNC_6(123l, 500l))
        | !FUNC_0(0, FUNC_6(1000l, 1000l))
        | !FUNC_0(1, FUNC_5(-8923l, 102934563l))
        | !FUNC_0(0, FUNC_5(102934563l, -8923l))
        | !FUNC_0(1, FUNC_4(-8923l, 102934563l))
        | !FUNC_0(1, FUNC_4(12345l, 12345l))
        | !FUNC_0(0, FUNC_4(102934563l, -8923l))
        | !FUNC_0(1, FUNC_3(84325677l, 12345l))
        | !FUNC_0(0, FUNC_3(12345l, 84325677l))
        | !FUNC_0(1, FUNC_2(84325677l, 12345l))
        | !FUNC_0(1, FUNC_2(465869l, 465869l))
        | !FUNC_0(0, FUNC_2(12345l, 84325677l)))
        goto err;
    return 1;

err:
    return 0;
}
