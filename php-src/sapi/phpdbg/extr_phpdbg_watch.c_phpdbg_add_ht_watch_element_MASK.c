
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int phpdbg_watchpoint_t ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ phpdbg_watch_element ;
typedef int HashTable ;


 int * FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

phpdbg_watch_element *FUNC_4(zval *VAR_3, phpdbg_watch_element *VAR_4) {
 phpdbg_watchpoint_t VAR_5;
 HashTable *VAR_6 = FUNC_0(VAR_3);

 if (!VAR_6) {
  return ((void*)0);
 }

 VAR_4->flags |= FUNC_1(VAR_3) == VAR_0 ? VAR_1 : VAR_2;
 FUNC_3(VAR_6, &VAR_5);
 return FUNC_2(&VAR_5, VAR_4);
}
