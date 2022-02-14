
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_8__ {int all; } ;
struct TYPE_9__ {TYPE_3__ u; int u3; } ;
struct nf_conntrack_tuple_mask {TYPE_4__ src; } ;
struct TYPE_10__ {int protonum; } ;
struct TYPE_6__ {int all; } ;
struct TYPE_7__ {TYPE_1__ u; int u3; } ;
struct nf_conntrack_tuple {TYPE_5__ dst; TYPE_2__ src; } ;
struct nf_conntrack_l4proto {int dummy; } ;
typedef int m ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct nf_conntrack_tuple*) ;
 int FUNC_1 (struct sk_buff*,struct nf_conntrack_tuple*,struct nf_conntrack_l4proto const*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct nf_conntrack_tuple*,int,int) ;
 struct nf_conntrack_l4proto* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_1,
       const struct nf_conntrack_tuple *VAR_2,
       const struct nf_conntrack_tuple_mask *VAR_3)
{
 const struct nf_conntrack_l4proto *VAR_4;
 struct nf_conntrack_tuple VAR_5;
 struct nlattr *VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5, 0xFF, sizeof(VAR_5));
 FUNC_2(&VAR_5.src.u3, &VAR_3->src.u3, sizeof(VAR_5.src.u3));
 VAR_5.src.u.all = VAR_3->src.u.all;
 VAR_5.dst.protonum = VAR_2->dst.protonum;

 VAR_6 = FUNC_6(VAR_1, VAR_0);
 if (!VAR_6)
  goto nla_put_failure;

 FUNC_7();
 VAR_7 = FUNC_0(VAR_1, &VAR_5);
 if (VAR_7 >= 0) {
  VAR_4 = FUNC_4(VAR_2->dst.protonum);
  VAR_7 = FUNC_1(VAR_1, &VAR_5, VAR_4);
 }
 FUNC_8();

 if (FUNC_9(VAR_7 < 0))
  goto nla_put_failure;

 FUNC_5(VAR_1, VAR_6);

 return 0;

nla_put_failure:
 return -1;
}
