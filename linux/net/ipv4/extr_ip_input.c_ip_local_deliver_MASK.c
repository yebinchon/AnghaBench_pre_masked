
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct net*,int *,struct sk_buff*,int ,int *,int ) ;
 int VAR_2 ;
 struct net* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net*,struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;

int FUNC_5(struct sk_buff *VAR_4)
{



 struct net *VAR_5 = FUNC_1(VAR_4->dev);

 if (FUNC_4(FUNC_3(VAR_4))) {
  if (FUNC_2(VAR_5, VAR_4, VAR_0))
   return 0;
 }

 return FUNC_0(VAR_1, VAR_2,
         VAR_5, ((void*)0), VAR_4, VAR_4->dev, ((void*)0),
         VAR_3);
}
