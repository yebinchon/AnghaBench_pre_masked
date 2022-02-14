
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; int name; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct net_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct net_device *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;


 VAR_3 = FUNC_0(VAR_1, "INTERFACE=%s", VAR_2->name);
 if (VAR_3)
  goto exit;





 VAR_3 = FUNC_0(VAR_1, "IFINDEX=%d", VAR_2->ifindex);

exit:
 return VAR_3;
}
