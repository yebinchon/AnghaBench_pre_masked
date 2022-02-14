
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_1__ src; } ;


 int VAR_0 ;


 int FUNC_0 (struct sk_buff*,struct nf_conntrack_tuple const*) ;
 int FUNC_1 (struct sk_buff*,struct nf_conntrack_tuple const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1,
        const struct nf_conntrack_tuple *VAR_2)
{
 int VAR_3 = 0;
 struct nlattr *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_4)
  goto nla_put_failure;

 switch (VAR_2->src.l3num) {
 case 129:
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 }

 FUNC_2(VAR_1, VAR_4);

 return VAR_3;

nla_put_failure:
 return -1;
}
