
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {TYPE_1__* idev; } ;
struct inet6_fill_args {int event; int netnsid; int flags; int seq; int portid; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct inet6_ifaddr*,struct inet6_fill_args*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_7 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_8(int VAR_4, struct inet6_ifaddr *VAR_5)
{
 struct sk_buff *VAR_6;
 struct net *VAR_7 = FUNC_1(VAR_5->idev->dev);
 struct inet6_fill_args VAR_8 = {
  .portid = 0,
  .seq = 0,
  .event = VAR_4,
  .flags = 0,
  .netnsid = -1,
 };
 int VAR_9 = -VAR_1;

 VAR_6 = FUNC_5(FUNC_3(), VAR_2);
 if (!VAR_6)
  goto errout;

 VAR_9 = FUNC_2(VAR_6, VAR_5, &VAR_8);
 if (VAR_9 < 0) {

  FUNC_0(VAR_9 == -VAR_0);
  FUNC_4(VAR_6);
  goto errout;
 }
 FUNC_6(VAR_6, VAR_7, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 if (VAR_9 < 0)
  FUNC_7(VAR_7, VAR_3, VAR_9);
}
