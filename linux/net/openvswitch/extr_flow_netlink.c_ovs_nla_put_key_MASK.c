
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sw_flow_key const*,struct sw_flow_key const*,int,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;

int FUNC_3(const struct sw_flow_key *VAR_1,
      const struct sw_flow_key *VAR_2, int VAR_3, bool VAR_4,
      struct sk_buff *VAR_5)
{
 int VAR_6;
 struct nlattr *VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_3);
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;
 FUNC_1(VAR_5, VAR_7);

 return 0;
}
