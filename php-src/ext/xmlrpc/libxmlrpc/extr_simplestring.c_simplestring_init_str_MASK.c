
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; scalar_t__ size; scalar_t__ len; } ;
typedef TYPE_1__ simplestring ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(simplestring* VAR_1) {
   VAR_1->str = (char*)FUNC_0(VAR_0);
   if(VAR_1->str) {
      VAR_1->str[0] = 0;
      VAR_1->len = 0;
      VAR_1->size = VAR_0;
   }
   else {
      VAR_1->size = 0;
   }
}
