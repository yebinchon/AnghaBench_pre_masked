
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (int*,unsigned char const*,unsigned int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int,int,int,int,int,int,int) ;

void FUNC_3(void *VAR_0, unsigned int VAR_1, const unsigned char *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
    UINT8 VAR_5[8];
    UINT32 VAR_6, VAR_7;
    UINT32 VAR_8, VAR_9, VAR_10;
    UINT32 *VAR_11 = (UINT32*)VAR_0;

    FUNC_1(VAR_5, 0, 8);
    FUNC_0(VAR_5+VAR_3, VAR_2, VAR_4);

    VAR_6 = *((UINT32*)(VAR_5+0));
    VAR_7 = *((UINT32*)(VAR_5+4));
    FUNC_2(VAR_6, VAR_7, VAR_11[VAR_1*2+0], VAR_11[VAR_1*2+1], VAR_8, VAR_9, VAR_10);
}
