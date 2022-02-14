
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_dm_hw_entries {int num_entries; int * entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2,
     const struct net_dm_hw_entries *VAR_3)
{
 struct nlattr *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_entries; VAR_5++) {
  int VAR_6;

  VAR_6 = FUNC_0(VAR_2, &VAR_3->entries[VAR_5]);
  if (VAR_6)
   goto nla_put_failure;
 }

 FUNC_2(VAR_2, VAR_4);

 return 0;

nla_put_failure:
 FUNC_1(VAR_2, VAR_4);
 return -VAR_0;
}
