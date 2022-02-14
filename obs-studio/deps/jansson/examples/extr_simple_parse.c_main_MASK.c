
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char*,int) ;
 int VAR_1 ;

int FUNC_6(int VAR_2, char *VAR_3[]) {
    char VAR_4[VAR_0];

    if (VAR_2 != 1) {
        FUNC_1(VAR_1, "Usage: %s\n", VAR_3[0]);
        FUNC_0(-1);
    }

    while (FUNC_5(VAR_4, VAR_0) != (char *)((void*)0)) {


        json_t *VAR_5 = FUNC_3(VAR_4);

        if (VAR_5) {

            FUNC_4(VAR_5);
            FUNC_2(VAR_5);
        }
    }

    return 0;
}
