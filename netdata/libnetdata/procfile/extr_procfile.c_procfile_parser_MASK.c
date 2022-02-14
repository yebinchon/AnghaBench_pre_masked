
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; size_t len; size_t size; scalar_t__* separators; } ;
typedef TYPE_1__ procfile ;
typedef scalar_t__ PF_CHAR_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 size_t* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(procfile *VAR_6) {


    char *VAR_7 = VAR_6->data
        , *VAR_8 = &VAR_6->data[VAR_6->len]
        , *VAR_9 = VAR_6->data;


    PF_CHAR_TYPE *VAR_10 = VAR_6->separators;

    char VAR_11 = 0;
    size_t VAR_12 = 0;

    size_t *VAR_13 = FUNC_2(VAR_6);

    while(VAR_7 < VAR_8) {
        PF_CHAR_TYPE VAR_14 = VAR_10[(unsigned char)(*VAR_7)];



        if(FUNC_1(VAR_14 == VAR_5)) {
            VAR_7++;
        }
        else if(FUNC_1(VAR_14 == VAR_4)) {
            if(!VAR_11 && !VAR_12) {
                if (VAR_7 != VAR_9) {

                    *VAR_7 = '\0';
                    FUNC_3(VAR_6, VAR_9);
                    (*VAR_13)++;
                    VAR_9 = ++VAR_7;
                }
                else {


                    VAR_9 = ++VAR_7;
                }
            }
            else {

                VAR_7++;
            }
        }
        else if(FUNC_1(VAR_14 == VAR_1)) {


            *VAR_7 = '\0';
            FUNC_3(VAR_6, VAR_9);
            (*VAR_13)++;
            VAR_9 = ++VAR_7;



            VAR_13 = FUNC_2(VAR_6);
        }
        else if(FUNC_1(VAR_14 == VAR_3)) {
            if(FUNC_4(!VAR_11 && VAR_7 == VAR_9)) {

                VAR_11 = *VAR_7;
                VAR_9 = ++VAR_7;
            }
            else if(FUNC_4(VAR_11 && VAR_11 == *VAR_7)) {

                VAR_11 = 0;

                *VAR_7 = '\0';
                FUNC_3(VAR_6, VAR_9);
                (*VAR_13)++;
                VAR_9 = ++VAR_7;
            }
            else
                VAR_7++;
        }
        else if(FUNC_1(VAR_14 == VAR_2)) {
            if(VAR_7 == VAR_9) {
                VAR_12++;
                VAR_9 = ++VAR_7;
            }
            else if(VAR_12) {
                VAR_12++;
                VAR_7++;
            }
            else
                VAR_7++;
        }
        else if(FUNC_1(VAR_14 == VAR_0)) {
            if(VAR_12) {
                VAR_12--;

                if(!VAR_12) {
                    *VAR_7 = '\0';
                    FUNC_3(VAR_6, VAR_9);
                    (*VAR_13)++;
                    VAR_9 = ++VAR_7;
                }
                else
                    VAR_7++;
            }
            else
                VAR_7++;
        }
        else
            FUNC_0("Internal Error: procfile_readall() does not handle all the cases.");
    }

    if(FUNC_1(VAR_7 > VAR_9 && VAR_9 < VAR_8)) {

        if(FUNC_4(VAR_6->len >= VAR_6->size)) {

            VAR_7 = &VAR_6->data[VAR_6->size - 1];
        }

        *VAR_7 = '\0';
        FUNC_3(VAR_6, VAR_9);
        (*VAR_13)++;

    }
}
