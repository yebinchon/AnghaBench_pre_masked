
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SplitFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const) ;
 size_t FUNC_2 (char const*,char const*) ;
 size_t FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;

const char* FUNC_5(const char **VAR_2, size_t *VAR_3, const char *VAR_4, SplitFlags VAR_5) {
        const char *VAR_6;

        VAR_6 = *VAR_2;

        if (!*VAR_6) {
                FUNC_0(**VAR_2 == '\0');
                return ((void*)0);
        }

        VAR_6 += FUNC_4(VAR_6, VAR_4);
        if (!*VAR_6) {
                *VAR_2 = VAR_6;
                return ((void*)0);
        }

        if (VAR_5 & VAR_0 && FUNC_1("\'\"", *VAR_6)) {
                char VAR_7[2] = {*VAR_6, '\0'};

                *VAR_3 = FUNC_3(VAR_6 + 1, VAR_7);
                if (VAR_6[*VAR_3 + 1] == '\0' || VAR_6[*VAR_3 + 1] != VAR_7[0] ||
                    (VAR_6[*VAR_3 + 2] && !FUNC_1(VAR_4, VAR_6[*VAR_3 + 2]))) {

                        if (VAR_5 & VAR_1) {
                                *VAR_2 = VAR_6 + *VAR_3 + 1 + (VAR_6[*VAR_3 + 1] != '\0');
                                return VAR_6 + 1;
                        }
                        *VAR_2 = VAR_6;
                        return ((void*)0);
                }
                *VAR_2 = VAR_6++ + *VAR_3 + 2;
        } else if (VAR_5 & VAR_0) {
                *VAR_3 = FUNC_3(VAR_6, VAR_4);
                if (VAR_6[*VAR_3] && !FUNC_1(VAR_4, VAR_6[*VAR_3]) && !(VAR_5 & VAR_1)) {

                        *VAR_2 = VAR_6;
                        return ((void*)0);
                }
                *VAR_2 = VAR_6 + *VAR_3;
        } else {
                *VAR_3 = FUNC_2(VAR_6, VAR_4);
                *VAR_2 = VAR_6 + *VAR_3;
        }

        return VAR_6;
}
