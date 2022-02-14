
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (int,int,int,int,int,int,int) ;

void FUNC_1(const void *VAR_0, unsigned int VAR_1, const unsigned char *VAR_2, unsigned char *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
    UINT32 *VAR_6 = (UINT32*)VAR_0;
    UINT32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    UINT8 VAR_12[8];
    unsigned int VAR_13;

    FUNC_0(VAR_6[VAR_1*2], VAR_6[VAR_1*2+1], VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

    *((UINT32*)(VAR_12+0)) = VAR_7;
    *((UINT32*)(VAR_12+4)) = VAR_8;
    for(VAR_13=0; VAR_13<VAR_5; VAR_13++)
        VAR_3[VAR_13] = VAR_2[VAR_13] ^ VAR_12[VAR_4+VAR_13];
}
