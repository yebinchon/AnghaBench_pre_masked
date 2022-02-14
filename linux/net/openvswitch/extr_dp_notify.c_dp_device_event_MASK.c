
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct ovs_net {int dp_notify_work; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct ovs_net* FUNC_1 (int ,int ) ;
 struct net_device* FUNC_2 (void*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_4 (struct vport*) ;
 struct vport* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_4, unsigned long VAR_5,
      void *VAR_6)
{
 struct ovs_net *VAR_7;
 struct net_device *VAR_8 = FUNC_2(VAR_6);
 struct vport *VAR_9 = ((void*)0);

 if (!FUNC_3(VAR_8))
  VAR_9 = FUNC_5(VAR_8);

 if (!VAR_9)
  return VAR_1;

 if (VAR_5 == VAR_0) {

  FUNC_4(VAR_9);


  VAR_7 = FUNC_1(FUNC_0(VAR_8), VAR_2);
  FUNC_6(VAR_3, &VAR_7->dp_notify_work);
 }

 return VAR_1;
}
