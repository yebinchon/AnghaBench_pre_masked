
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(char **VAR_0, const char *VAR_1, const char *VAR_2)
{
    char *VAR_3 = *VAR_0;
    int VAR_4 = 0;

    while (1) {
        char VAR_5 = *VAR_3;
        if (FUNC_1(VAR_3, VAR_2)) {
            VAR_4 = -1;
            break;
        }
        else if (*VAR_1 == '\0') {
            if (VAR_3 != *VAR_0) {

                VAR_4 = 0;
                break;
            }
            else {

                VAR_4 = -2;
                break;
            }
        }
        else if (*VAR_1 == ' ') {

            if (!FUNC_0(VAR_5)) {
                VAR_1++;
                continue;
            }
        }
        else if (*VAR_1 != VAR_5) {
            VAR_4 = -2;
            break;
        }
        else {
            VAR_1++;
        }
        VAR_3++;
    }
    *VAR_0 = VAR_3;
    return VAR_4;
}
