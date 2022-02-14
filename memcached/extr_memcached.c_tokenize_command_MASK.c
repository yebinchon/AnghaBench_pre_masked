
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* value; int length; } ;
typedef TYPE_1__ token_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_0, token_t *VAR_1, const size_t VAR_2) {
    char *VAR_3, *VAR_4;
    size_t VAR_5 = 0;
    size_t VAR_6 = FUNC_1(VAR_0);
    unsigned int VAR_7 = 0;

    FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0) && VAR_2 > 1);

    VAR_3 = VAR_4 = VAR_0;
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        if (*VAR_4 == ' ') {
            if (VAR_3 != VAR_4) {
                VAR_1[VAR_5].value = VAR_3;
                VAR_1[VAR_5].length = VAR_4 - VAR_3;
                VAR_5++;
                *VAR_4 = '\0';
                if (VAR_5 == VAR_2 - 1) {
                    VAR_4++;
                    VAR_3 = VAR_4;
                    break;
                }
            }
            VAR_3 = VAR_4 + 1;
        }
        VAR_4++;
    }

    if (VAR_3 != VAR_4) {
        VAR_1[VAR_5].value = VAR_3;
        VAR_1[VAR_5].length = VAR_4 - VAR_3;
        VAR_5++;
    }





    VAR_1[VAR_5].value = *VAR_4 == '\0' ? ((void*)0) : VAR_4;
    VAR_1[VAR_5].length = 0;
    VAR_5++;

    return VAR_5;
}
