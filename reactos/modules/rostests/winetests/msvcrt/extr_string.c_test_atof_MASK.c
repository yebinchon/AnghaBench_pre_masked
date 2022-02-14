
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (double,double) ;
 double FUNC_1 (char*) ;
 double VAR_2 ;
 int FUNC_2 (int,char*,double) ;
 double FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    double VAR_3;

    VAR_3 = FUNC_1("0.0");
    FUNC_2(FUNC_0(VAR_3, 0.0), "d = %lf\n", VAR_3);

    VAR_3 = FUNC_1("1.0");
    FUNC_2(FUNC_0(VAR_3, 1.0), "d = %lf\n", VAR_3);

    VAR_3 = FUNC_1("-1.0");
    FUNC_2(FUNC_0(VAR_3, -1.0), "d = %lf\n", VAR_3);

    if (!&FUNC_3)
    {
        FUNC_4("_atof_l not found\n");
        return;
    }

    VAR_2 = VAR_0;
    VAR_3 = FUNC_1(((void*)0));
    FUNC_2(FUNC_0(VAR_3, 0.0), "d = %lf\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "errno = %x\n", VAR_2);

    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(((void*)0), ((void*)0));
    FUNC_2(FUNC_0(VAR_3, 0.0), "d = %lf\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "errno = %x\n", VAR_2);
}
