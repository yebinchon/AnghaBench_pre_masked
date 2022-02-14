
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct harbor_msg_queue {int tail; int size; int head; struct harbor_msg* data; } ;
struct harbor_msg {int dummy; } ;


 int FUNC_0 (struct harbor_msg*) ;
 struct harbor_msg* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct harbor_msg_queue * VAR_0, struct harbor_msg * VAR_1) {


 if (((VAR_0->tail + 1) % VAR_0->size) == VAR_0->head) {
  struct harbor_msg * VAR_2 = FUNC_1(VAR_0->size * 2 * sizeof(struct harbor_msg));
  int VAR_3;
  for (VAR_3=0;VAR_3<VAR_0->size-1;VAR_3++) {
   VAR_2[VAR_3] = VAR_0->data[(VAR_3+VAR_0->head) % VAR_0->size];
  }
  FUNC_0(VAR_0->data);
  VAR_0->data = VAR_2;
  VAR_0->head = 0;
  VAR_0->tail = VAR_0->size - 1;
  VAR_0->size *= 2;
 }
 struct harbor_msg * VAR_4 = &VAR_0->data[VAR_0->tail];
 *VAR_4 = *VAR_1;
 VAR_0->tail = (VAR_0->tail + 1) % VAR_0->size;
}
