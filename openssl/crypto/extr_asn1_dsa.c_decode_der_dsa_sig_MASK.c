
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;
typedef int BIGNUM ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned char const*,size_t) ;
 unsigned char const* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

size_t FUNC_6(BIGNUM *VAR_1, BIGNUM *VAR_2, const unsigned char **VAR_3,
                          size_t VAR_4)
{
    size_t VAR_5;
    PACKET VAR_6, VAR_7;
    unsigned int VAR_8;

    if (!FUNC_0(&VAR_6, *VAR_3, VAR_4)
            || !FUNC_2(&VAR_6, &VAR_8)
            || VAR_8 != VAR_0
            || !FUNC_5(&VAR_6, &VAR_7)
            || !FUNC_4(&VAR_7, VAR_1)
            || !FUNC_4(&VAR_7, VAR_2)
            || FUNC_3(&VAR_7) != 0)
        return 0;

    VAR_5 = FUNC_1(&VAR_6) - *VAR_3;
    *VAR_3 += VAR_5;
    return VAR_5;
}
