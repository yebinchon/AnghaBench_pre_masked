
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; int name; int priv_flags; } ;
struct failover_ops {scalar_t__ type; int name; int priv_flags; } ;
struct failover {int list; int failover_dev; int ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct failover* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct failover* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct net_device*,char*,int ) ;
 int FUNC_6 (int ,struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct failover *FUNC_9(struct net_device *VAR_7,
       struct failover_ops *VAR_8)
{
 struct failover *VAR_9;

 if (VAR_7->type != VAR_0)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 FUNC_6(VAR_9->ops, VAR_8);
 FUNC_1(VAR_7);
 VAR_7->priv_flags |= VAR_4;
 FUNC_6(VAR_9->failover_dev, VAR_7);

 FUNC_7(&VAR_6);
 FUNC_4(&VAR_9->list, &VAR_5);
 FUNC_8(&VAR_6);

 FUNC_5(VAR_7, "failover master:%s registered\n", VAR_7->name);

 FUNC_2(VAR_7);

 return VAR_9;
}
