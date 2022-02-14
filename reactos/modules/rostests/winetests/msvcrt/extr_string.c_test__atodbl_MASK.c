
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; } ;
typedef TYPE_1__ _CRT_DOUBLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    _CRT_DOUBLE VAR_2;
    char VAR_3[32];
    int VAR_4;

    if(!&FUNC_3) {


        FUNC_5("_atodbl_l is not available\n");
        return;
    }

    VAR_3[0] = 0;
    VAR_4 = FUNC_3(&VAR_2, VAR_3, ((void*)0));
    FUNC_2(VAR_4 == 0, "_atodbl_l(&d, \"\", NULL) returned %d, expected 0\n", VAR_4);
    FUNC_2(VAR_2.x == 0, "d.x = %lf, expected 0\n", VAR_2.x);
    VAR_4 = FUNC_0(&VAR_2, VAR_3);
    FUNC_2(VAR_4 == 0, "_atodbl(&d, \"\") returned %d, expected 0\n", VAR_4);
    FUNC_2(VAR_2.x == 0, "d.x = %lf, expected 0\n", VAR_2.x);

    FUNC_4(VAR_3, "t");
    VAR_4 = FUNC_3(&VAR_2, VAR_3, ((void*)0));
    FUNC_2(VAR_4 == 0, "_atodbl_l(&d, \"t\", NULL) returned %d, expected 0\n", VAR_4);
    FUNC_2(VAR_2.x == 0, "d.x = %lf, expected 0\n", VAR_2.x);
    VAR_4 = FUNC_0(&VAR_2, VAR_3);
    FUNC_2(VAR_4 == 0, "_atodbl(&d, \"t\") returned %d, expected 0\n", VAR_4);
    FUNC_2(VAR_2.x == 0, "d.x = %lf, expected 0\n", VAR_2.x);

    FUNC_4(VAR_3, "0");
    VAR_4 = FUNC_3(&VAR_2, VAR_3, ((void*)0));
    FUNC_2(VAR_4 == 0, "_atodbl_l(&d, \"0\", NULL) returned %d, expected 0\n", VAR_4);
    FUNC_2(VAR_2.x == 0, "d.x = %lf, expected 0\n", VAR_2.x);
    VAR_4 = FUNC_0(&VAR_2, VAR_3);
    FUNC_2(VAR_4 == 0, "_atodbl(&d, \"0\") returned %d, expected 0\n", VAR_4);
    FUNC_2(VAR_2.x == 0, "d.x = %lf, expected 0\n", VAR_2.x);

    FUNC_4(VAR_3, "123");
    VAR_4 = FUNC_3(&VAR_2, VAR_3, ((void*)0));
    FUNC_2(VAR_4 == 0, "_atodbl_l(&d, \"123\", NULL) returned %d, expected 0\n", VAR_4);
    FUNC_2(VAR_2.x == 123, "d.x = %lf, expected 123\n", VAR_2.x);
    VAR_4 = FUNC_0(&VAR_2, VAR_3);
    FUNC_2(VAR_4 == 0, "_atodbl(&d, \"123\") returned %d, expected 0\n", VAR_4);
    FUNC_2(VAR_2.x == 123, "d.x = %lf, expected 123\n", VAR_2.x);

    FUNC_4(VAR_3, "1e-309");
    VAR_4 = FUNC_3(&VAR_2, VAR_3, ((void*)0));
    FUNC_2(VAR_4 == VAR_1, "_atodbl_l(&d, \"1e-309\", NULL) returned %d, expected _UNDERFLOW\n", VAR_4);
    FUNC_2(VAR_2.x!=0 && FUNC_1(VAR_2.x, 0), "d.x = %le, expected 0\n", VAR_2.x);
    VAR_4 = FUNC_0(&VAR_2, VAR_3);
    FUNC_2(VAR_4 == VAR_1, "_atodbl(&d, \"1e-309\") returned %d, expected _UNDERFLOW\n", VAR_4);
    FUNC_2(VAR_2.x!=0 && FUNC_1(VAR_2.x, 0), "d.x = %le, expected 0\n", VAR_2.x);

    FUNC_4(VAR_3, "1e309");
    VAR_4 = FUNC_3(&VAR_2, VAR_3, ((void*)0));
    FUNC_2(VAR_4 == VAR_0, "_atodbl_l(&d, \"1e309\", NULL) returned %d, expected _OVERFLOW\n", VAR_4);
    VAR_4 = FUNC_0(&VAR_2, VAR_3);
    FUNC_2(VAR_4 == VAR_0, "_atodbl(&d, \"1e309\") returned %d, expected _OVERFLOW\n", VAR_4);
}
