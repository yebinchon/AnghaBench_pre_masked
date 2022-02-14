
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmsg {scalar_t__ rtm_scope; } ;
struct net_device {int flags; int * dn_ptr; } ;
struct flowidn {scalar_t__ flowidn_scope; int flowidn_oif; scalar_t__ daddr; } ;
struct dn_fib_res {scalar_t__ type; scalar_t__ scope; } ;
struct dn_fib_nh {int nh_flags; scalar_t__ nh_scope; struct net_device* nh_dev; int nh_oif; scalar_t__ nh_gw; } ;
struct dn_fib_info {int dummy; } ;
typedef int fld ;


 struct net_device* FUNC_0 (struct dn_fib_res) ;
 int FUNC_1 (struct dn_fib_res) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct net_device* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct flowidn*,struct dn_fib_res*) ;
 int FUNC_5 (struct dn_fib_res*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_7 (struct flowidn*,int ,int) ;

__attribute__((used)) static int FUNC_8(const struct rtmsg *VAR_11, struct dn_fib_info *VAR_12, struct dn_fib_nh *VAR_13)
{
 int VAR_14;

 if (VAR_13->nh_gw) {
  struct flowidn VAR_15;
  struct dn_fib_res VAR_16;

  if (VAR_13->nh_flags&VAR_4) {
   struct net_device *VAR_17;

   if (VAR_11->rtm_scope >= VAR_9)
    return -VAR_0;
   if (FUNC_6(VAR_13->nh_gw) != VAR_7)
    return -VAR_0;
   if ((VAR_17 = FUNC_2(&VAR_10, VAR_13->nh_oif)) == ((void*)0))
    return -VAR_2;
   if (!(VAR_17->flags&VAR_3))
    return -VAR_1;
   VAR_13->nh_dev = VAR_17;
   FUNC_3(VAR_17);
   VAR_13->nh_scope = VAR_9;
   return 0;
  }

  FUNC_7(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.daddr = VAR_13->nh_gw;
  VAR_15.flowidn_oif = VAR_13->nh_oif;
  VAR_15.flowidn_scope = VAR_11->rtm_scope + 1;

  if (VAR_15.flowidn_scope < VAR_9)
   VAR_15.flowidn_scope = VAR_9;

  if ((VAR_14 = FUNC_4(&VAR_15, &VAR_16)) != 0)
   return VAR_14;

  VAR_14 = -VAR_0;
  if (VAR_16.type != VAR_7 && VAR_16.type != VAR_6)
   goto out;
  VAR_13->nh_scope = VAR_16.scope;
  VAR_13->nh_oif = FUNC_1(VAR_16);
  VAR_13->nh_dev = FUNC_0(VAR_16);
  if (VAR_13->nh_dev == ((void*)0))
   goto out;
  FUNC_3(VAR_13->nh_dev);
  VAR_14 = -VAR_1;
  if (!(VAR_13->nh_dev->flags & VAR_3))
   goto out;
  VAR_14 = 0;
out:
  FUNC_5(&VAR_16);
  return VAR_14;
 } else {
  struct net_device *VAR_18;

  if (VAR_13->nh_flags&(VAR_5|VAR_4))
   return -VAR_0;

  VAR_18 = FUNC_2(&VAR_10, VAR_13->nh_oif);
  if (VAR_18 == ((void*)0) || VAR_18->dn_ptr == ((void*)0))
   return -VAR_2;
  if (!(VAR_18->flags&VAR_3))
   return -VAR_1;
  VAR_13->nh_dev = VAR_18;
  FUNC_3(VAR_13->nh_dev);
  VAR_13->nh_scope = VAR_8;
 }

 return 0;
}
