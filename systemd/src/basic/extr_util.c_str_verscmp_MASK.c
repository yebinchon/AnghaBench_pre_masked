
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const*,char const*) ;

int FUNC_4(const char *VAR_0, const char *VAR_1) {
        const char *VAR_2, *VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = VAR_0;
        VAR_3 = VAR_1;

        while (*VAR_0 || *VAR_1) {
                int VAR_4;

                while ((*VAR_0 && !FUNC_2(*VAR_0)) || (*VAR_1 && !FUNC_2(*VAR_1))) {
                        int VAR_5;

                        VAR_5 = FUNC_1(*VAR_0) - FUNC_1(*VAR_1);
                        if (VAR_5 != 0)
                                return VAR_5;
                        VAR_0++;
                        VAR_1++;
                }

                while (*VAR_0 == '0')
                        VAR_0++;
                while (*VAR_1 == '0')
                        VAR_1++;

                VAR_4 = 0;
                while (FUNC_2(*VAR_0) && FUNC_2(*VAR_1)) {
                        if (VAR_4 == 0)
                                VAR_4 = *VAR_0 - *VAR_1;
                        VAR_0++;
                        VAR_1++;
                }

                if (FUNC_2(*VAR_0))
                        return 1;
                if (FUNC_2(*VAR_1))
                        return -1;

                if (VAR_4 != 0)
                        return VAR_4;
        }

        return FUNC_3(VAR_2, VAR_3);
}
