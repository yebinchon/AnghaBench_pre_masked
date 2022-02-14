
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ RFlagItem ;


 scalar_t__ FUNC_0 (int ,char) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static bool FUNC_2(RFlagItem *VAR_0) {
 if (VAR_0) {
  if (FUNC_1 (VAR_0->name, "main") || FUNC_1 (VAR_0->name, "entry")) {
   return 1;
  }
  if (FUNC_0 (VAR_0->name, '.')) {
   return 1;
  }
 }
 return 0;
}
