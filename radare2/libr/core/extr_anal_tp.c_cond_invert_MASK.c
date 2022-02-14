
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int _RAnalCond ;
struct TYPE_3__ {int verbose; } ;
typedef TYPE_1__ RAnal ;






 int FUNC_0 (char*) ;

__attribute__((used)) static _RAnalCond FUNC_1(RAnal *VAR_0, _RAnalCond VAR_1) {
 switch (VAR_1) {
 case 129:
  return 130;
 case 128:
  return 131;
 case 131:
  return 128;
 case 130:
  return 129;
 default:
  if (VAR_0->verbose) {
   FUNC_0 ("Unhandled conditional swap\n");
  }
  break;
 }
 return 0;


}
