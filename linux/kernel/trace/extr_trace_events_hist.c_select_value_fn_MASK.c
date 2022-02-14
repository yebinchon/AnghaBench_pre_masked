
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * hist_field_fn_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static hist_field_fn_t FUNC_0(int VAR_8, int VAR_9)
{
 hist_field_fn_t VAR_10 = ((void*)0);

 switch (VAR_8) {
 case 8:
  if (VAR_9)
   VAR_10 = VAR_2;
  else
   VAR_10 = VAR_6;
  break;
 case 4:
  if (VAR_9)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_5;
  break;
 case 2:
  if (VAR_9)
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_4;
  break;
 case 1:
  if (VAR_9)
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_7;
  break;
 }

 return VAR_10;
}
