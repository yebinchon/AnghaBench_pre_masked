
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlmsgerr {int error; int msg; } ;
struct net_device {int dummy; } ;
struct net {int genl_sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct nlmsghdr*,int) ;
 scalar_t__ FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ) ;

int FUNC_7(struct net_device *VAR_4,
     u32 VAR_5,
     u32 VAR_6,
     struct nlmsghdr *VAR_7,
     int VAR_8)
{
 struct nlmsghdr *VAR_9;
 struct nlmsgerr *VAR_10;
 struct sk_buff *VAR_11;
 struct net *VAR_12;

 VAR_11 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_4);

 VAR_9 = FUNC_5(VAR_11, VAR_6, VAR_5,
   VAR_3, sizeof(*VAR_10), 0);
 VAR_10 = (struct nlmsgerr *)FUNC_2(VAR_9);
 VAR_10->error = VAR_8;
 FUNC_1(&VAR_10->msg, VAR_7, sizeof(*VAR_9));

 FUNC_3(VAR_11, VAR_9);

 return FUNC_6(VAR_12->genl_sock, VAR_11, VAR_6);
}
