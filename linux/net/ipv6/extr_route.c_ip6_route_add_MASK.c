
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct fib6_info {int dummy; } ;
struct fib6_config {int fc_nlinfo; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (struct fib6_info*) ;
 int FUNC_1 (struct fib6_info*) ;
 int FUNC_2 (struct fib6_info*,int *,struct netlink_ext_ack*) ;
 int FUNC_3 (struct fib6_info*) ;
 struct fib6_info* FUNC_4 (struct fib6_config*,int ,struct netlink_ext_ack*) ;

int FUNC_5(struct fib6_config *VAR_0, gfp_t VAR_1,
    struct netlink_ext_ack *VAR_2)
{
 struct fib6_info *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3, &VAR_0->fc_nlinfo, VAR_2);
 FUNC_3(VAR_3);

 return VAR_4;
}
