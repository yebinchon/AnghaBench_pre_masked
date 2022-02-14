
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int curr_tok; void* number_value; int string_value; } ;
typedef void* RNumCalcValue ;
typedef TYPE_1__ RNumCalc ;
typedef int RNum ;


 void* FUNC_0 (void*,int) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*,void*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (void*,void*) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (int *,TYPE_1__*,char*) ;
 void* FUNC_7 (int *,TYPE_1__*,int) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static RNumCalcValue FUNC_11(RNum *VAR_0, RNumCalc *VAR_1, int VAR_2) {
 RNumCalcValue VAR_3 = {0};
 if (VAR_2) {
  FUNC_8 (VAR_0, VAR_1);
 }
 switch (VAR_1->curr_tok) {
 case 137:
  VAR_3 = VAR_1->number_value;
  FUNC_8 (VAR_0, VAR_1);
  return VAR_3;
 case 139:


  FUNC_10 (VAR_1->string_value);
  VAR_3 = FUNC_3 (FUNC_9 (VAR_0, VAR_1->string_value));
  FUNC_8 (VAR_0, VAR_1);
  if (VAR_1->curr_tok == 148) {
   VAR_3 = FUNC_7 (VAR_0, VAR_1, 1);
  }
  if (VAR_1->curr_tok == 144) {
   FUNC_0 (VAR_3, 1);
  }
  if (VAR_1->curr_tok == 147) {
   FUNC_5 (VAR_3, 1);
  }
  return VAR_3;
 case 138:
  FUNC_8 (VAR_0, VAR_1);
  return FUNC_1 (VAR_1->number_value);
 case 144:
  return FUNC_0 (FUNC_11 (VAR_0, VAR_1, 1), 1);
 case 147:
  return FUNC_0 (FUNC_11 (VAR_0, VAR_1, 1), -1);
 case 136:
  return FUNC_2 (VAR_3, FUNC_11 (VAR_0, VAR_1, 1));
 case 142:
  return FUNC_4 (VAR_3, FUNC_11 (VAR_0, VAR_1, 1));
 case 143:
  VAR_3 = FUNC_7 (VAR_0, VAR_1, 1);
  if (VAR_1->curr_tok == 133) {
   FUNC_8 (VAR_0, VAR_1);
  } else {
   FUNC_6 (VAR_0, VAR_1, " ')' expected");
  }
 case 145:
 case 128:
 case 149:
 case 135:
 case 141:
 case 140:
 case 146:
 case 134:
 case 148:
 case 133:
 case 130:
 case 129:
 case 132:
 case 131:
  return VAR_3;

 }
 return VAR_3;
}
