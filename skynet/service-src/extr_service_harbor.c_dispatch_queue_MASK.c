
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int fd; struct harbor_msg_queue* queue; } ;
struct harbor_msg_queue {int dummy; } ;
struct harbor_msg {int buffer; int header; int size; } ;
struct harbor {int ctx; struct slave* s; } ;


 int FUNC_0 (int) ;
 struct harbor_msg* FUNC_1 (struct harbor_msg_queue*) ;
 int FUNC_2 (struct harbor_msg_queue*) ;
 int FUNC_3 (int ,int,int ,int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct harbor *VAR_0, int VAR_1) {
 struct slave *VAR_2 = &VAR_0->s[VAR_1];
 int VAR_3 = VAR_2->fd;
 FUNC_0(VAR_3 != 0);

 struct harbor_msg_queue *VAR_4 = VAR_2->queue;
 if (VAR_4 == ((void*)0))
  return;

 struct harbor_msg * VAR_5;
 while ((VAR_5 = FUNC_1(VAR_4)) != ((void*)0)) {
  FUNC_3(VAR_0->ctx, VAR_3, VAR_5->buffer, VAR_5->size, &VAR_5->header);
  FUNC_4(VAR_5->buffer);
 }
 FUNC_2(VAR_4);
 VAR_2->queue = ((void*)0);
}
