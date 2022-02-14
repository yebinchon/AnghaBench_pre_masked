
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {int event_index; int event_n; struct event* ev; } ;
struct socket_message {int id; } ;
struct socket {scalar_t__ type; int id; } ;
struct event {struct socket* s; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void
FUNC_0(struct socket_server *VAR_3, struct socket_message * VAR_4, int VAR_5) {
 if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
  int VAR_6 = VAR_4->id;
  int VAR_7;
  for (VAR_7=VAR_3->event_index; VAR_7<VAR_3->event_n; VAR_7++) {
   struct event *VAR_8 = &VAR_3->ev[VAR_7];
   struct socket *VAR_9 = VAR_8->s;
   if (VAR_9) {
    if (VAR_9->type == VAR_2 && VAR_9->id == VAR_6) {
     VAR_8->s = ((void*)0);
     break;
    }
   }
  }
 }
}
