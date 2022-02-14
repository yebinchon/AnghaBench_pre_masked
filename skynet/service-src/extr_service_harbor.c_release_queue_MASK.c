
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct harbor_msg_queue {struct harbor_msg_queue* data; } ;
struct harbor_msg {struct harbor_msg_queue* buffer; } ;


 struct harbor_msg* FUNC_0 (struct harbor_msg_queue*) ;
 int FUNC_1 (struct harbor_msg_queue*) ;

__attribute__((used)) static void
FUNC_2(struct harbor_msg_queue *VAR_0) {
 if (VAR_0 == ((void*)0))
  return;
 struct harbor_msg * VAR_1;
 while ((VAR_1=FUNC_0(VAR_0)) != ((void*)0)) {
  FUNC_1(VAR_1->buffer);
 }
 FUNC_1(VAR_0->data);
 FUNC_1(VAR_0);
}
