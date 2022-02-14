
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_message_header {int dummy; } ;
struct harbor_msg_queue {int dummy; } ;
struct harbor_msg {size_t size; void* buffer; struct remote_message_header header; } ;


 int FUNC_0 (struct harbor_msg_queue*,struct harbor_msg*) ;

__attribute__((used)) static void
FUNC_1(struct harbor_msg_queue * VAR_0, void * VAR_1, size_t VAR_2, struct remote_message_header * VAR_3) {
 struct harbor_msg VAR_4;
 VAR_4.header = *VAR_3;
 VAR_4.buffer = VAR_1;
 VAR_4.size = VAR_2;
 FUNC_0(VAR_0, &VAR_4);
}
