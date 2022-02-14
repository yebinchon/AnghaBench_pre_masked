
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int (* ndo_has_offload_stats ) (struct net_device const*,int) ;scalar_t__ ndo_get_offload_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device const*,int) ;

__attribute__((used)) static int FUNC_4(const struct net_device *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 int VAR_5;

 if (!(VAR_2->netdev_ops && VAR_2->netdev_ops->ndo_has_offload_stats &&
       VAR_2->netdev_ops->ndo_get_offload_stats))
  return 0;

 for (VAR_4 = VAR_0;
      VAR_4 <= VAR_1; VAR_4++) {
  if (!VAR_2->netdev_ops->ndo_has_offload_stats(VAR_2, VAR_4))
   continue;
  VAR_5 = FUNC_2(VAR_4);
  VAR_3 += FUNC_1(VAR_5);
 }

 if (VAR_3 != 0)
  VAR_3 += FUNC_0(0);

 return VAR_3;
}
