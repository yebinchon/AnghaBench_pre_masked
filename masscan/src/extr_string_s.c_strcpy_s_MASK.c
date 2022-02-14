
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;

errno_t FUNC_0(char *VAR_2, size_t VAR_3, const char *VAR_4)
{
    size_t VAR_5;

    if (VAR_3 == 0)
        return VAR_1;

    if (VAR_2 == ((void*)0))
        return VAR_0;

    if (VAR_4 == ((void*)0)) {
        VAR_2[0] = 0;
        return VAR_0;
    }

    for (VAR_5=0; VAR_4[VAR_5]; VAR_5++) {
        if (VAR_5 >= VAR_3) {
            VAR_2[0] = 0;
            return VAR_1;
        } else
            VAR_2[VAR_5] = VAR_4[VAR_5];
    }
    if (VAR_5 >= VAR_3) {
        VAR_2[0] = 0;
        return VAR_1;
    } else
        VAR_2[VAR_5] = VAR_4[VAR_5];

    return 0;
}
