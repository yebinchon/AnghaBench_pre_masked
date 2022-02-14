
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* _dict_entry; int * _str; } ;
struct TYPE_9__ {TYPE_3__ val; TYPE_1__* info; } ;
struct TYPE_7__ {TYPE_4__* key; } ;
struct TYPE_6__ {int type; } ;
typedef int DsoJsonStr ;
typedef TYPE_4__ DsoJsonObj ;





__attribute__((used)) static DsoJsonStr * FUNC_0 (DsoJsonObj *VAR_0) {
 DsoJsonStr * VAR_1 = ((void*)0);
 if (VAR_0) {
  switch (VAR_0->info->type) {
  case 128: VAR_1 = VAR_0->val._str; break;
  case 129: VAR_1 = FUNC_0 (VAR_0->val._dict_entry->key); break;
  default: break;
  }
 }
 return VAR_1;
}
