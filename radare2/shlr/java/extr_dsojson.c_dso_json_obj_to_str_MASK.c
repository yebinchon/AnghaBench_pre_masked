
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int _dict_entry; int _dict; int _list; int _str; int _num; } ;
struct TYPE_7__ {TYPE_2__ val; TYPE_1__* info; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_3__ DsoJsonObj ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*) ;

char * FUNC_6 (DsoJsonObj * VAR_0) {
 if (VAR_0 && VAR_0->info) {
  switch (VAR_0->info->type) {
  case 130: return FUNC_5 ("null");
  case 129: return FUNC_3 (VAR_0->val._num);
  case 128: return FUNC_4 (VAR_0->val._str);
  case 131: return FUNC_2 (VAR_0->val._list);
  case 133: return FUNC_1 (VAR_0->val._dict);
  case 132: return FUNC_0 (VAR_0->val._dict_entry);
  }
 }
 return ((void*)0);
}
