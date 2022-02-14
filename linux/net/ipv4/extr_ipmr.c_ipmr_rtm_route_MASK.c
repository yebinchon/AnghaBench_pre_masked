
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct mr_table {int dummy; } ;
struct mfcctl {int mfcc_parent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net*,struct mr_table*,struct mfcctl*,int,int) ;
 int FUNC_1 (struct mr_table*,struct mfcctl*,int) ;
 int FUNC_2 (struct net*,struct nlmsghdr*,struct mfcctl*,int*,struct mr_table**,struct netlink_ext_ack*) ;
 struct net* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
     struct netlink_ext_ack *VAR_3)
{
 struct net *VAR_4 = FUNC_3(VAR_1->sk);
 int VAR_5, VAR_6, VAR_7;
 struct mr_table *VAR_8;
 struct mfcctl VAR_9;

 VAR_6 = 0;
 VAR_8 = ((void*)0);
 VAR_5 = FUNC_2(VAR_4, VAR_2, &VAR_9, &VAR_6, &VAR_8, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_7 = VAR_5 ? VAR_9.mfcc_parent : -1;
 if (VAR_2->nlmsg_type == VAR_0)
  return FUNC_0(VAR_4, VAR_8, &VAR_9, VAR_6, VAR_7);
 else
  return FUNC_1(VAR_8, &VAR_9, VAR_7);
}
