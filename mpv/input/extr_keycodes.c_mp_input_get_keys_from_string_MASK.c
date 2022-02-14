
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;

int FUNC_2(char *VAR_0, int VAR_1,
                                  int *VAR_2, int *VAR_3)
{
    char *VAR_4, *VAR_5;
    int VAR_6 = 0;

    VAR_5 = VAR_0;
    VAR_6 = 0;
    for (VAR_4 = FUNC_1(VAR_5, '-'); ; VAR_4 = FUNC_1(VAR_5, '-')) {
        if (VAR_4 && VAR_4[1] != '\0') {
            if (VAR_4[1] == '-')
                VAR_4 = &VAR_4[1];
            VAR_4[0] = '\0';
        }
        VAR_3[VAR_6] = FUNC_0(VAR_5);
        if (VAR_3[VAR_6] < 0)
            return 0;
        VAR_6++;
        if (VAR_4 && VAR_4[1] != '\0' && VAR_6 < VAR_1)
            VAR_5 = &VAR_4[1];
        else
            break;
    }
    *VAR_2 = VAR_6;
    return 1;
}
