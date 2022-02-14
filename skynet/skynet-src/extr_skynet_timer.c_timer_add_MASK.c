
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_node {scalar_t__ expire; } ;
struct timer {scalar_t__ time; } ;


 int FUNC_0 (struct timer*) ;
 int FUNC_1 (struct timer*) ;
 int FUNC_2 (struct timer*,struct timer_node*) ;
 int FUNC_3 (struct timer_node*,void*,size_t) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct timer *VAR_0,void *VAR_1,size_t VAR_2,int VAR_3) {
 struct timer_node *VAR_4 = (struct timer_node *)FUNC_4(sizeof(*VAR_4)+VAR_2);
 FUNC_3(VAR_4+1,VAR_1,VAR_2);

 FUNC_0(VAR_0);

  VAR_4->expire=VAR_3+VAR_0->time;
  FUNC_2(VAR_0,VAR_4);

 FUNC_1(VAR_0);
}
