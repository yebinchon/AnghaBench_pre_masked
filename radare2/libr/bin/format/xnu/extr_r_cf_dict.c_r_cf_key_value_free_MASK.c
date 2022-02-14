
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * value; struct TYPE_4__* key; } ;
typedef TYPE_1__ RCFKeyValue ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(RCFKeyValue *VAR_0) {
 if (!VAR_0) {
  return;
 }

 if (VAR_0->key) {
  FUNC_0 (VAR_0->key);
 }
 if (VAR_0->value) {
  FUNC_1 (VAR_0->value);
  VAR_0->value = ((void*)0);
 }

 FUNC_0 (VAR_0);
}
