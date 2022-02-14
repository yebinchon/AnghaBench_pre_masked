
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {int (* nlattr_to_obj ) (struct nlattr**,struct net*,void*) ;int nla_policy; int nlattr_max; } ;
struct nf_conntrack_l4proto {TYPE_1__ ctnl_timeout; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nlattr** FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct nlattr**) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_3 (struct nlattr**,struct net*,void*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_2,
     const struct nf_conntrack_l4proto *VAR_3,
     struct net *VAR_4, const struct nlattr *VAR_5)
{
 struct nlattr **VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_3->ctnl_timeout.nlattr_max + 1, sizeof(*VAR_6),
       VAR_1);

 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6,
       VAR_3->ctnl_timeout.nlattr_max,
       VAR_5,
       VAR_3->ctnl_timeout.nla_policy,
       ((void*)0));
 if (VAR_7 < 0)
  goto err;

 VAR_7 = VAR_3->ctnl_timeout.nlattr_to_obj(VAR_6, VAR_4, VAR_2);

err:
 FUNC_1(VAR_6);
 return VAR_7;
}
