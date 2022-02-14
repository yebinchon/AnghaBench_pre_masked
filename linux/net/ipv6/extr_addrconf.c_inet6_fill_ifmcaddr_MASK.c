
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct inet6_fill_args {scalar_t__ netnsid; int flags; int event; int seq; int portid; } ;
struct ifmcaddr6 {int mca_tstamp; int mca_cstamp; int mca_addr; TYPE_2__* idev; } ;
struct ifaddrmsg {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_7 (struct nlmsghdr*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_8, struct ifmcaddr6 *VAR_9,
          struct inet6_fill_args *VAR_10)
{
 struct nlmsghdr *VAR_11;
 u8 VAR_12 = VAR_7;
 int VAR_13 = VAR_9->idev->dev->ifindex;

 if (FUNC_0(&VAR_9->mca_addr) & VAR_3)
  VAR_12 = VAR_6;

 VAR_11 = FUNC_5(VAR_8, VAR_10->portid, VAR_10->seq, VAR_10->event,
   sizeof(struct ifaddrmsg), VAR_10->flags);
 if (!VAR_11)
  return -VAR_0;

 if (VAR_10->netnsid >= 0 &&
     FUNC_2(VAR_8, VAR_4, VAR_10->netnsid))
  return -VAR_0;

 FUNC_7(VAR_11, 128, VAR_1, VAR_12, VAR_13);
 if (FUNC_1(VAR_8, VAR_2, &VAR_9->mca_addr) < 0 ||
     FUNC_6(VAR_8, VAR_9->mca_cstamp, VAR_9->mca_tstamp,
     VAR_5, VAR_5) < 0) {
  FUNC_3(VAR_8, VAR_11);
  return -VAR_0;
 }

 FUNC_4(VAR_8, VAR_11);
 return 0;
}
