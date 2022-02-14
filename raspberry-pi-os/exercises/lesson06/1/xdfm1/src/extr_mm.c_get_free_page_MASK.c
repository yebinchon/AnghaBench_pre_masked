
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;

unsigned long FUNC_1()
{
 for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++){
  if (VAR_4[VAR_5] == 0){
   VAR_4[VAR_5] = 1;
   unsigned long VAR_6 = VAR_0 + VAR_5*VAR_1;
   FUNC_0(VAR_6 + VAR_3, VAR_1);
   return VAR_6;
  }
 }
 return 0;
}
