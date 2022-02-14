
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fpm_child_s {TYPE_1__* prev; TYPE_3__* next; TYPE_2__* wp; } ;
struct TYPE_8__ {int running_children; } ;
struct TYPE_7__ {TYPE_1__* prev; } ;
struct TYPE_6__ {TYPE_3__* children; int running_children; } ;
struct TYPE_5__ {TYPE_3__* next; } ;


 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fpm_child_s *VAR_1)
{
 --VAR_1->wp->running_children;
 --VAR_0.running_children;

 if (VAR_1->prev) {
  VAR_1->prev->next = VAR_1->next;
 } else {
  VAR_1->wp->children = VAR_1->next;
 }

 if (VAR_1->next) {
  VAR_1->next->prev = VAR_1->prev;
 }
}
