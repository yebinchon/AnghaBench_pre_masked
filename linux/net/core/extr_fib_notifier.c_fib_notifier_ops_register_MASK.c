
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct fib_notifier_ops {int dummy; } ;


 int VAR_0 ;
 struct fib_notifier_ops* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct fib_notifier_ops*,struct net*) ;
 int FUNC_2 (struct fib_notifier_ops*) ;
 struct fib_notifier_ops* FUNC_3 (struct fib_notifier_ops const*,int,int ) ;

struct fib_notifier_ops *
FUNC_4(const struct fib_notifier_ops *VAR_2, struct net *VAR_3)
{
 struct fib_notifier_ops *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5)
  goto err_register;

 return VAR_4;

err_register:
 FUNC_2(VAR_4);
 return FUNC_0(VAR_5);
}
