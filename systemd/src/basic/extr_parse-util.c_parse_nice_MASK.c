
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int*) ;

int FUNC_2(const char *VAR_1, int *VAR_2) {
        int VAR_3, VAR_4;

        VAR_4 = FUNC_1(VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        if (!FUNC_0(VAR_3))
                return -VAR_0;

        *VAR_2 = VAR_3;
        return 0;
}
