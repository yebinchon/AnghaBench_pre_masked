
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net*,int ,int ) ;
 int FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,scalar_t__,int ) ;
 int FUNC_5 (struct net*,int ,int ,int ) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct nlmsghdr*) ;

__attribute__((used)) static void FUNC_9(struct net *VAR_4, struct sk_buff *VAR_5,
     int VAR_6)
{
 struct nlmsghdr *VAR_7 = FUNC_6(VAR_5);
 struct sk_buff *VAR_8;
 int VAR_9;

 if (FUNC_8(VAR_7) &&
     !FUNC_3(VAR_4, VAR_2))
  return;

 VAR_8 = FUNC_7(VAR_3, VAR_1);
 if (VAR_8 == ((void*)0))
  goto err;

 VAR_9 = FUNC_2(VAR_8, VAR_4, FUNC_0(VAR_5).portid,
          VAR_7->nlmsg_seq);
 if (VAR_9 < 0) {
  FUNC_1(VAR_8);
  goto err;
 }

 FUNC_4(VAR_8, VAR_4, FUNC_0(VAR_5).portid, VAR_2,
         FUNC_8(VAR_7), VAR_1);
 return;
err:
 FUNC_5(VAR_4, FUNC_0(VAR_5).portid, VAR_2,
     -VAR_0);
}
