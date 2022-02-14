
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int netdev_features_t ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sk_buff *VAR_1, struct Qdisc *VAR_2,
         struct sk_buff **VAR_3)
{
 struct sk_buff *VAR_4;
 netdev_features_t VAR_5 = FUNC_2(VAR_1);

 VAR_4 = FUNC_4(VAR_1, VAR_5 & ~VAR_0);

 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_1, VAR_2, VAR_3);
  return ((void*)0);
 }
 FUNC_1(VAR_1);
 return VAR_4;
}
