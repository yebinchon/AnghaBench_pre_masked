
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int * VAR_2 ;

void FUNC_9(char *VAR_3, char *VAR_4) {
    sds VAR_5 = FUNC_6();
    char VAR_6[VAR_0+1];


    if (VAR_3) {
        FILE *VAR_7;

        if (VAR_3[0] == '-' && VAR_3[1] == '\0') {
            VAR_7 = VAR_2;
        } else {
            if ((VAR_7 = FUNC_3(VAR_3,"r")) == ((void*)0)) {
                FUNC_8(VAR_1,
                    "Fatal error, can't open config file '%s'", VAR_3);
                FUNC_0(1);
            }
        }
        while(FUNC_2(VAR_6,VAR_0+1,VAR_7) != ((void*)0))
            VAR_5 = FUNC_5(VAR_5,VAR_6);
        if (VAR_7 != VAR_2) FUNC_1(VAR_7);
    }

    if (VAR_4) {
        VAR_5 = FUNC_5(VAR_5,"\n");
        VAR_5 = FUNC_5(VAR_5,VAR_4);
    }
    FUNC_4(VAR_5);
    FUNC_7(VAR_5);
}
