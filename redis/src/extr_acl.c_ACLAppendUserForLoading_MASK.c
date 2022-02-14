
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
typedef int * sds ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int **) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int ** FUNC_7 (int) ;

int FUNC_8(sds *VAR_5, int VAR_6, int *VAR_7) {
    if (VAR_6 < 2 || FUNC_6(VAR_5[0],"user")) {
        if (VAR_7) *VAR_7 = 0;
        return VAR_0;
    }



    user *VAR_8 = FUNC_0();

    for (int VAR_9 = 2; VAR_9 < VAR_6; VAR_9++) {
        if (FUNC_2(VAR_8,VAR_5[VAR_9],FUNC_5(VAR_5[VAR_9])) == VAR_0) {
            if (VAR_4 != VAR_2) {
                FUNC_1(VAR_8);
                if (VAR_7) *VAR_7 = VAR_9;
                return VAR_0;
            }
        }
    }


    sds *VAR_10 = FUNC_7(sizeof(sds)*VAR_6);
    for (int VAR_11 = 1; VAR_11 < VAR_6; VAR_11++) VAR_10[VAR_11-1] = FUNC_4(VAR_5[VAR_11]);
    VAR_10[VAR_6-1] = ((void*)0);
    FUNC_3(VAR_3,VAR_10);
    FUNC_1(VAR_8);
    return VAR_1;
}
