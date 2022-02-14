
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_node {struct timer_node* next; } ;
struct timer_event {int handle; int session; } ;
struct skynet_message {size_t sz; int * data; int session; scalar_t__ source; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct skynet_message*) ;
 int FUNC_1 (struct timer_node*) ;

__attribute__((used)) static inline void
FUNC_2(struct timer_node *VAR_2) {
 do {
  struct timer_event * VAR_3 = (struct timer_event *)(VAR_2+1);
  struct skynet_message VAR_4;
  VAR_4.source = 0;
  VAR_4.session = VAR_3->session;
  VAR_4.data = ((void*)0);
  VAR_4.sz = (size_t)VAR_1 << VAR_0;

  FUNC_0(VAR_3->handle, &VAR_4);

  struct timer_node * VAR_5 = VAR_2;
  VAR_2=VAR_2->next;
  FUNC_1(VAR_5);
 } while (VAR_2);
}
