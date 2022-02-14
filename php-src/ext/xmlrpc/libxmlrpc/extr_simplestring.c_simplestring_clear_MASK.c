
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__* str; } ;
typedef TYPE_1__ simplestring ;



void FUNC_0(simplestring* VAR_0) {
   if(VAR_0->str) {
      VAR_0->str[0] = 0;
   }
   VAR_0->len = 0;
}
