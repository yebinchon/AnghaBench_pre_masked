
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {int ifindex; } ;
struct inet6_fill_args {scalar_t__ netnsid; int flags; int event; int seq; int portid; } ;
struct ifaddrmsg {int dummy; } ;
struct ifacaddr6 {int aca_tstamp; int aca_cstamp; int aca_addr; int aca_rt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_8 (struct nlmsghdr*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_8, struct ifacaddr6 *VAR_9,
          struct inet6_fill_args *VAR_10)
{
 struct net_device *VAR_11 = FUNC_0(VAR_9->aca_rt);
 int VAR_12 = VAR_11 ? VAR_11->ifindex : 1;
 struct nlmsghdr *VAR_13;
 u8 VAR_14 = VAR_7;

 if (FUNC_1(&VAR_9->aca_addr) & VAR_3)
  VAR_14 = VAR_6;

 VAR_13 = FUNC_6(VAR_8, VAR_10->portid, VAR_10->seq, VAR_10->event,
   sizeof(struct ifaddrmsg), VAR_10->flags);
 if (!VAR_13)
  return -VAR_0;

 if (VAR_10->netnsid >= 0 &&
     FUNC_3(VAR_8, VAR_4, VAR_10->netnsid))
  return -VAR_0;

 FUNC_8(VAR_13, 128, VAR_2, VAR_14, VAR_12);
 if (FUNC_2(VAR_8, VAR_1, &VAR_9->aca_addr) < 0 ||
     FUNC_7(VAR_8, VAR_9->aca_cstamp, VAR_9->aca_tstamp,
     VAR_5, VAR_5) < 0) {
  FUNC_4(VAR_8, VAR_13);
  return -VAR_0;
 }

 FUNC_5(VAR_8, VAR_13);
 return 0;
}
