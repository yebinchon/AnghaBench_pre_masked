
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tracing_map_cmp_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

tracing_map_cmp_fn_t FUNC_0(int VAR_9,
      int VAR_10)
{
 tracing_map_cmp_fn_t VAR_11 = VAR_0;

 switch (VAR_9) {
 case 8:
  if (VAR_10)
   VAR_11 = VAR_3;
  else
   VAR_11 = VAR_7;
  break;
 case 4:
  if (VAR_10)
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_6;
  break;
 case 2:
  if (VAR_10)
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_5;
  break;
 case 1:
  if (VAR_10)
   VAR_11 = VAR_4;
  else
   VAR_11 = VAR_8;
  break;
 }

 return VAR_11;
}
