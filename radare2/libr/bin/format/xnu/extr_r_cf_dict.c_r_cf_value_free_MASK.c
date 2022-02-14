
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
typedef int RCFValueString ;
typedef int RCFValueNULL ;
typedef int RCFValueInteger ;
typedef int RCFValueDict ;
typedef int RCFValueData ;
typedef int RCFValueBool ;
typedef int RCFValueArray ;
typedef TYPE_1__ RCFValue ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(RCFValue *VAR_0) {
 if (!VAR_0) {
  return;
 }

 switch (VAR_0->type) {
 case 133:
  FUNC_3 ((RCFValueDict *)VAR_0);
  break;
 case 135:
  FUNC_0 ((RCFValueArray *)VAR_0);
  break;
 case 129:
  FUNC_6 ((RCFValueString *)VAR_0);
  break;
 case 131:
  FUNC_4 ((RCFValueInteger *)VAR_0);
  break;
 case 134:
  FUNC_2 ((RCFValueData *)VAR_0);
  break;
 case 130:
  FUNC_5 ((RCFValueNULL *)VAR_0);
  break;
 case 128:
 case 132:
  FUNC_1 ((RCFValueBool *)VAR_0);
  break;
 default:
  break;
 }
}
