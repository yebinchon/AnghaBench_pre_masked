
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int length; int * items; } ;
typedef TYPE_1__ list_t ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(list_t **VAR_0, list_t **VAR_1) {
 *VAR_1 = FUNC_1();

 *VAR_0 = FUNC_0();
 for (int VAR_2 = 0; VAR_2 < (*VAR_1)->length; ++VAR_2) {
  list_t *VAR_3 = FUNC_4((*VAR_1)->items[VAR_2]);
  if (VAR_3 == ((void*)0)) {
   continue;
  }
  FUNC_2(*VAR_0, VAR_3);
  FUNC_3(VAR_3);
 }

 FUNC_5(*VAR_0);
}
