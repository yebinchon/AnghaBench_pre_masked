
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int json_list; } ;
struct TYPE_7__ {TYPE_5__* _list; } ;
struct TYPE_8__ {TYPE_1__ val; int info; } ;
typedef int RListFree ;
typedef TYPE_2__ DsoJsonObj ;
typedef int DsoJsonList ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_5__* FUNC_1 (int,int) ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

DsoJsonObj * FUNC_5 () {
 DsoJsonObj *VAR_2 = FUNC_2 ();
 if (VAR_2) {
  VAR_2->info = FUNC_3 (VAR_0);
  VAR_2->val._list = FUNC_1 (sizeof (DsoJsonList), 1);
  if (VAR_2->val._list) {
   VAR_2->val._list->json_list = FUNC_4 ((RListFree)VAR_1);
  } else {
   FUNC_0 (VAR_2);
  }
 }
 return VAR_2;
}
