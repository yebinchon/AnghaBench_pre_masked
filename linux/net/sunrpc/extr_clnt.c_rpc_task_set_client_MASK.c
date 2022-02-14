
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_task; int tk_flags; struct rpc_clnt* tk_client; } ;
struct rpc_clnt {int cl_lock; int cl_tasks; int cl_swapper; scalar_t__ cl_noretranstimeo; scalar_t__ cl_softerr; scalar_t__ cl_softrtry; int cl_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct rpc_task*,struct rpc_clnt*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static
void FUNC_6(struct rpc_task *VAR_4, struct rpc_clnt *VAR_5)
{

 if (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_4, VAR_5);
  VAR_4->tk_client = VAR_5;
  FUNC_0(&VAR_5->cl_count);
  if (VAR_5->cl_softrtry)
   VAR_4->tk_flags |= VAR_1;
  if (VAR_5->cl_softerr)
   VAR_4->tk_flags |= VAR_3;
  if (VAR_5->cl_noretranstimeo)
   VAR_4->tk_flags |= VAR_0;
  if (FUNC_1(&VAR_5->cl_swapper))
   VAR_4->tk_flags |= VAR_2;

  FUNC_4(&VAR_5->cl_lock);
  FUNC_2(&VAR_4->tk_task, &VAR_5->cl_tasks);
  FUNC_5(&VAR_5->cl_lock);
 }
}
