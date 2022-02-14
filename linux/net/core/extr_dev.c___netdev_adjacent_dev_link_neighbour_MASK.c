
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lower; int upper; } ;
struct net_device {TYPE_1__ adj_list; } ;


 int FUNC_0 (struct net_device*,struct net_device*,int *,int *,void*,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
      struct net_device *VAR_1,
      void *VAR_2, bool VAR_3)
{
 return FUNC_0(VAR_0, VAR_1,
      &VAR_0->adj_list.upper,
      &VAR_1->adj_list.lower,
      VAR_2, VAR_3);
}
