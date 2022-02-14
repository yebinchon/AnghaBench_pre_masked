
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_helper {int expect_class_max; TYPE_1__* expect_policy; } ;
struct TYPE_2__ {int max_expected; int timeout; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_6,
   struct nf_conntrack_helper *VAR_7)
{
 int VAR_8;
 struct nlattr *VAR_9, *VAR_10;

 VAR_9 = FUNC_2(VAR_6, VAR_0);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_3(VAR_6, VAR_5,
    FUNC_0(VAR_7->expect_class_max + 1)))
  goto nla_put_failure;

 for (VAR_8 = 0; VAR_8 < VAR_7->expect_class_max + 1; VAR_8++) {
  VAR_10 = FUNC_2(VAR_6, (VAR_4 + VAR_8));
  if (VAR_10 == ((void*)0))
   goto nla_put_failure;

  if (FUNC_4(VAR_6, VAR_3,
       VAR_7->expect_policy[VAR_8].name))
   goto nla_put_failure;

  if (FUNC_3(VAR_6, VAR_1,
     FUNC_0(VAR_7->expect_policy[VAR_8].max_expected)))
   goto nla_put_failure;

  if (FUNC_3(VAR_6, VAR_2,
     FUNC_0(VAR_7->expect_policy[VAR_8].timeout)))
   goto nla_put_failure;

  FUNC_1(VAR_6, VAR_10);
 }
 FUNC_1(VAR_6, VAR_9);
 return 0;

nla_put_failure:
 return -1;
}
