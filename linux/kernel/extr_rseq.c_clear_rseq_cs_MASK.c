
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* rseq; } ;
struct TYPE_3__ {int ptr64; } ;
struct TYPE_4__ {TYPE_1__ rseq_cs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_1)
{
 if (FUNC_0(&VAR_1->rseq->rseq_cs.ptr64, sizeof(VAR_1->rseq->rseq_cs.ptr64)))
  return -VAR_0;
 return 0;
}
