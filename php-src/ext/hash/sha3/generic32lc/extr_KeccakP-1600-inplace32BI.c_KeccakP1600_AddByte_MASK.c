
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UINT32 ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

void FUNC_1(void *VAR_0, unsigned char VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3 = VAR_2/8;
    unsigned int VAR_4 = VAR_2%8;
    UINT32 VAR_5, VAR_6;
    UINT32 VAR_7, VAR_8, VAR_9;
    UINT32 *VAR_10 = (UINT32*)VAR_0;

    if (VAR_4 < 4) {
        VAR_5 = (UINT32)VAR_1 << (VAR_4*8);
        VAR_6 = 0;
    }
    else {
        VAR_5 = 0;
        VAR_6 = (UINT32)VAR_1 << ((VAR_4-4)*8);
    }
    FUNC_0(VAR_5, VAR_6, VAR_10[VAR_3*2+0], VAR_10[VAR_3*2+1], VAR_7, VAR_8, VAR_9);
}
