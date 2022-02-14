
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_1, unsigned char *VAR_2,
                                   unsigned int *VAR_3)
{
    unsigned int VAR_4 = 0;
    do
        if (FUNC_0(VAR_2, *VAR_3) <= 0)
            return 0;
    while (FUNC_1(VAR_1, VAR_2, *VAR_3) &&
           (++VAR_4 < VAR_0)) ;
    if (VAR_4 < VAR_0)
        return 1;
    return 0;
}
