
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_uchar ;
typedef int zend_long ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,double) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,char*,int,char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int *,double*,int ) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*,int ) ;

void
FUNC_7(char *VAR_3, zval *VAR_4)
{
    char *VAR_5, *VAR_6;

    FUNC_3(VAR_4);

    VAR_5 = VAR_3;
    while(1) {

        if (*VAR_5 == '#' || *VAR_5 == '\r') {
            if ((VAR_5 = FUNC_6(VAR_5, VAR_2)) == ((void*)0)) {
                break;
            }
            VAR_5 += 2;
            continue;
        }


        if ((VAR_6 = FUNC_5(VAR_5, ':')) == ((void*)0)) {
            break;
        }
        char *VAR_7 = VAR_5;
        int VAR_8 = VAR_6 - VAR_5;
        VAR_7[VAR_8] = '\0';


        VAR_5 = VAR_6 + 1;
        if ((VAR_6 = FUNC_6(VAR_5, VAR_2)) == ((void*)0)) {
            break;
        }
        char *VAR_9 = VAR_5;
        int VAR_10 = VAR_6 - VAR_5;
        VAR_9[VAR_10] = '\0';

        double VAR_11;
        zend_long VAR_12;
        zend_uchar VAR_13 = FUNC_4(VAR_9, VAR_10, &VAR_12, &VAR_11, 0);
        if (VAR_13 == VAR_1) {
            FUNC_1(VAR_4, VAR_7, VAR_8, VAR_12);
        } else if (VAR_13 == VAR_0) {
            FUNC_0(VAR_4, VAR_7, VAR_8, VAR_11);
        } else {
            FUNC_2(VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
        }

        VAR_5 = VAR_6 + 2;
    }
}
