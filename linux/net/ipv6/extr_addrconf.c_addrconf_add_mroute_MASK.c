
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int ifindex; } ;
struct TYPE_2__ {int nl_net; } ;
struct fib6_config {int fc_dst_len; int fc_dst; TYPE_1__ fc_nlinfo; int fc_type; int fc_flags; int fc_ifindex; int fc_metric; int fc_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fib6_config*,int ,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5)
{
 struct fib6_config VAR_6 = {
  .fc_table = FUNC_4(VAR_5) ? : VAR_2,
  .fc_metric = VAR_1,
  .fc_ifindex = VAR_5->ifindex,
  .fc_dst_len = 8,
  .fc_flags = VAR_3,
  .fc_type = VAR_4,
  .fc_nlinfo.nl_net = FUNC_0(VAR_5),
 };

 FUNC_3(&VAR_6.fc_dst, FUNC_1(0xFF000000), 0, 0, 0);

 FUNC_2(&VAR_6, VAR_0, ((void*)0));
}
