
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int dev; TYPE_1__* ops; int xfrm; } ;
struct TYPE_3__ {int (* local_out ) (struct net*,int ,struct sk_buff*) ;int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,int ,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct net*,int ,struct sk_buff*,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net*,int ,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (struct sk_buff*,int) ;
 struct net* FUNC_8 (int ) ;

int FUNC_9(struct sk_buff *VAR_3, int VAR_4)
{
 struct net *VAR_5 = FUNC_8(FUNC_4(VAR_3)->xfrm);

 while (FUNC_1((VAR_4 = FUNC_7(VAR_3, VAR_4)) == 0)) {
  FUNC_3(VAR_3);

  VAR_4 = FUNC_4(VAR_3)->ops->local_out(VAR_5, VAR_3->sk, VAR_3);
  if (FUNC_6(VAR_4 != 1))
   goto out;

  if (!FUNC_4(VAR_3)->xfrm)
   return FUNC_0(VAR_5, VAR_3->sk, VAR_3);

  VAR_4 = FUNC_2(FUNC_4(VAR_3)->ops->family,
         VAR_1, VAR_5, VAR_3->sk, VAR_3,
         ((void*)0), FUNC_4(VAR_3)->dev, VAR_2);
  if (FUNC_6(VAR_4 != 1))
   goto out;
 }

 if (VAR_4 == -VAR_0)
  VAR_4 = 0;

out:
 return VAR_4;
}
