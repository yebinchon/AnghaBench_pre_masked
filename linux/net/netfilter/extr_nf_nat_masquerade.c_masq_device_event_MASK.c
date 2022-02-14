
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ ifindex; } ;
struct net {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_0 (struct net_device const*) ;
 int VAR_2 ;
 struct net_device* FUNC_1 (void*) ;
 int FUNC_2 (struct net*,int ,void*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3,
        unsigned long VAR_4,
        void *VAR_5)
{
 const struct net_device *VAR_6 = FUNC_1(VAR_5);
 struct net *VAR_7 = FUNC_0(VAR_6);

 if (VAR_4 == VAR_0) {





  FUNC_2(VAR_7, VAR_2,
       (void *)(long)VAR_6->ifindex, 0, 0);
 }

 return VAR_1;
}
