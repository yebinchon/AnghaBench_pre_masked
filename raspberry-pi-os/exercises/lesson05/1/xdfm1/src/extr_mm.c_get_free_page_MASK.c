
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

unsigned long FUNC_0()
{
 for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++){
  if (VAR_3[VAR_4] == 0){
   VAR_3[VAR_4] = 1;
   return VAR_0 + VAR_4*VAR_1;
  }
 }
 return 0;
}
