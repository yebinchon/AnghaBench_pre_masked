
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev; } ;
struct rt6_info {int rt6i_gateway; TYPE_2__ dst; } ;
struct fib6_config {scalar_t__ fc_ifindex; int fc_flags; int fc_gateway; } ;
struct TYPE_3__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rt6_info*) ;

__attribute__((used)) static int FUNC_2(struct rt6_info *VAR_2, struct fib6_config *VAR_3)
{
 int VAR_4 = -VAR_0;

 if (VAR_3->fc_ifindex && VAR_2->dst.dev->ifindex != VAR_3->fc_ifindex)
  goto out;

 if (VAR_3->fc_flags & VAR_1 &&
     !FUNC_0(&VAR_3->fc_gateway, &VAR_2->rt6i_gateway))
  goto out;

 VAR_4 = FUNC_1(VAR_2);
out:
 return VAR_4;
}
