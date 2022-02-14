
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int* PUSHORT ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__* VAR_1 ;

void FUNC_2(ULONG VAR_2)
{
 USHORT VAR_3;
    ULONG VAR_4,VAR_5;
    ULONG VAR_6 = (VAR_2<<3) ;
 PUSHORT VAR_7;
    USHORT VAR_8[]={0x8888,0x2222};
    USHORT VAR_9[]={0xaaaa,0x5555};
    PUSHORT VAR_10;

    FUNC_0();

    VAR_10 = (VAR_2&1)?VAR_8:VAR_9;

 for(VAR_5=0;VAR_5<8;VAR_5++,VAR_6++)
 {
  VAR_7=(PUSHORT)( VAR_1[VAR_6&3] + (90*(VAR_6>>2)) );
  for(VAR_4=0;VAR_4<(VAR_0/sizeof(USHORT));VAR_4++)
  {
   VAR_3 = VAR_7[VAR_4];

   VAR_7[VAR_4]=(VAR_7[VAR_4]^VAR_10[VAR_5&1])|VAR_3;
  }
 }

    FUNC_1();
}
