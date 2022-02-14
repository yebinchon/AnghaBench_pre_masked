
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int * sds ;


 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (int **) ;
 int ** FUNC_2 (int) ;
 int ** FUNC_3 (int **,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,int) ;

sds *FUNC_6(const char *VAR_0, ssize_t VAR_1, const char *VAR_2, int VAR_3, int *VAR_4) {
    int VAR_5 = 0, VAR_6 = 5;
    long VAR_7 = 0, VAR_8;
    sds *VAR_9;

    if (VAR_3 < 1 || VAR_1 < 0) return ((void*)0);

    VAR_9 = FUNC_2(sizeof(sds)*VAR_6);
    if (VAR_9 == ((void*)0)) return ((void*)0);

    if (VAR_1 == 0) {
        *VAR_4 = 0;
        return VAR_9;
    }
    for (VAR_8 = 0; VAR_8 < (VAR_1-(VAR_3-1)); VAR_8++) {

        if (VAR_6 < VAR_5+2) {
            sds *VAR_10;

            VAR_6 *= 2;
            VAR_10 = FUNC_3(VAR_9,sizeof(sds)*VAR_6);
            if (VAR_10 == ((void*)0)) goto cleanup;
            VAR_9 = VAR_10;
        }

        if ((VAR_3 == 1 && *(VAR_0+VAR_8) == VAR_2[0]) || (FUNC_0(VAR_0+VAR_8,VAR_2,VAR_3) == 0)) {
            VAR_9[VAR_5] = FUNC_5(VAR_0+VAR_7,VAR_8-VAR_7);
            if (VAR_9[VAR_5] == ((void*)0)) goto cleanup;
            VAR_5++;
            VAR_7 = VAR_8+VAR_3;
            VAR_8 = VAR_8+VAR_3-1;
        }
    }

    VAR_9[VAR_5] = FUNC_5(VAR_0+VAR_7,VAR_1-VAR_7);
    if (VAR_9[VAR_5] == ((void*)0)) goto cleanup;
    VAR_5++;
    *VAR_4 = VAR_5;
    return VAR_9;

cleanup:
    {
        int VAR_11;
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) FUNC_4(VAR_9[VAR_11]);
        FUNC_1(VAR_9);
        *VAR_4 = 0;
        return ((void*)0);
    }
}
