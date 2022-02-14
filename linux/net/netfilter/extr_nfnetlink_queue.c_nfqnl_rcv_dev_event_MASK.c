
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int ifindex; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct notifier_block *VAR_2,
      unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_1(VAR_4);


 if (VAR_3 == VAR_0)
  FUNC_2(FUNC_0(VAR_5), VAR_5->ifindex);
 return VAR_1;
}
