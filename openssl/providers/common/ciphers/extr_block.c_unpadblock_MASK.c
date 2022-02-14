
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;

int FUNC_1(unsigned char *VAR_3, size_t *VAR_4, size_t VAR_5)
{
    size_t VAR_6, VAR_7;
    size_t VAR_8 = *VAR_4;

    if(VAR_8 != VAR_5) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }





    VAR_6 = VAR_3[VAR_5 - 1];
    if (VAR_6 == 0 || VAR_6 > VAR_5) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        if (VAR_3[--VAR_8] != VAR_6) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
    }
    *VAR_4 = VAR_8;
    return 1;
}
