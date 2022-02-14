
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int json_list; } ;
struct TYPE_8__ {TYPE_3__* _list; } ;
struct TYPE_9__ {TYPE_1__ val; } ;
typedef TYPE_2__ DsoJsonObj ;
typedef TYPE_3__ DsoJsonList ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;

int FUNC_2 (DsoJsonObj *VAR_1, DsoJsonObj *VAR_2) {
 if (FUNC_0 (VAR_1) == VAR_0) {
  DsoJsonList * VAR_3 = VAR_1->val._list;
  FUNC_1 (VAR_3->json_list, VAR_2);
  return 1;
 }
 return 0;
}
