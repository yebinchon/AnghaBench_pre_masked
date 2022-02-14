
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int* PUCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int* VAR_2 ;
 int FUNC_1 () ;

void FUNC_2(UCHAR* VAR_3,int VAR_4)
{
 PUCHAR VAR_5 = VAR_2;
 int VAR_6,VAR_7;
 FUNC_0();

 if(VAR_4)
 {





  for (VAR_6=0; VAR_6 < VAR_1; VAR_6++)
   for (VAR_7=0; VAR_7 < 16; VAR_7++)
     VAR_5[VAR_6*32+VAR_7] = VAR_3[VAR_6*VAR_0+(VAR_7/2)] << (VAR_7&1);

 }
 else
 {
  for (VAR_6=0; VAR_6 < VAR_1; VAR_6++)
   for (VAR_7=0; VAR_7 < 16; VAR_7++)
     VAR_5[VAR_6*32+VAR_7] = VAR_3[VAR_6*16+VAR_7];
 }

 FUNC_1();
}
