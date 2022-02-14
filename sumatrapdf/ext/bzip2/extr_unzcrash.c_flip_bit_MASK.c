
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;


 int* VAR_0 ;

void FUNC_0 ( int VAR_1 )
{
   int VAR_2 = VAR_1 / 8;
   int VAR_3 = VAR_1 % 8;
   uchar VAR_4 = 1 << VAR_3;


   VAR_0[VAR_2] ^= VAR_4;
}
