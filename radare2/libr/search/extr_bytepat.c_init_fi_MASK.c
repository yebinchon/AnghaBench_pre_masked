
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * next; } ;
typedef TYPE_1__ fnditem ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static fnditem* FUNC_1() {
 fnditem* VAR_0;
 VAR_0 = (fnditem*) FUNC_0 (sizeof (fnditem));
 if (!VAR_0) {
  return ((void*)0);
 }
 VAR_0->next = ((void*)0);
 return VAR_0;
}
