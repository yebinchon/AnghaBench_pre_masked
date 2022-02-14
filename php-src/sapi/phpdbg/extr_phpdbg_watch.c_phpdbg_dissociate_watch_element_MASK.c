
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; struct TYPE_7__* child; } ;
typedef TYPE_1__ phpdbg_watch_element ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(phpdbg_watch_element *VAR_2, phpdbg_watch_element *VAR_3) {
 phpdbg_watch_element *VAR_4 = VAR_2;
 FUNC_0((VAR_2->flags & (VAR_1 | VAR_0)) != VAR_0);

 if (VAR_2->flags & VAR_1) {
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
  return;
 }

 while (VAR_4->child != VAR_3) {
  VAR_4 = VAR_4->child;
  if (VAR_4->flags & VAR_1) {
   FUNC_1(VAR_4);
   FUNC_3(VAR_4);
   VAR_4->child = ((void*)0);
   break;
  }
  if (VAR_4->child == ((void*)0) || (VAR_4->flags & VAR_1)) {
   FUNC_1(VAR_4);
  }
  FUNC_2(VAR_4);
 }

 if (VAR_2->child == ((void*)0)) {
  FUNC_1(VAR_2);
 }
 FUNC_2(VAR_2);
}
