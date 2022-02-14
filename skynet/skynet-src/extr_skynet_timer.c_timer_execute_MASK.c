
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_node {int dummy; } ;
struct timer {int time; TYPE_2__* near; } ;
struct TYPE_3__ {scalar_t__ next; } ;
struct TYPE_4__ {TYPE_1__ head; } ;


 int FUNC_0 (struct timer*) ;
 int FUNC_1 (struct timer*) ;
 int VAR_0 ;
 int FUNC_2 (struct timer_node*) ;
 struct timer_node* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static inline void
FUNC_4(struct timer *VAR_1) {
 int VAR_2 = VAR_1->time & VAR_0;

 while (VAR_1->near[VAR_2].head.next) {
  struct timer_node *VAR_3 = FUNC_3(&VAR_1->near[VAR_2]);
  FUNC_1(VAR_1);

  FUNC_2(VAR_3);
  FUNC_0(VAR_1);
 }
}
