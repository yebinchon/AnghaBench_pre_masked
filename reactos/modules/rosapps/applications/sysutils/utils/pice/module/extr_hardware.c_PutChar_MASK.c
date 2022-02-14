
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef int UCHAR ;
typedef scalar_t__* LPSTR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (size_t,size_t,scalar_t__) ;
 int FUNC_3 () ;

void FUNC_4(LPSTR VAR_0,ULONG VAR_1,ULONG VAR_2)
{
 ULONG VAR_3;



    FUNC_0();

 for(VAR_3=0;VAR_0[VAR_3]!=0;VAR_3++)
 {
  if((UCHAR)VAR_0[VAR_3]>=0x20 && (UCHAR)VAR_0[VAR_3]<0x80)
  {
   FUNC_2(VAR_1+VAR_3,VAR_2,VAR_0[VAR_3]);
  }
 }

    FUNC_1();

    FUNC_3();


}
