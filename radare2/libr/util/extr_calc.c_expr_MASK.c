
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int curr_tok; } ;
typedef int RNumCalcValue ;
typedef TYPE_1__ RNumCalc ;
typedef int RNum ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,TYPE_1__*,int) ;

__attribute__((used)) static RNumCalcValue FUNC_10(RNum *VAR_0, RNumCalc *VAR_1, int VAR_2) {
 RNumCalcValue VAR_3 = FUNC_9 (VAR_0, VAR_1, VAR_2);
 for (;;) {
  switch (VAR_1->curr_tok) {
  case 130: VAR_3 = FUNC_5 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  case 129: VAR_3 = FUNC_6 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  case 132: VAR_3 = FUNC_3 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  case 131: VAR_3 = FUNC_4 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  case 133: VAR_3 = FUNC_0 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  case 135: VAR_3 = FUNC_7 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  case 128: VAR_3 = FUNC_8 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  case 134: VAR_3 = FUNC_2 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  case 136: VAR_3 = FUNC_1 (VAR_3, FUNC_9 (VAR_0, VAR_1, 1)); break;
  default:
   return VAR_3;
  }
 }
 return VAR_3;
}
