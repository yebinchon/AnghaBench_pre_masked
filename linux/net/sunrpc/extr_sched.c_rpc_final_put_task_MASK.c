
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct TYPE_2__ {int tk_work; } ;
struct rpc_task {TYPE_1__ u; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct workqueue_struct*,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_1,
  struct workqueue_struct *VAR_2)
{
 if (VAR_2 != ((void*)0)) {
  FUNC_0(&VAR_1->u.tk_work, VAR_0);
  FUNC_1(VAR_2, &VAR_1->u.tk_work);
 } else
  FUNC_2(VAR_1);
}
