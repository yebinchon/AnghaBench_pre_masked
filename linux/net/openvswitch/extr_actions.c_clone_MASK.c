
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct datapath {int dummy; } ;


 int FUNC_0 (struct datapath*,struct sk_buff*,struct sw_flow_key*,int ,struct nlattr*,int,int,int) ;
 struct nlattr* FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr const*) ;
 struct nlattr* FUNC_4 (struct nlattr*,int*) ;

__attribute__((used)) static int FUNC_5(struct datapath *VAR_0, struct sk_buff *VAR_1,
   struct sw_flow_key *VAR_2, const struct nlattr *VAR_3,
   bool VAR_4)
{
 struct nlattr *VAR_5;
 struct nlattr *VAR_6;
 int VAR_7 = FUNC_3(VAR_3);
 bool VAR_8;


 VAR_6 = FUNC_1(VAR_3);
 VAR_8 = FUNC_2(VAR_6);
 VAR_5 = FUNC_4(VAR_6, &VAR_7);

 return FUNC_0(VAR_0, VAR_1, VAR_2, 0, VAR_5, VAR_7, VAR_4,
        !VAR_8);
}
