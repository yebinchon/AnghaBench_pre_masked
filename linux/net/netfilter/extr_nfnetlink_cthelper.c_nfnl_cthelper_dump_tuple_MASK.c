
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_5__ {int protonum; } ;
struct TYPE_4__ {int l3num; } ;
struct TYPE_6__ {TYPE_2__ dst; TYPE_1__ src; } ;
struct nf_conntrack_helper {TYPE_3__ tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_3,
    struct nf_conntrack_helper *VAR_4)
{
 struct nlattr *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (VAR_5 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_3(VAR_3, VAR_1,
    FUNC_0(VAR_4->tuple.src.l3num)))
  goto nla_put_failure;

 if (FUNC_4(VAR_3, VAR_2, VAR_4->tuple.dst.protonum))
  goto nla_put_failure;

 FUNC_1(VAR_3, VAR_5);
 return 0;

nla_put_failure:
 return -1;
}
