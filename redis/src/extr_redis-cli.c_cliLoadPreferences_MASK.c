
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sds ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int) ;
 int ** FUNC_7 (char*,int*) ;

void FUNC_8(void) {
    sds VAR_2 = FUNC_4(VAR_1,VAR_0);
    if (VAR_2 == ((void*)0)) return;
    FILE *VAR_3 = FUNC_3(VAR_2,"r");
    char VAR_4[1024];

    if (VAR_3) {
        while(FUNC_2(VAR_4,sizeof(VAR_4),VAR_3) != ((void*)0)) {
            sds *VAR_5;
            int VAR_6;

            VAR_5 = FUNC_7(VAR_4,&VAR_6);
            if (VAR_6 > 0) FUNC_0(VAR_5,VAR_6,0);
            FUNC_6(VAR_5,VAR_6);
        }
        FUNC_1(VAR_3);
    }
    FUNC_5(VAR_2);
}
