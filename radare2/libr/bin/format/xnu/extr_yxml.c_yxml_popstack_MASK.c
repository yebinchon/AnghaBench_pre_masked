
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t stacklen; scalar_t__* stack; } ;
typedef TYPE_1__ yxml_t ;



__attribute__((used)) static void FUNC_0(yxml_t *VAR_0) {
 do
  VAR_0->stacklen--;
 while(VAR_0->stack[VAR_0->stacklen]);
}
