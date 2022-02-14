
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,int ,struct sk_buff*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct net *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->sk, VAR_2);
 if (VAR_3) {
  if (VAR_3 > 0)
   VAR_3 = FUNC_2(VAR_3);
  if (VAR_3)
   FUNC_0(VAR_1, VAR_0);
 }

 return VAR_3;
}
