
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* value; int key; } ;
struct TYPE_6__ {TYPE_5__* _dict_entry; } ;
struct TYPE_7__ {TYPE_1__ val; int info; } ;
typedef TYPE_2__ DsoJsonObj ;
typedef int DsoJsonDictEntry ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

DsoJsonObj * FUNC_5 () {
 DsoJsonObj *VAR_1 = FUNC_2 ();
 if (!VAR_1) return ((void*)0);
 VAR_1->info = FUNC_4 (VAR_0);
 VAR_1->val._dict_entry = FUNC_0 (sizeof (DsoJsonDictEntry), 1);
 if (!VAR_1->val._dict_entry) {
  FUNC_1 (VAR_1);
  return ((void*)0);
 }
 VAR_1->val._dict_entry->key = FUNC_3 ();
 VAR_1->val._dict_entry->value = FUNC_2 ();
 return VAR_1;
}
