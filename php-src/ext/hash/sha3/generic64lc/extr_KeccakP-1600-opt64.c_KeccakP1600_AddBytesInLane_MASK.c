
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UINT64 ;


 int FUNC_0 (unsigned int*,unsigned char const*,unsigned int) ;

void FUNC_1(void *VAR_0, unsigned int VAR_1, const unsigned char *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{

    UINT64 VAR_5;
    if (VAR_4 == 0)
        return;
    if (VAR_4 == 1)
        VAR_5 = VAR_2[0];
    else {
        VAR_5 = 0;
        FUNC_0(&VAR_5, VAR_2, VAR_4);
    }
    VAR_5 <<= VAR_3*8;






    ((UINT64*)VAR_0)[VAR_1] ^= VAR_5;
}
