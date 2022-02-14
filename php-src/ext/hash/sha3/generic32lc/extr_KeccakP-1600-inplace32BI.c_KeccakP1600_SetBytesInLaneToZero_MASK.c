
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int,int,int,int,int,int,int) ;

void FUNC_2(void *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
    UINT8 VAR_4[8];
    UINT32 VAR_5, VAR_6;
    UINT32 VAR_7, VAR_8, VAR_9;
    UINT32 *VAR_10 = (UINT32*)VAR_0;

    FUNC_0(VAR_4, 0xFF, VAR_2);
    FUNC_0(VAR_4+VAR_2, 0x00, VAR_3);
    FUNC_0(VAR_4+VAR_2+VAR_3, 0xFF, 8-VAR_2-VAR_3);

    VAR_5 = *((UINT32*)(VAR_4+0));
    VAR_6 = *((UINT32*)(VAR_4+4));
    FUNC_1(VAR_5, VAR_6, VAR_10[VAR_1*2+0], VAR_10[VAR_1*2+1], VAR_7, VAR_8, VAR_9);
}
