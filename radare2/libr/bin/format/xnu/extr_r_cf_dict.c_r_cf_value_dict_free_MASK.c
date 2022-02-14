
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int * pairs; } ;
typedef TYPE_1__ RCFValueDict ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (RCFValueDict *VAR_1) {
 FUNC_2 (VAR_1);

 if (VAR_1->pairs) {
  FUNC_1 (VAR_1->pairs);
  VAR_1->pairs = ((void*)0);
 }
 VAR_1->type = VAR_0;
 FUNC_0 (VAR_1);
}
