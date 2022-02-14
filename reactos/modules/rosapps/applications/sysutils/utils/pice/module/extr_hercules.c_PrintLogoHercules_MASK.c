
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PUCHAR ;
typedef int LONG ;
typedef int BOOLEAN ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(BOOLEAN VAR_2)
{
    LONG VAR_3,VAR_4;
    PUCHAR VAR_5;

    VAR_5=(PUCHAR)VAR_1;
    for(VAR_4=0;VAR_4<24;VAR_4++)
    {
        for(VAR_3=0;VAR_3<8;VAR_3++)
        {
         VAR_5[ ( 0x2000* (( VAR_4 + 8 ) & 0x3) )+
          ( 90* ( (VAR_4 + 8 ) >> 2) )+
          (81+VAR_3)] = VAR_0[VAR_4*8+VAR_3];
        }
    }
}
