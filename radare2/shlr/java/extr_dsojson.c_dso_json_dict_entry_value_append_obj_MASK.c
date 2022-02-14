
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* value; } ;
struct TYPE_12__ {TYPE_3__* _dict_entry; } ;
struct TYPE_13__ {TYPE_1__ val; } ;
typedef TYPE_2__ DsoJsonObj ;
typedef TYPE_3__ DsoJsonDictEntry ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 void* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6 (DsoJsonObj *VAR_0, DsoJsonObj *VAR_1) {
 if (FUNC_0 (VAR_0)) {
  DsoJsonDictEntry *VAR_2 = VAR_0->val._dict_entry;


  if (FUNC_2 (VAR_2->value)) {
   DsoJsonObj *VAR_3 = FUNC_4 ();
   FUNC_5 (VAR_2->value);
   VAR_2->value = VAR_3;
  } else if (!FUNC_1 (VAR_2->value)) {
   DsoJsonObj *VAR_4 = VAR_2->value;
   VAR_2->value = FUNC_4 ();
   FUNC_3 (VAR_2->value, VAR_4);
  }

  if (FUNC_1 (VAR_2->value)) {
   FUNC_3 (VAR_2->value, VAR_1);
   return 1;
  }
 }
 return 0;
}
