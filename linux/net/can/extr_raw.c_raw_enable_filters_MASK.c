
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct can_filter {int can_mask; int can_id; } ;


 int FUNC_0 (struct net*,struct net_device*,int ,int ,int ,struct sock*,char*,struct sock*) ;
 int FUNC_1 (struct net*,struct net_device*,int ,int ,int ,struct sock*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct net *VAR_1, struct net_device *VAR_2,
         struct sock *VAR_3, struct can_filter *VAR_4,
         int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4[VAR_7].can_id,
          VAR_4[VAR_7].can_mask,
          VAR_0, VAR_3, "raw", VAR_3);
  if (VAR_6) {

   while (--VAR_7 >= 0)
    FUNC_1(VAR_1, VAR_2, VAR_4[VAR_7].can_id,
        VAR_4[VAR_7].can_mask,
        VAR_0, VAR_3);
   break;
  }
 }

 return VAR_6;
}
