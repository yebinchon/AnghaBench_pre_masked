
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;

int FUNC_2(unsigned char *VAR_2, size_t *VAR_3, size_t VAR_4,
                 const unsigned char **VAR_5, size_t *VAR_6)
{
    if (*VAR_6 == 0)
        return 1;

    if (*VAR_3 + *VAR_6 > VAR_4) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    FUNC_1(VAR_2 + *VAR_3, *VAR_5, *VAR_6);
    *VAR_3 += *VAR_6;
    *VAR_6 = 0;

    return 1;
}
