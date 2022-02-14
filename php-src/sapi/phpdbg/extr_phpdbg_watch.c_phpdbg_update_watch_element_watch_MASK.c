
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int flags; TYPE_2__* parent; int str; TYPE_1__* watch; struct TYPE_10__* child; } ;
typedef TYPE_3__ phpdbg_watch_element ;
struct TYPE_9__ {int flags; int * child; int child_container; } ;
struct TYPE_8__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(phpdbg_watch_element *VAR_8) {
 if (VAR_8->flags & VAR_1) {
  phpdbg_watch_element *VAR_9 = VAR_8->child;
  while (VAR_9->flags & VAR_1) {
   VAR_9 = VAR_9->child;
  }

  FUNC_0(VAR_8->watch->type == VAR_7 || VAR_8->watch->type == VAR_6);
  FUNC_2(VAR_8);
 } else if (VAR_8->flags & (VAR_4 | VAR_5)) {
  FUNC_2(VAR_8);
 } else if (VAR_8->flags & VAR_3) {
  FUNC_3(VAR_8);
  if (VAR_8->parent->flags & (VAR_2 | VAR_0)) {
   FUNC_4(&VAR_8->parent->child_container, VAR_8->str);
  } else {
   VAR_8->parent->child = ((void*)0);
  }
  FUNC_1(VAR_8);
 }
}
