
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const,char,char) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const,char*) ;
 int FUNC_3 (int ,char const) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_1, char *VAR_2) {
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);


        if (*VAR_1 == '.') {
                VAR_2 = FUNC_2(*VAR_1, VAR_2);
                VAR_1++;
        }

        for (; *VAR_1; VAR_1++) {
                if (*VAR_1 == '/')
                        *(VAR_2++) = '-';
                else if (FUNC_0(*VAR_1, '-', '\\') || !FUNC_3(VAR_0, *VAR_1))
                        VAR_2 = FUNC_2(*VAR_1, VAR_2);
                else
                        *(VAR_2++) = *VAR_1;
        }

        return VAR_2;
}
