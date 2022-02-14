
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char CHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*,char*,int) ;

void FUNC_5(CHAR **VAR_0, CHAR *VAR_1, int VAR_2)
{
    CHAR *VAR_3 = *VAR_0;
    int VAR_4 = 0;
    VAR_1[0] = 0;

    if (!VAR_3[0]) {
        return;
    }
    if (VAR_3[0] == '"') {
        VAR_3++;
        (*VAR_0)++;
        while (VAR_3[0] != '"') {
            if (!VAR_3[0]) {
                FUNC_1(FUNC_0("Unexpected end of file name!\n"));
                FUNC_2(0);

            }
            VAR_3++;
            VAR_4++;
        }
    } else {
        while (VAR_3[0] && !FUNC_3(VAR_3[0])) {
            VAR_3++;
            VAR_4++;
        }
    }
    FUNC_4(VAR_1, *VAR_0, VAR_4 * sizeof((*VAR_0)[0]));

    if (VAR_1[VAR_4 - 1] == '\\') {
        VAR_1[VAR_4 - 1] = '\0';
    } else {
        VAR_1[VAR_4] = '\0';
    }
    if (VAR_3[0]) {
        VAR_3++;
        VAR_4++;
    }
    while (VAR_3[0] && FUNC_3(VAR_3[0])) {
        VAR_3++;
        VAR_4++;
    }
    (*VAR_0) += VAR_4;
}
