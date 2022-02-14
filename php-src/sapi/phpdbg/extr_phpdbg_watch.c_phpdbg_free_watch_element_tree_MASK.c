
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* child; struct TYPE_5__* parent; } ;
typedef TYPE_1__ phpdbg_watch_element ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(phpdbg_watch_element *VAR_0) {
 phpdbg_watch_element *VAR_1 = VAR_0->parent, *VAR_2 = VAR_0->child;
 while (VAR_1) {
  phpdbg_watch_element *VAR_3 = VAR_1;
  VAR_1 = VAR_1->parent;
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);
 }
 while (VAR_2) {
  phpdbg_watch_element *VAR_4 = VAR_2;
  VAR_2 = VAR_2->child;
  FUNC_1(VAR_4);
 }
 FUNC_1(VAR_0);
}
