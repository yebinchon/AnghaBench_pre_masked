
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,int) ;
 int FUNC_8 (int *) ;

void
FUNC_9(char *VAR_0, zval *VAR_1)
{
    char *VAR_2, *VAR_3, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6, *VAR_7, *VAR_8;
    int VAR_9 = 0, VAR_10 = 0, VAR_11;
    zval VAR_12;


    FUNC_4(VAR_1);
    FUNC_4(&VAR_12);


    VAR_2 = VAR_0;
    VAR_3 = VAR_0;


    while(!VAR_10) {

        switch(*VAR_2) {

            case '\0':
                VAR_10 = 1;
                break;

            case '\n':
            case ' ':

                VAR_5 = VAR_3;



                if(VAR_4 && VAR_5) {

                    VAR_7 = FUNC_7(VAR_4, VAR_9);


                    VAR_8 = FUNC_7(VAR_3, VAR_2 - VAR_3);


                    VAR_11 = 1;
                    for(VAR_6 = VAR_8; *VAR_6; ++VAR_6) {
                        if(*VAR_6 < '0' || *VAR_6 > '9') {
                            VAR_11 = 0;
                            break;
                        }
                    }


                    if(VAR_11 == 1) {
                        FUNC_1(&VAR_12, VAR_7, FUNC_5(VAR_8));
                    } else {
                        FUNC_2(&VAR_12, VAR_7, VAR_8);
                    }
                    FUNC_6(VAR_8);

                    if(*VAR_2 == '\n') {

                        FUNC_3(VAR_1, &VAR_12);


                        if(*(VAR_2+1) != '\0') {
                            FUNC_4(&VAR_12);
                        }
                    }


                    FUNC_6(VAR_7);
                } else {

                    FUNC_8(VAR_1);
                    FUNC_0(VAR_1, 0);
                    return;
                }


                VAR_3 = VAR_2 + 1;

                break;

            case '=':

                VAR_4 = VAR_3;
                VAR_9 = VAR_2 - VAR_3;


                VAR_3 = VAR_2 + 1;

                break;
        }


        VAR_2++;
    }
}
