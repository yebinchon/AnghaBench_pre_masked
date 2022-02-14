
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char,int) ;
 int FUNC_2 (char const*,int*) ;
 char* FUNC_3 (char const*,int) ;

int FUNC_4(const char *VAR_3) {
        const char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
        int VAR_8, VAR_9, VAR_10;

        VAR_5 = FUNC_0(VAR_3, "‰");
        if (VAR_5) {
                VAR_7 = FUNC_3(VAR_3, VAR_5 - VAR_3);
                VAR_8 = FUNC_2(VAR_7, &VAR_10);
                if (VAR_8 < 0)
                        return VAR_8;
                if (VAR_10 < 0)
                        return -VAR_1;
        } else {
                VAR_4 = FUNC_0(VAR_3, "%");
                if (!VAR_4)
                        return -VAR_0;

                VAR_6 = FUNC_1(VAR_3, '.', VAR_4 - VAR_3);
                if (VAR_6) {
                        if (VAR_6 + 2 != VAR_4)
                                return -VAR_0;
                        if (VAR_6[1] < '0' || VAR_6[1] > '9')
                                return -VAR_0;
                        VAR_9 = VAR_6[1] - '0';
                        VAR_7 = FUNC_3(VAR_3, VAR_6 - VAR_3);
                } else {
                        VAR_9 = 0;
                        VAR_7 = FUNC_3(VAR_3, VAR_4 - VAR_3);
                }
                VAR_8 = FUNC_2(VAR_7, &VAR_10);
                if (VAR_8 < 0)
                        return VAR_8;
                if (VAR_10 < 0)
                        return -VAR_1;
                if (VAR_10 > (VAR_2 - VAR_9) / 10)
                        return -VAR_1;

                VAR_10 = VAR_10 * 10 + VAR_9;
        }

        return VAR_10;
}
