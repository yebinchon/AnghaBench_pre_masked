
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inet6_ifaddr {int flags; int prefix_len; unsigned long valid_lft; unsigned long prefered_lft; scalar_t__ rt_priority; TYPE_1__* idev; int addr; int lock; int tstamp; } ;
struct ifa6_config {unsigned long valid_lft; unsigned long preferred_lft; int ifa_flags; scalar_t__ rt_priority; } ;
typedef enum cleanup_prefix_rt_t { ____Placeholder_cleanup_prefix_rt_t } cleanup_prefix_rt_t ;
typedef scalar_t__ clock_t ;
struct TYPE_2__ {int lock; int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int,scalar_t__,int ,scalar_t__,scalar_t__,int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (struct inet6_ifaddr*,unsigned long*) ;
 int FUNC_6 (struct inet6_ifaddr*,unsigned long,int) ;
 int FUNC_7 (int ,struct inet6_ifaddr*) ;
 int VAR_17 ;
 scalar_t__ FUNC_8 (unsigned long) ;
 int FUNC_9 (TYPE_1__*,struct inet6_ifaddr*,unsigned long,unsigned long,int,int ) ;
 int FUNC_10 (struct inet6_ifaddr*,scalar_t__,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct inet6_ifaddr *VAR_18, struct ifa6_config *VAR_19)
{
 u32 VAR_20;
 clock_t VAR_21;
 unsigned long VAR_22;
 bool VAR_23;
 bool VAR_24;

 FUNC_0();

 if (!VAR_19->valid_lft || VAR_19->preferred_lft > VAR_19->valid_lft)
  return -VAR_2;

 if (VAR_19->ifa_flags & VAR_9 &&
     (VAR_18->flags & VAR_14 || VAR_18->prefix_len != 64))
  return -VAR_2;

 if (!(VAR_18->flags & VAR_15) || VAR_18->flags & VAR_6)
  VAR_19->ifa_flags &= ~VAR_12;

 VAR_22 = FUNC_3(VAR_19->valid_lft, VAR_5);
 if (FUNC_1(VAR_22)) {
  VAR_21 = FUNC_8(VAR_22 * VAR_5);
  VAR_19->valid_lft = VAR_22;
  VAR_20 = VAR_16;
 } else {
  VAR_21 = 0;
  VAR_20 = 0;
  VAR_19->ifa_flags |= VAR_13;
 }

 VAR_22 = FUNC_3(VAR_19->preferred_lft, VAR_5);
 if (FUNC_1(VAR_22)) {
  if (VAR_22 == 0)
   VAR_19->ifa_flags |= VAR_7;
  VAR_19->preferred_lft = VAR_22;
 }

 FUNC_11(&VAR_18->lock);
 VAR_23 = VAR_18->flags & VAR_9;
 VAR_24 = VAR_18->flags & VAR_13 &&
     !(VAR_18->flags & VAR_11);
 VAR_18->flags &= ~(VAR_7 | VAR_13 | VAR_10 |
   VAR_8 | VAR_9 |
   VAR_11);
 VAR_18->flags |= VAR_19->ifa_flags;
 VAR_18->tstamp = VAR_17;
 VAR_18->valid_lft = VAR_19->valid_lft;
 VAR_18->prefered_lft = VAR_19->preferred_lft;

 if (VAR_19->rt_priority && VAR_19->rt_priority != VAR_18->rt_priority)
  VAR_18->rt_priority = VAR_19->rt_priority;

 FUNC_12(&VAR_18->lock);
 if (!(VAR_18->flags&VAR_15))
  FUNC_7(0, VAR_18);

 if (!(VAR_19->ifa_flags & VAR_11)) {
  int VAR_25 = -VAR_3;

  if (VAR_24)
   VAR_25 = FUNC_10(VAR_18, VAR_21, VAR_20);


  if (VAR_25 == -VAR_3) {
   FUNC_2(&VAR_18->addr, VAR_18->prefix_len,
           VAR_18->rt_priority, VAR_18->idev->dev,
           VAR_21, VAR_20, VAR_4);
  }
 } else if (VAR_24) {
  enum cleanup_prefix_rt_t VAR_26;
  unsigned long VAR_27;

  FUNC_13(&VAR_18->idev->lock);
  VAR_26 = FUNC_5(VAR_18, &VAR_27);
  FUNC_14(&VAR_18->idev->lock);

  if (VAR_26 != VAR_1) {
   FUNC_6(VAR_18, VAR_27,
    VAR_26 == VAR_0);
  }
 }

 if (VAR_23 || VAR_18->flags & VAR_9) {
  if (VAR_23 &&
      !(VAR_18->flags & VAR_9)) {
   VAR_19->valid_lft = 0;
   VAR_19->preferred_lft = 0;
  }
  FUNC_9(VAR_18->idev, VAR_18, VAR_19->valid_lft,
     VAR_19->preferred_lft, !VAR_23,
     VAR_17);
 }

 FUNC_4();

 return 0;
}
