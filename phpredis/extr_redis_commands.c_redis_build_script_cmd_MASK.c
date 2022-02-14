
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int smart_string ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

smart_string *
FUNC_10(smart_string *VAR_1, int VAR_2, zval *VAR_3)
{
    int VAR_4;
    zend_string *VAR_5;

    if (FUNC_5(VAR_3[0]) != VAR_0) {
        return ((void*)0);
    }

    if (!FUNC_7(FUNC_4(VAR_3[0]), "flush") || !FUNC_7(FUNC_4(VAR_3[0]), "kill")) {

        FUNC_0(VAR_1, VAR_2, "SCRIPT");
        FUNC_6(VAR_1, FUNC_4(VAR_3[0]), FUNC_3(VAR_3[0]));
    } else if (!FUNC_7(FUNC_4(VAR_3[0]), "load")) {


        if (VAR_2 < 2 || FUNC_5(VAR_3[1]) != VAR_0 || FUNC_3(VAR_3[1]) < 1) {
            return ((void*)0);
        }

        FUNC_0(VAR_1, VAR_2, "SCRIPT");
        FUNC_6(VAR_1, "LOAD", sizeof("LOAD") - 1);
        FUNC_6(VAR_1, FUNC_4(VAR_3[1]), FUNC_3(VAR_3[1]));
    } else if (!FUNC_7(FUNC_4(VAR_3[0]), "exists")) {

        if (VAR_2 < 2) {
            return ((void*)0);
        }

        FUNC_0(VAR_1, VAR_2, "SCRIPT");
        FUNC_6(VAR_1, "EXISTS", sizeof("EXISTS") - 1);

        for (VAR_4 = 1; VAR_4 < VAR_2; ++VAR_4) {
            VAR_5 = FUNC_9(&VAR_3[VAR_4]);
            FUNC_6(VAR_1, FUNC_2(VAR_5), FUNC_1(VAR_5));
            FUNC_8(VAR_5);
        }
    } else {

        return ((void*)0);
    }
    return VAR_1;
}
