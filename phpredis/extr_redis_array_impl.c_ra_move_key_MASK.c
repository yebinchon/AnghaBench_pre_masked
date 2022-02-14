
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_bool ;


 int VAR_0 ;





 int FUNC_0 (char const*,int,int *) ;
 scalar_t__ FUNC_1 (int *,char const*,int,int *,long*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (char const*,int,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (char const*,int,int *,int *,long) ;
 scalar_t__ FUNC_6 (char const*,int,int *,int *,long) ;
 scalar_t__ FUNC_7 (char const*,int,int *,int *,long) ;
 scalar_t__ FUNC_8 (char const*,int,int *,int *,long) ;
 scalar_t__ FUNC_9 (char const*,int,int *,int *,long) ;

void
FUNC_10(const char *VAR_1, int VAR_2, zval *VAR_3, zval *VAR_4) {

    long VAR_5[2] = {0}, VAR_6, VAR_7;
    zend_bool VAR_8 = 0;
    if (FUNC_1(VAR_3, VAR_1, VAR_2, VAR_3, VAR_5)) {
        VAR_6 = VAR_5[0];
        VAR_7 = VAR_5[1];

        FUNC_4(VAR_4, VAR_0);
        switch(VAR_6) {
            case 129:
                VAR_8 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
                break;

            case 130:
                VAR_8 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
                break;

            case 131:
                VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
                break;

            case 128:
                VAR_8 = FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
                break;

            case 132:
                VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
                break;

            default:

                break;
        }
    }

    if(VAR_8) {
        FUNC_0(VAR_1, VAR_2, VAR_3);
        FUNC_3(VAR_1, VAR_2, VAR_4);
    }


    FUNC_2(VAR_4, ((void*)0), 0);
}
