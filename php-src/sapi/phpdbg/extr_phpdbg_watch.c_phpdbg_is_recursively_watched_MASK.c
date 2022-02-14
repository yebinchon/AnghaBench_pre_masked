
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_7__ {int flags; struct TYPE_7__* parent; TYPE_2__* watch; } ;
typedef TYPE_3__ phpdbg_watch_element ;
struct TYPE_5__ {void* ptr; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;


 int VAR_0 ;

zend_bool FUNC_0(void *VAR_1, phpdbg_watch_element *VAR_2) {
 phpdbg_watch_element *VAR_3 = VAR_2;
 do {
  VAR_2 = VAR_3;
  if (VAR_2->watch->addr.ptr == VAR_1) {
   return 1;
  }
  VAR_3 = VAR_2->parent;
 } while (!(VAR_2->flags & VAR_0));

 return 0;
}
