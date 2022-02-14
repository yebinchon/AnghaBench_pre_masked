
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_message {int dummy; } ;
struct message_queue {int dummy; } ;
typedef int (* message_drop ) (struct skynet_message*,void*) ;


 int FUNC_0 (struct message_queue*) ;
 int FUNC_1 (struct message_queue*,struct skynet_message*) ;

__attribute__((used)) static void
FUNC_2(struct message_queue *VAR_0, message_drop VAR_1, void *VAR_2) {
 struct skynet_message VAR_3;
 while(!FUNC_1(VAR_0, &VAR_3)) {
  VAR_1(&VAR_3, VAR_2);
 }
 FUNC_0(VAR_0);
}
