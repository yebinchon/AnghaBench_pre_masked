
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ mdtype; } ;
struct ovs_key_nsh {TYPE_1__* context; TYPE_1__ base; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(const struct ovs_key_nsh *VAR_5, bool VAR_6,
        struct sk_buff *VAR_7)
{
 struct nlattr *VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_2(VAR_7, VAR_3, sizeof(VAR_5->base), &VAR_5->base))
  goto nla_put_failure;

 if (VAR_6 || VAR_5->base.mdtype == VAR_1) {
  if (FUNC_2(VAR_7, VAR_4,
       sizeof(VAR_5->context), VAR_5->context))
   goto nla_put_failure;
 }



 FUNC_0(VAR_7, VAR_8);

 return 0;

nla_put_failure:
 return -VAR_0;
}
