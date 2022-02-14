
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct Qdisc*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct Qdisc *VAR_0)
{
 struct sk_buff *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 FUNC_0(VAR_0, VAR_1);
 return VAR_1;
}
