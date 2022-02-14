
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const UINT8 ;
typedef unsigned int UINT64 ;



void FUNC_0(const void *VAR_0, unsigned int VAR_1, const unsigned char *VAR_2, unsigned char *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
    UINT64 VAR_6 = ((UINT64*)VAR_0)[VAR_1];





    {
        unsigned int VAR_7;
        UINT64 VAR_8[1];
        VAR_8[0] = VAR_6;
        for(VAR_7=0; VAR_7<VAR_5; VAR_7++)
            VAR_3[VAR_7] = VAR_2[VAR_7] ^ ((UINT8*)VAR_8)[VAR_4+VAR_7];
    }
}
