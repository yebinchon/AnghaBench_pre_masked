
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;

size_t FUNC_2(unsigned char *VAR_0, size_t *VAR_1, size_t VAR_2,
                 const unsigned char **VAR_3, size_t *VAR_4)
{
    size_t VAR_5 = ~(VAR_2 - 1);

    FUNC_0(*VAR_1 <= VAR_2);
    FUNC_0(VAR_2 > 0 && (VAR_2 & (VAR_2 - 1)) == 0);

    if (*VAR_1 != VAR_2 && (*VAR_1 != 0 || *VAR_4 < VAR_2)) {
        size_t VAR_6 = VAR_2 - *VAR_1;

        if (*VAR_4 < VAR_6)
            VAR_6 = *VAR_4;
        FUNC_1(VAR_0 + *VAR_1, *VAR_3, VAR_6);
        *VAR_3 += VAR_6;
        *VAR_4 -= VAR_6;
        *VAR_1 += VAR_6;
    }

    return *VAR_4 & VAR_5;
}
