
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (double,double) ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 double FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    double VAR_4;

    VAR_3 = 0xdeadbeef;
    FUNC_2(VAR_2);
    FUNC_1(VAR_3 == VAR_0, "errno = %d\n", VAR_3);

    VAR_3 = 0xdeadbeef;
    VAR_4 = FUNC_2(VAR_1);
    FUNC_1(FUNC_0(VAR_4, 1.57079632679489661923), "ret = %lf\n", VAR_4);
    FUNC_1(VAR_3 == 0xdeadbeef, "errno = %d\n", VAR_3);

    VAR_3 = 0xdeadbeef;
    VAR_4 = FUNC_2(-VAR_1);
    FUNC_1(FUNC_0(VAR_4, -1.57079632679489661923), "ret = %lf\n", VAR_4);
    FUNC_1(VAR_3 == 0xdeadbeef, "errno = %d\n", VAR_3);

    VAR_3 = 0xdeadbeef;
    FUNC_4(VAR_2);
    FUNC_1(VAR_3 == VAR_0, "errno = %d\n", VAR_3);

    VAR_3 = 0xdeadbeef;
    VAR_4 = FUNC_4(VAR_1);
    FUNC_1(FUNC_0(VAR_4, 1.0), "ret = %lf\n", VAR_4);
    FUNC_1(VAR_3 == 0xdeadbeef, "errno = %d\n", VAR_3);

    VAR_3 = 0xdeadbeef;
    FUNC_3(VAR_2);
    FUNC_1(VAR_3 == VAR_0, "errno = %d\n", VAR_3);

    VAR_3 = 0xdeadbeef;
    FUNC_3(VAR_1);
    FUNC_1(VAR_3 == 0xdeadbeef, "errno = %d\n", VAR_3);
}
