
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int data; } ;
struct flow_keys_basic {int dummy; } ;


 int FUNC_0 (struct sk_buff const*,int ,struct flow_keys_basic*,int ) ;
 int FUNC_1 (int *,struct sk_buff const*,struct flow_keys_basic*,int *,int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff const*) ;

u32 FUNC_3(const struct sk_buff *VAR_0)
{
 struct flow_keys_basic VAR_1;

 if (!FUNC_1(((void*)0), VAR_0, &VAR_1,
           ((void*)0), 0, 0, 0, 0))
  return 0;

 return FUNC_0(VAR_0, VAR_0->data, &VAR_1, FUNC_2(VAR_0));
}
