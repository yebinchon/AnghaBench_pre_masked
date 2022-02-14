
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm_rdma_op {unsigned int op_nents; scalar_t__ op_active; int * op_notifier; int op_write; int * op_sg; } ;
struct page {int mapping; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (int *) ;

void FUNC_6(struct rm_rdma_op *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->op_nents; VAR_1++) {
  struct page *VAR_2 = FUNC_5(&VAR_0->op_sg[VAR_1]);




  if (!VAR_0->op_write) {
   FUNC_0(!VAR_2->mapping && FUNC_1());
   FUNC_4(VAR_2);
  }
  FUNC_3(VAR_2);
 }

 FUNC_2(VAR_0->op_notifier);
 VAR_0->op_notifier = ((void*)0);
 VAR_0->op_active = 0;
}
