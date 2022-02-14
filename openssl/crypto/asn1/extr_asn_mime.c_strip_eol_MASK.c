
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(char *VAR_1, int *VAR_2, int VAR_3)
{
    int VAR_4 = *VAR_2;
    char *VAR_5, VAR_6;
    int VAR_7 = 0;

    for (VAR_5 = VAR_1 + VAR_4 - 1; VAR_4 > 0; VAR_4--, VAR_5--) {
        VAR_6 = *VAR_5;
        if (VAR_6 == '\n') {
            VAR_7 = 1;
        } else if (VAR_7 && VAR_3 & VAR_0 && VAR_6 == 32) {

            continue;
        } else if (VAR_6 != '\r') {
            break;
        }
    }
    *VAR_2 = VAR_4;
    return VAR_7;
}
