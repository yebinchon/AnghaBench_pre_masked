
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;


 int FUNC_0 (void*,unsigned int,int ,unsigned int) ;

void FUNC_1(void *VAR_0, unsigned int VAR_1)
{
    UINT32 *VAR_2 = (UINT32*)VAR_0;
    unsigned int VAR_3;

    for(VAR_3=0; VAR_3<VAR_1/8; VAR_3++) {
        VAR_2[VAR_3*2+0] = 0;
        VAR_2[VAR_3*2+1] = 0;
    }
    if (VAR_1%8 != 0)
        FUNC_0(VAR_0, VAR_1/8, 0, VAR_1%8);
}
