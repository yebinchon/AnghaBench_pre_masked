
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct reclaim_state* reclaim_state; } ;
struct reclaim_state {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_0,
       struct reclaim_state *VAR_1)
{

 FUNC_0(VAR_1 && VAR_0->reclaim_state);


 FUNC_0(!VAR_1 && !VAR_0->reclaim_state);

 VAR_0->reclaim_state = VAR_1;
}
