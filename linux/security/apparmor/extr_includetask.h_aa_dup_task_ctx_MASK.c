
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_task_ctx {int onexec; int previous; int nnp; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct aa_task_ctx *VAR_0,
       const struct aa_task_ctx *VAR_1)
{
 *VAR_0 = *VAR_1;
 FUNC_0(VAR_0->nnp);
 FUNC_0(VAR_0->previous);
 FUNC_0(VAR_0->onexec);
}
