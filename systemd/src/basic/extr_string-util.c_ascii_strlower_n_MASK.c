
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;

char *FUNC_1(char *VAR_0, size_t VAR_1) {
        size_t VAR_2;

        if (VAR_1 <= 0)
                return VAR_0;

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
                VAR_0[VAR_2] = FUNC_0(VAR_0[VAR_2]);

        return VAR_0;
}
