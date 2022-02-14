
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int ,int ,int *) ;
 void* FUNC_1 (int ,int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;

int
FUNC_5(void)
{




 FUNC_3(&VAR_5, "delayq");
 if (!FUNC_4())
  goto err_nomem;

 VAR_9 = FUNC_0("rpc_tasks",
          sizeof(struct rpc_task),
          0, VAR_4,
          ((void*)0));
 if (!VAR_9)
  goto err_nomem;
 VAR_7 = FUNC_0("rpc_buffers",
          VAR_1,
          0, VAR_4,
          ((void*)0));
 if (!VAR_7)
  goto err_nomem;
 VAR_8 = FUNC_1(VAR_3,
          VAR_9);
 if (!VAR_8)
  goto err_nomem;
 VAR_6 = FUNC_1(VAR_2,
            VAR_7);
 if (!VAR_6)
  goto err_nomem;
 return 0;
err_nomem:
 FUNC_2();
 return -VAR_0;
}
