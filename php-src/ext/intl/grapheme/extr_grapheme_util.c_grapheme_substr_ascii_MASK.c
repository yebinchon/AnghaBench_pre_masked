
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32_t ;


 size_t VAR_0 ;

void FUNC_0(char *VAR_1, size_t VAR_2, int32_t VAR_3, int32_t VAR_4, char **VAR_5, int32_t *VAR_6)
{
 int32_t VAR_7 = (int32_t)VAR_2;
    *VAR_5 = ((void*)0);

    if(VAR_2 > VAR_0) {

     return;
    }

    if ((VAR_4 < 0 && -VAR_4 > VAR_7)) {
        return;
    } else if (VAR_4 > 0 && VAR_4 > VAR_7) {
        VAR_4 = VAR_7;
    }

    if (VAR_3 > VAR_7 || (VAR_3 < 0 && -VAR_3 > VAR_7)) {
        return;
    }

    if (VAR_4 < 0 && VAR_7 < VAR_3 - VAR_4) {
        return;
    }




    if (VAR_3 < 0) {
        VAR_3 = VAR_7 + VAR_3;
        if (VAR_3 < 0) {
            VAR_3 = 0;
        }
    }





    if (VAR_4 < 0) {
        VAR_4 = (VAR_7 - VAR_3) + VAR_4;
        if (VAR_4 < 0) {
            VAR_4 = 0;
        }
    }

    if (VAR_3 >= VAR_7) {
        return;
    }

    if ((VAR_3 + VAR_4) > VAR_7) {
        VAR_4 = VAR_2 - VAR_3;
    }

    *VAR_5 = VAR_1 + VAR_3;
    *VAR_6 = VAR_4;

    return;
}
