
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int json_dict; } ;
struct TYPE_7__ {TYPE_6__* _dict; } ;
struct TYPE_8__ {TYPE_1__ val; int info; } ;
typedef int RListFree ;
typedef TYPE_2__ DsoJsonObj ;
typedef int DsoJsonDict ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

DsoJsonObj * FUNC_5 () {
 DsoJsonObj *VAR_2 = FUNC_2 ();
 if (VAR_2) {
  VAR_2->info = FUNC_3 (VAR_0);
  VAR_2->val._dict = FUNC_0 (sizeof (DsoJsonDict), 1);
  if (!VAR_2->val._dict) {
   FUNC_1 (VAR_2);
   return ((void*)0);
  }
  VAR_2->val._dict->json_dict = FUNC_4 ((RListFree)VAR_1);
 }
 return VAR_2;
}
