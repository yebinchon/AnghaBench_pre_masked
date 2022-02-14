
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * filter_pred_fn_t ;
typedef enum filter_op_ids { ____Placeholder_filter_op_ids } filter_op_ids ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 int ** VAR_8 ;
 int ** VAR_9 ;
 int ** VAR_10 ;
 int ** VAR_11 ;
 int ** VAR_12 ;
 int ** VAR_13 ;

__attribute__((used)) static filter_pred_fn_t FUNC_1(enum filter_op_ids VAR_14,
         int VAR_15, int VAR_16)
{
 filter_pred_fn_t VAR_17 = ((void*)0);
 int VAR_18 = -1;

 switch (VAR_14) {
 case 129:
 case 128:
  break;
 default:
  if (FUNC_0(VAR_14 < VAR_1))
   return ((void*)0);
  VAR_18 = VAR_14 - VAR_1;
  if (FUNC_0(VAR_18 > VAR_0))
   return ((void*)0);
 }

 switch (VAR_15) {
 case 8:
  if (VAR_18 < 0)
   VAR_17 = VAR_4;
  else if (VAR_16)
   VAR_17 = VAR_8[VAR_18];
  else
   VAR_17 = VAR_12[VAR_18];
  break;
 case 4:
  if (VAR_18 < 0)
   VAR_17 = VAR_3;
  else if (VAR_16)
   VAR_17 = VAR_7[VAR_18];
  else
   VAR_17 = VAR_11[VAR_18];
  break;
 case 2:
  if (VAR_18 < 0)
   VAR_17 = VAR_2;
  else if (VAR_16)
   VAR_17 = VAR_6[VAR_18];
  else
   VAR_17 = VAR_10[VAR_18];
  break;
 case 1:
  if (VAR_18 < 0)
   VAR_17 = VAR_5;
  else if (VAR_16)
   VAR_17 = VAR_9[VAR_18];
  else
   VAR_17 = VAR_13[VAR_18];
  break;
 }

 return VAR_17;
}
