
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* sk; struct net_device* dev; } ;
struct TYPE_4__ {scalar_t__ parent; } ;
struct net_device {int const features; TYPE_2__ dev; } ;
typedef int netdev_features_t ;
struct TYPE_3__ {int const sk_route_caps; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*,int const*,int const*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 char* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct sk_buff const*,int) ;

__attribute__((used)) static void FUNC_5(const struct sk_buff *VAR_1)
{
 static const netdev_features_t VAR_2;
 struct net_device *VAR_3 = VAR_1->dev;
 const char *VAR_4 = "";

 if (!FUNC_2())
  return;

 if (VAR_3) {
  if (VAR_3->dev.parent)
   VAR_4 = FUNC_1(VAR_3->dev.parent);
  else
   VAR_4 = FUNC_3(VAR_3);
 }
 FUNC_4(VAR_0, VAR_1, 0);
 FUNC_0(1, "%s: caps=(%pNF, %pNF)\n",
      VAR_4, VAR_3 ? &VAR_3->features : &VAR_2,
      VAR_1->sk ? &VAR_1->sk->sk_route_caps : &VAR_2);
}
