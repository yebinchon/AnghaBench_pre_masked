
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef size_t ULONG ;
typedef int* PUSHORT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

void FUNC_0(ULONG VAR_3)
{
    ULONG VAR_4;
    PUSHORT VAR_5 = (PUSHORT)VAR_2;
    USHORT VAR_6;

    if(VAR_3 < VAR_0)
    {
        VAR_6 = VAR_5[VAR_3*VAR_1]>>8;
        VAR_6 = ((VAR_6 & 0x07)<<4) | ((VAR_6 & 0xF0)>>4);
        VAR_6 <<= 8;
        for(VAR_4=0;VAR_4<VAR_1;VAR_4++)
            VAR_5[VAR_3*VAR_1 + VAR_4] = (VAR_5[VAR_3*VAR_1 + VAR_4] & 0x00FF) | VAR_6;
    }
}
