
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dictEntry ;
typedef int dict ;


 int FUNC_0 (int *,int **,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (int **,int,int,int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int **) ;
 int ** FUNC_6 (int) ;

void FUNC_7(dict *VAR_1, int VAR_2, int *VAR_3, int *VAR_4) {
    int VAR_5;

    dictEntry **VAR_6 = FUNC_6(sizeof(dictEntry*)*FUNC_1(VAR_1));
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        int VAR_7 = FUNC_4() % (FUNC_1(VAR_1)+1);
        int VAR_8 = FUNC_0(VAR_1, VAR_6, VAR_7);
        int VAR_9 = 0;

        FUNC_3(VAR_6,VAR_8,sizeof(dictEntry*),VAR_0);
        if (VAR_8 > 1) {
            int VAR_10;
            for (VAR_10 = 0; VAR_10 < VAR_8-1; VAR_10++) {
                if (VAR_6[VAR_10] == VAR_6[VAR_10+1]) VAR_9++;
            }
        }

        if (VAR_7 == VAR_8 && VAR_9 == 0) {
            (*VAR_3)++;
        } else {
            (*VAR_4)++;
            FUNC_2("Requested, returned, duplicated: %d %d %d\n",
                VAR_7, VAR_8, VAR_9);
        }
    }
    FUNC_5(VAR_6);
}
