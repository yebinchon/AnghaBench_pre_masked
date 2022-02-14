
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const,char,char) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, const char *VAR_1, const char *VAR_2, bool VAR_3) {
        FUNC_1(VAR_2);

        for (; *VAR_1; VAR_1++) {
                if (VAR_3 && FUNC_0(*VAR_1, '\n', '\t')) {
                        *(VAR_0++) = '\\';
                        *(VAR_0++) = *VAR_1 == '\n' ? 'n' : 't';
                        continue;
                }

                if (*VAR_1 == '\\' || FUNC_2(VAR_2, *VAR_1))
                        *(VAR_0++) = '\\';

                *(VAR_0++) = *VAR_1;
        }

        return VAR_0;
}
