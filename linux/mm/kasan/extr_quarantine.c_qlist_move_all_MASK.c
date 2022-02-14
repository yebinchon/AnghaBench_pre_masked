
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlist_head {scalar_t__ bytes; TYPE_1__* tail; int head; } ;
struct TYPE_2__ {int next; } ;


 int FUNC_0 (struct qlist_head*) ;
 int FUNC_1 (struct qlist_head*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct qlist_head *VAR_0, struct qlist_head *VAR_1)
{
 if (FUNC_2(FUNC_0(VAR_0)))
  return;

 if (FUNC_0(VAR_1)) {
  *VAR_1 = *VAR_0;
  FUNC_1(VAR_0);
  return;
 }

 VAR_1->tail->next = VAR_0->head;
 VAR_1->tail = VAR_0->tail;
 VAR_1->bytes += VAR_0->bytes;

 FUNC_1(VAR_0);
}
