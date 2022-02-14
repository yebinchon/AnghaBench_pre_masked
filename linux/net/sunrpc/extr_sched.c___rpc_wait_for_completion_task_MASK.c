
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_bit_action_f ;
struct rpc_task {int tk_runstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int * VAR_2 ;

int FUNC_1(struct rpc_task *VAR_3, wait_bit_action_f *VAR_4)
{
 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_2;
 return FUNC_0(&VAR_3->tk_runstate, VAR_0,
   VAR_4, VAR_1);
}
