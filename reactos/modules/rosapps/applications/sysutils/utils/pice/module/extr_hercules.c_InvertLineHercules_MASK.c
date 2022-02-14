
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * PUSHORT ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

void FUNC_0(ULONG VAR_2)
{
    ULONG VAR_3,VAR_4;
    ULONG VAR_5 = VAR_2<<3;
 PUSHORT VAR_6;



 for(VAR_4=0;VAR_4<8;VAR_4++)
 {
  VAR_6=(PUSHORT)( VAR_1[VAR_5&3] + (90*(VAR_5>>2)) );
  for(VAR_3=0;VAR_3<(VAR_0>>1);VAR_3++)
  {
   VAR_6[VAR_3]=~VAR_6[VAR_3];
  }
  VAR_5++;
 }


}
