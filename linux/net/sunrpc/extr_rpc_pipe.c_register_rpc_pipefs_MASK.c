
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(void)
{
 int VAR_8;

 VAR_6 = FUNC_0("rpc_inode_cache",
    sizeof(struct rpc_inode),
    0, (VAR_2|VAR_4|
      VAR_3|VAR_1),
    VAR_5);
 if (!VAR_6)
  return -VAR_0;
 VAR_8 = FUNC_3();
 if (VAR_8)
  goto err_notifier;
 VAR_8 = FUNC_2(&VAR_7);
 if (VAR_8)
  goto err_register;
 return 0;

err_register:
 FUNC_4();
err_notifier:
 FUNC_1(VAR_6);
 return VAR_8;
}
