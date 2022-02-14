
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* _dict_entry; } ;
struct TYPE_11__ {TYPE_1__ val; } ;
struct TYPE_10__ {TYPE_3__* value; TYPE_3__* key; } ;
typedef TYPE_3__ DsoJsonObj ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;

DsoJsonObj * FUNC_2 (DsoJsonObj *VAR_0, DsoJsonObj *VAR_1) {
 DsoJsonObj *VAR_2 = FUNC_0 ();
 if (!VAR_2) return ((void*)0);
 FUNC_1 (VAR_2->val._dict_entry->key);
 FUNC_1 (VAR_2->val._dict_entry->value);
 VAR_2->val._dict_entry->key = VAR_0;
 VAR_2->val._dict_entry->value = VAR_1;
 return VAR_2;

}
