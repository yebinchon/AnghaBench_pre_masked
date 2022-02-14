
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int * PUCHAR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * VAR_1 ;
 int FUNC_1 () ;

void FUNC_2(UCHAR* VAR_2)
{
 PUCHAR VAR_3 = VAR_1;
 int VAR_4,VAR_5;
 FUNC_0();

 for (VAR_4=0; VAR_4 < VAR_0; VAR_4++)
  for (VAR_5=0; VAR_5 < 16; VAR_5++)
    VAR_2[VAR_4*16+VAR_5] = VAR_3[VAR_4*32+VAR_5];

 FUNC_1();
}
