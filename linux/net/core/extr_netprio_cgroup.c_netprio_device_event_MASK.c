
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct netprio_map {int dummy; } ;
struct net_device {int priomap; } ;



 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct netprio_map*,int ) ;
 struct net_device* FUNC_2 (void*) ;
 int VAR_1 ;
 struct netprio_map* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
    unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_2(VAR_4);
 struct netprio_map *VAR_6;






 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_3(VAR_5->priomap);
  FUNC_0(VAR_5->priomap, ((void*)0));
  if (VAR_6)
   FUNC_1(VAR_6, VAR_1);
  break;
 }
 return VAR_0;
}
