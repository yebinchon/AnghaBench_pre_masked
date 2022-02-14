
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * json_dict; } ;
typedef TYPE_1__ DsoJsonDict ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2 (void *VAR_0) {
 DsoJsonDict *VAR_1 = (DsoJsonDict *)VAR_0;
 if (VAR_1 && VAR_1->json_dict) {
  FUNC_1 (VAR_1->json_dict);
  VAR_1->json_dict = ((void*)0);
 }
 FUNC_0 (VAR_1);
}
