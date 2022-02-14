
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ematch {int dummy; } ;
struct sk_buff {int dummy; } ;
struct canid_match {int rules_count; int rules_raw; } ;
struct can_filter {int dummy; } ;


 int VAR_0 ;
 struct canid_match* FUNC_0 (struct tcf_ematch*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct tcf_ematch *VAR_2)
{
 struct canid_match *VAR_3 = FUNC_0(VAR_2);





 if (FUNC_1(VAR_1, sizeof(struct can_filter) * VAR_3->rules_count,
     &VAR_3->rules_raw) < 0)
  return -VAR_0;

 return 0;
}
