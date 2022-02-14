
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * value; int * key; } ;
typedef TYPE_1__ DsoJsonDictEntry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (void *VAR_0) {
 DsoJsonDictEntry *VAR_1 = (DsoJsonDictEntry *)VAR_0;
 if (VAR_1) {
  FUNC_0 (VAR_1->key);
  FUNC_0 (VAR_1->value);
  VAR_1->key = ((void*)0);
  VAR_1->value = ((void*)0);
 }
 FUNC_1 (VAR_1);
}
