
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int type; int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4,
      const struct net_device *VAR_5,
      const struct net_device *VAR_6)
{
 if (VAR_5) {
  if (FUNC_3(VAR_4, VAR_0,
     FUNC_0(VAR_5->ifindex)))
   return -1;

  if (FUNC_2(VAR_4, VAR_1,
     FUNC_1(VAR_5->type)))
   return -1;
 }

 if (VAR_6) {
  if (FUNC_3(VAR_4, VAR_2,
     FUNC_0(VAR_6->ifindex)))
   return -1;

  if (FUNC_2(VAR_4, VAR_3,
     FUNC_1(VAR_6->type)))
   return -1;
 }

 return 0;
}
