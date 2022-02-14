
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_skbprio_qopt {int limit; } ;
struct sk_buff {int len; } ;
struct Qdisc {int limit; } ;
typedef int opt ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,struct tc_skbprio_qopt*) ;

__attribute__((used)) static int FUNC_1(struct Qdisc *VAR_1, struct sk_buff *VAR_2)
{
 struct tc_skbprio_qopt VAR_3;

 VAR_3.limit = VAR_1->limit;

 if (FUNC_0(VAR_2, VAR_0, sizeof(VAR_3), &VAR_3))
  return -1;

 return VAR_2->len;
}
