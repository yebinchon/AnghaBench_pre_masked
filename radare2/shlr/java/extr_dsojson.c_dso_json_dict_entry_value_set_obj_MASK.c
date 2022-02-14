
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* value; } ;
struct TYPE_8__ {TYPE_3__* _dict_entry; } ;
struct TYPE_9__ {TYPE_1__ val; } ;
typedef TYPE_2__ DsoJsonObj ;
typedef TYPE_3__ DsoJsonDictEntry ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2 (DsoJsonObj *VAR_0, DsoJsonObj *VAR_1) {
 if (FUNC_0 (VAR_0)) {
  DsoJsonDictEntry *VAR_2 = VAR_0->val._dict_entry;
  if (VAR_2->value) FUNC_1 (VAR_2->value);
  VAR_2->value = VAR_1;
  return 1;
 }
 return 0;
}
