
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct devlink {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int info_get; } ;


 int FUNC_0 (struct devlink*,char*,size_t) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct devlink* FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(struct net_device *VAR_0,
        char *VAR_1, size_t VAR_2)
{
 struct devlink *VAR_3;

 FUNC_1(VAR_0);
 FUNC_7();

 VAR_3 = FUNC_5(VAR_0);
 if (!VAR_3 || !VAR_3->ops->info_get)
  goto out;

 FUNC_3(&VAR_3->lock);
 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_4(&VAR_3->lock);

out:
 FUNC_6();
 FUNC_2(VAR_0);
}
