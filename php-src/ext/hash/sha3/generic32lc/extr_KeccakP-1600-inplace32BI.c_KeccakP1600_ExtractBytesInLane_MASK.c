
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (int,int,int,int,int,int,int) ;
 int FUNC_1 (unsigned char*,int*,unsigned int) ;

void FUNC_2(const void *VAR_0, unsigned int VAR_1, unsigned char *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
    UINT32 *VAR_5 = (UINT32*)VAR_0;
    UINT32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    UINT8 VAR_11[8];

    FUNC_0(VAR_5[VAR_1*2], VAR_5[VAR_1*2+1], VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    *((UINT32*)(VAR_11+0)) = VAR_6;
    *((UINT32*)(VAR_11+4)) = VAR_7;
    FUNC_1(VAR_2, VAR_11+VAR_3, VAR_4);
}
