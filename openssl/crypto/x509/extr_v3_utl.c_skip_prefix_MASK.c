
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(const unsigned char **VAR_2, size_t *VAR_3,
                        size_t VAR_4,
                        unsigned int VAR_5)
{
    const unsigned char *VAR_6 = *VAR_2;
    size_t VAR_7 = *VAR_3;







    if ((VAR_5 & VAR_1) == 0)
        return;

    while (VAR_7 > VAR_4 && *VAR_6) {
        if ((VAR_5 & VAR_0) &&
            *VAR_6 == '.')
            break;
        ++VAR_6;
        --VAR_7;
    }


    if (VAR_7 == VAR_4) {
        *VAR_2 = VAR_6;
        *VAR_3 = VAR_7;
    }
}
