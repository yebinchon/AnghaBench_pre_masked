
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nla_policy {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (struct nlattr const*,int,int,struct nla_policy const*,unsigned int,struct netlink_ext_ack*,struct nlattr**) ;

int FUNC_1(struct nlattr **VAR_0, int VAR_1,
  const struct nlattr *VAR_2, int VAR_3,
  const struct nla_policy *VAR_4, unsigned int VAR_5,
  struct netlink_ext_ack *VAR_6)
{
 return FUNC_0(VAR_2, VAR_3, VAR_1, VAR_4, VAR_5,
        VAR_6, VAR_0);
}
