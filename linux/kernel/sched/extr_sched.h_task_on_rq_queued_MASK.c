
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ on_rq; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct task_struct *VAR_1)
{
 return VAR_1->on_rq == VAR_0;
}
