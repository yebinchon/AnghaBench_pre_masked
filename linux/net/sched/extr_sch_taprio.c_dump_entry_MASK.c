
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sched_entry {int interval; int gate_mask; int command; int index; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6,
        const struct sched_entry *VAR_7)
{
 struct nlattr *VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_3(VAR_6, VAR_4, VAR_7->index))
  goto nla_put_failure;

 if (FUNC_4(VAR_6, VAR_2, VAR_7->command))
  goto nla_put_failure;

 if (FUNC_3(VAR_6, VAR_3,
   VAR_7->gate_mask))
  goto nla_put_failure;

 if (FUNC_3(VAR_6, VAR_5,
   VAR_7->interval))
  goto nla_put_failure;

 return FUNC_1(VAR_6, VAR_8);

nla_put_failure:
 FUNC_0(VAR_6, VAR_8);
 return -1;
}
