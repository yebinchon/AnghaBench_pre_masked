
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* path_translated; } ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 TYPE_1__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (char*,size_t) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*,size_t) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int VAR_4 ;
 char* FUNC_11 (char*,int ) ;
 size_t FUNC_12 (char*) ;
 size_t FUNC_13 (char*,size_t) ;
 int FUNC_14 (char*,size_t) ;

__attribute__((used)) static int FUNC_15()
{
    char *VAR_5, *VAR_6;
    size_t VAR_7, VAR_8;


    if (!FUNC_1(VAR_4).path_translated) {
            return VAR_1;
    }

    if (FUNC_10()) {
        VAR_6 = FUNC_11("SERVER_NAME", 0);

        if (VAR_6) {
                VAR_8 = FUNC_12(VAR_6);
                VAR_6 = FUNC_4(VAR_6, VAR_8);
                FUNC_14(VAR_6, VAR_8);
                FUNC_8(VAR_6, VAR_8);
                FUNC_2(VAR_6);
        }
    }

    if (FUNC_9()) {

        VAR_7 = FUNC_12(FUNC_1(VAR_4).path_translated);


        if (!FUNC_0(FUNC_1(VAR_4).path_translated[VAR_7])) {
            VAR_5 = FUNC_3(VAR_7 + 2);
            FUNC_6(VAR_5, FUNC_1(VAR_4).path_translated, VAR_7 + 1);
            VAR_7 = FUNC_13(VAR_5, VAR_7);
            VAR_5[VAR_7++] = VAR_0;
        } else {
            VAR_5 = FUNC_4(FUNC_1(VAR_4).path_translated, VAR_7);
            VAR_7 = FUNC_13(VAR_5, VAR_7);
        }
        VAR_5[VAR_7] = 0;


        FUNC_7(VAR_5, VAR_7);

        FUNC_2(VAR_5);
    }

    if (VAR_3 && FUNC_5() == VAR_1) {
        return VAR_1;
    }
    return VAR_2;
}
