
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct rt6_info {int rt6i_idev; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net*,int ,struct sk_buff*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct net* FUNC_4 (int ) ;

int FUNC_5(struct sk_buff *VAR_1)
{
 struct net *VAR_2 = FUNC_4(VAR_1->sk);
 struct rt6_info *VAR_3 = (struct rt6_info *)FUNC_3(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1->sk, VAR_1);
 if (VAR_4) {
  if (VAR_4 > 0)
   VAR_4 = FUNC_2(VAR_4);
  if (VAR_4)
   FUNC_0(VAR_2, VAR_3->rt6i_idev,
          VAR_0);
 }

 return VAR_4;
}
