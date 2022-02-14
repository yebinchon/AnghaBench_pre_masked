
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct devlink {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* flash_update ) (struct devlink*,char const*,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct devlink* FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct devlink*,char const*,int *,int *) ;

int FUNC_8(struct net_device *VAR_1, const char *VAR_2)
{
 struct devlink *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);
 FUNC_6();

 VAR_3 = FUNC_4(VAR_1);
 if (!VAR_3 || !VAR_3->ops->flash_update) {
  VAR_4 = -VAR_0;
  goto out;
 }

 FUNC_2(&VAR_3->lock);
 VAR_4 = VAR_3->ops->flash_update(VAR_3, VAR_2, ((void*)0), ((void*)0));
 FUNC_3(&VAR_3->lock);

out:
 FUNC_5();
 FUNC_1(VAR_1);

 return VAR_4;
}
