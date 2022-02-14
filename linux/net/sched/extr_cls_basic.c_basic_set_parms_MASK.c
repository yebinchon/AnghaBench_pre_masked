
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
struct basic_filter {struct tcf_proto* tp; TYPE_1__ res; int ematches; int exts; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_2 (struct tcf_proto*,struct nlattr*,int *) ;
 int FUNC_3 (struct net*,struct tcf_proto*,struct nlattr**,struct nlattr*,int *,int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_2, struct tcf_proto *VAR_3,
      struct basic_filter *VAR_4, unsigned long VAR_5,
      struct nlattr **VAR_6,
      struct nlattr *VAR_7, bool VAR_8,
      struct netlink_ext_ack *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_6, VAR_7, &VAR_4->exts, VAR_8, 1, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_3, VAR_6[VAR_1], &VAR_4->ematches);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_6[VAR_0]) {
  VAR_4->res.classid = FUNC_0(VAR_6[VAR_0]);
  FUNC_1(VAR_3, &VAR_4->res, VAR_5);
 }

 VAR_4->tp = VAR_3;
 return 0;
}
