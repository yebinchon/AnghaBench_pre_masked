
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sw_flow_id {struct sw_flow_key* unmasked_key; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sw_flow_key* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sw_flow_key*,struct sw_flow_key const*,int) ;
 scalar_t__ FUNC_2 (struct sw_flow_id*,struct nlattr const*,int) ;

int FUNC_3(struct sw_flow_id *VAR_2, const struct nlattr *VAR_3,
      const struct sw_flow_key *VAR_4, bool VAR_5)
{
 struct sw_flow_key *VAR_6;

 if (FUNC_2(VAR_2, VAR_3, VAR_5))
  return 0;


 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_1(VAR_6, VAR_4, sizeof(*VAR_4));
 VAR_2->unmasked_key = VAR_6;

 return 0;
}
