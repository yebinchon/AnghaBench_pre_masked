
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm_atomic_op {scalar_t__ op_active; int * op_notifier; int op_sg; } ;
struct page {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;

void FUNC_4(struct rm_atomic_op *VAR_0)
{
 struct page *VAR_1 = FUNC_3(VAR_0->op_sg);




 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 FUNC_0(VAR_0->op_notifier);
 VAR_0->op_notifier = ((void*)0);
 VAR_0->op_active = 0;
}
