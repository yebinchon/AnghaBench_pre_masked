
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,unsigned int) ;
 int FUNC_2 (unsigned char*,int ,unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_2, unsigned char *VAR_3,
                               unsigned int *VAR_4)
{
    unsigned int VAR_5 = 0;
    do {
        if (FUNC_0(VAR_3, *VAR_4) <= 0)
            return 0;







        FUNC_2(VAR_3, VAR_1,
               (FUNC_3(VAR_1) < *VAR_4) ?
               FUNC_3(VAR_1) : *VAR_4);
    }
    while (FUNC_1(VAR_2, VAR_3, *VAR_4) &&
           (++VAR_5 < VAR_0));
    if (VAR_5 >= VAR_0)
        return 0;
    return 1;
}
