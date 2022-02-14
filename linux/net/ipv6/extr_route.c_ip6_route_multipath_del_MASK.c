
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {scalar_t__ rtnh_ifindex; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib6_config {int fc_mp_len; int fc_flags; int fc_gateway; scalar_t__ fc_ifindex; scalar_t__ fc_mp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fib6_config*,struct netlink_ext_ack*) ;
 int FUNC_1 (struct fib6_config*,struct fib6_config*,int) ;
 struct nlattr* FUNC_2 (struct nlattr*,int,int ) ;
 int FUNC_3 (int *,struct nlattr*,int) ;
 int FUNC_4 (struct rtnexthop*) ;
 struct nlattr* FUNC_5 (struct rtnexthop*) ;
 struct rtnexthop* FUNC_6 (struct rtnexthop*,int*) ;
 scalar_t__ FUNC_7 (struct rtnexthop*,int) ;

__attribute__((used)) static int FUNC_8(struct fib6_config *VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 struct fib6_config VAR_4;
 struct rtnexthop *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = 1, VAR_9 = 0;

 VAR_6 = VAR_2->fc_mp_len;
 VAR_5 = (struct rtnexthop *)VAR_2->fc_mp;


 while (FUNC_7(VAR_5, VAR_6)) {
  FUNC_1(&VAR_4, VAR_2, sizeof(*VAR_2));
  if (VAR_5->rtnh_ifindex)
   VAR_4.fc_ifindex = VAR_5->rtnh_ifindex;

  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7 > 0) {
   struct nlattr *VAR_10, *VAR_11 = FUNC_5(VAR_5);

   VAR_10 = FUNC_2(VAR_11, VAR_7, VAR_0);
   if (VAR_10) {
    FUNC_3(&VAR_4.fc_gateway, VAR_10, 16);
    VAR_4.fc_flags |= VAR_1;
   }
  }
  VAR_8 = FUNC_0(&VAR_4, VAR_3);
  if (VAR_8)
   VAR_9 = VAR_8;

  VAR_5 = FUNC_6(VAR_5, &VAR_6);
 }

 return VAR_9;
}
