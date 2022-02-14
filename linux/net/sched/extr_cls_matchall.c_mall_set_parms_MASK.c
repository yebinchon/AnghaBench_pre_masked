
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int classid; } ;
struct cls_mall_head {TYPE_1__ res; int exts; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_2 (struct net*,struct tcf_proto*,struct nlattr**,struct nlattr*,int *,int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1, struct tcf_proto *VAR_2,
     struct cls_mall_head *VAR_3,
     unsigned long VAR_4, struct nlattr **VAR_5,
     struct nlattr *VAR_6, bool VAR_7,
     struct netlink_ext_ack *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_5, VAR_6, &VAR_3->exts, VAR_7, 1,
    VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_5[VAR_0]) {
  VAR_3->res.classid = FUNC_0(VAR_5[VAR_0]);
  FUNC_1(VAR_2, &VAR_3->res, VAR_4);
 }
 return 0;
}
