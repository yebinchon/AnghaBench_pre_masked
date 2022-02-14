
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_CMP_severity ;


 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;
 long FUNC_3 (char const*,char**,int) ;

const char *FUNC_4(const char *VAR_0,
                 OSSL_CMP_severity *VAR_1, char **VAR_2, char **VAR_3, int *VAR_4)
{
    const char *VAR_5 = VAR_0;
    const char *VAR_6 = VAR_0 == ((void*)0) ? ((void*)0) : FUNC_2(VAR_0, ':');
    const char *VAR_7 = VAR_0;
    const char *VAR_8 = VAR_0;

    *VAR_1 = -1;
    *VAR_2 = ((void*)0);
    *VAR_3 = ((void*)0);
    *VAR_4 = 0;

    if (VAR_6 != ((void*)0)) {
        const char *VAR_9 = FUNC_2(++VAR_6, ':');

        if ((*VAR_1 = FUNC_1(VAR_0)) < 0 && VAR_9 != ((void*)0)) {

            char *VAR_10 = (char *)VAR_7;
            const long VAR_11 = FUNC_3(++VAR_9, &VAR_10, 10);

            VAR_7 = VAR_10;
            if (VAR_7 > VAR_9 && *(VAR_7++) == ':') {
                if ((*VAR_1 = FUNC_1(VAR_7)) >= 0) {
                    *VAR_2 = FUNC_0(VAR_5, VAR_6 - 1 - VAR_5);
                    *VAR_3 = FUNC_0(VAR_6, VAR_9 - 1 - VAR_6);

                    *VAR_4 = (int)VAR_11;
                    VAR_8 = FUNC_2(VAR_7, ':') + 1;
                    if (*VAR_8 == ' ')
                        VAR_8++;
                }
            }
        }
    }
    return VAR_8;
}
