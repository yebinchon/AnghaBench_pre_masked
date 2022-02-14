
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const,char*) ;
 int FUNC_2 (char const*,char const) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_2, bool VAR_3, char *VAR_4) {
        const char *VAR_5;
        bool VAR_6 = 0;

        FUNC_0(VAR_2);
        FUNC_0(VAR_4);






        VAR_5 = VAR_3 ? VAR_0 : VAR_1;

        for (; *VAR_2; VAR_2++)
                if (*VAR_2 == '/') {
                        *(VAR_4++) = '-';
                        VAR_6 = 1;
                } else if (!FUNC_2(VAR_5, *VAR_2)) {
                        VAR_4 = FUNC_1(*VAR_2, VAR_4);
                        VAR_6 = 1;
                } else
                        *(VAR_4++) = *VAR_2;
        *VAR_4 = 0;

        return VAR_6;
}
