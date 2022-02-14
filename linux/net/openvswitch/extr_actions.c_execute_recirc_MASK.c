
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct datapath {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct datapath*,struct sk_buff*,struct sw_flow_key*,int ,int *,int ,int,int) ;
 int FUNC_2 (struct sw_flow_key*) ;
 int FUNC_3 (struct nlattr const*) ;
 int FUNC_4 (struct sk_buff*,struct sw_flow_key*) ;

__attribute__((used)) static int FUNC_5(struct datapath *VAR_0, struct sk_buff *VAR_1,
     struct sw_flow_key *VAR_2,
     const struct nlattr *VAR_3, bool VAR_4)
{
 u32 VAR_5;

 if (!FUNC_2(VAR_2)) {
  int VAR_6;

  VAR_6 = FUNC_4(VAR_1, VAR_2);
  if (VAR_6)
   return VAR_6;
 }
 FUNC_0(!FUNC_2(VAR_2));

 VAR_5 = FUNC_3(VAR_3);
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5, ((void*)0), 0, VAR_4, 1);
}
