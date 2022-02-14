
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nsections; int nsymbols; struct TYPE_5__* sect; struct TYPE_5__* symtab; struct TYPE_5__* name; } ;
typedef TYPE_1__ Pe ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(Pe *VAR_0) {
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->nsections; VAR_1++) {
  FUNC_1(FUNC_0(&VAR_0->sect[VAR_1]));
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->nsymbols; VAR_1++) {
  FUNC_2(VAR_0->symtab[VAR_1].name);
 }
 FUNC_2(VAR_0->symtab);
 FUNC_2(VAR_0->sect);
 FUNC_2(VAR_0);
}
