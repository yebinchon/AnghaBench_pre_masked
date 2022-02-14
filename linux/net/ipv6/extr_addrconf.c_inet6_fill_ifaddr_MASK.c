
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct inet6_ifaddr {int flags; scalar_t__ prefered_lft; scalar_t__ valid_lft; long tstamp; int rt_priority; int cstamp; int addr; int peer_addr; TYPE_2__* idev; int scope; int prefix_len; } ;
struct inet6_fill_args {scalar_t__ netnsid; int flags; int event; int seq; int portid; } ;
struct ifaddrmsg {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 long VAR_9 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,long,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct nlmsghdr*,int ,int,int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_10, struct inet6_ifaddr *VAR_11,
        struct inet6_fill_args *VAR_12)
{
 struct nlmsghdr *VAR_13;
 u32 VAR_14, VAR_15;

 VAR_13 = FUNC_6(VAR_10, VAR_12->portid, VAR_12->seq, VAR_12->event,
   sizeof(struct ifaddrmsg), VAR_12->flags);
 if (!VAR_13)
  return -VAR_0;

 FUNC_8(VAR_13, VAR_11->prefix_len, VAR_11->flags, FUNC_9(VAR_11->scope),
        VAR_11->idev->dev->ifindex);

 if (VAR_12->netnsid >= 0 &&
     FUNC_2(VAR_10, VAR_7, VAR_12->netnsid))
  goto error;

 if (!((VAR_11->flags&VAR_4) &&
       (VAR_11->prefered_lft == VAR_8))) {
  VAR_14 = VAR_11->prefered_lft;
  VAR_15 = VAR_11->valid_lft;
  if (VAR_14 != VAR_8) {
   long VAR_16 = (VAR_9 - VAR_11->tstamp)/VAR_1;
   if (VAR_14 > VAR_16)
    VAR_14 -= VAR_16;
   else
    VAR_14 = 0;
   if (VAR_15 != VAR_8) {
    if (VAR_15 > VAR_16)
     VAR_15 -= VAR_16;
    else
     VAR_15 = 0;
   }
  }
 } else {
  VAR_14 = VAR_8;
  VAR_15 = VAR_8;
 }

 if (!FUNC_0(&VAR_11->peer_addr)) {
  if (FUNC_1(VAR_10, VAR_5, &VAR_11->addr) < 0 ||
      FUNC_1(VAR_10, VAR_2, &VAR_11->peer_addr) < 0)
   goto error;
 } else
  if (FUNC_1(VAR_10, VAR_2, &VAR_11->addr) < 0)
   goto error;

 if (VAR_11->rt_priority &&
     FUNC_3(VAR_10, VAR_6, VAR_11->rt_priority))
  goto error;

 if (FUNC_7(VAR_10, VAR_11->cstamp, VAR_11->tstamp, VAR_14, VAR_15) < 0)
  goto error;

 if (FUNC_3(VAR_10, VAR_3, VAR_11->flags) < 0)
  goto error;

 FUNC_5(VAR_10, VAR_13);
 return 0;

error:
 FUNC_4(VAR_10, VAR_13);
 return -VAR_0;
}
