
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int block128_f ;


 scalar_t__ FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,size_t) ;
 size_t FUNC_2 (void*,unsigned char*,unsigned char*,unsigned char const*,size_t,int ) ;
 unsigned char* VAR_0 ;

size_t FUNC_3(void *VAR_1, const unsigned char *VAR_2,
                         unsigned char *VAR_3, const unsigned char *VAR_4,
                         size_t VAR_5, block128_f VAR_6)
{
    size_t VAR_7;
    unsigned char VAR_8[8];

    VAR_7 = FUNC_2(VAR_1, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_7 == 0)
        return 0;

    if (!VAR_2)
        VAR_2 = VAR_0;
    if (FUNC_0(VAR_8, VAR_2, 8)) {
        FUNC_1(VAR_3, VAR_7);
        return 0;
    }
    return VAR_7;
}
