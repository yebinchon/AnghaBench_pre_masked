
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* _list; } ;
struct TYPE_7__ {TYPE_2__ val; } ;
struct TYPE_5__ {int * json_list; } ;
typedef TYPE_3__ DsoJsonObj ;


 int FUNC_0 (int *) ;

void FUNC_1 (DsoJsonObj *VAR_0) {
 if (!VAR_0) return;
 if (VAR_0->val._list && VAR_0->val._list->json_list) {
  FUNC_0 (VAR_0->val._list->json_list);
  VAR_0->val._list->json_list = ((void*)0);
 }
}
