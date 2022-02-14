
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lower; int upper; } ;
struct net_device {TYPE_1__ adj_list; } ;


 int FUNC_0 (struct net_device*,struct net_device*,int,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
         struct net_device *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, 1,
        &VAR_0->adj_list.upper,
        &VAR_1->adj_list.lower);
}
