
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int *,int ) ;
 int FUNC_2 (struct sk_buff*,struct sw_flow_key*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sk_buff *VAR_1, struct sw_flow_key *VAR_2)
{
 if (FUNC_3(VAR_1)) {
  FUNC_0(FUNC_3(VAR_1));
  FUNC_1(VAR_1, ((void*)0), VAR_0);
  FUNC_2(VAR_1, VAR_2);
 }

 return 0;
}
