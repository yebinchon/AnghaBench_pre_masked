
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct prefix_info {int prefix_len; int prefix; scalar_t__ autoconf; scalar_t__ onlink; int prefered; int valid; } ;
struct net_device {int name; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int * s6_addr; } ;
struct TYPE_3__ {scalar_t__ autoconf; } ;
struct inet6_dev {int lock; TYPE_2__ token; TYPE_1__ cnf; } ;
struct in6_addr {struct in6_addr* s6_addr; } ;
struct fib6_info {int dummy; } ;
typedef int clock_t ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct fib6_info* FUNC_1 (int *,int,struct net_device*,int,int ,int) ;
 int FUNC_2 (struct net*,struct net_device*,struct prefix_info*,struct inet6_dev*,struct in6_addr*,int,int ,int,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,int ,struct net_device*,int ,int,int ) ;
 unsigned long FUNC_4 (scalar_t__,unsigned long) ;
 struct net* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct fib6_info*) ;
 int FUNC_7 (struct fib6_info*) ;
 int FUNC_8 (struct fib6_info*,scalar_t__) ;
 struct inet6_dev* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct inet6_dev*) ;
 int FUNC_11 (int ,struct inet6_dev*,struct prefix_info*) ;
 int FUNC_12 (struct net*,struct fib6_info*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct in6_addr*,struct net_device*) ;
 int FUNC_16 (struct in6_addr*,int ,struct inet6_dev*) ;
 scalar_t__ FUNC_17 (struct in6_addr*,struct inet6_dev*) ;
 scalar_t__ FUNC_18 (struct inet6_dev*) ;
 scalar_t__ VAR_11 ;
 int FUNC_19 (unsigned long) ;
 int FUNC_20 (struct in6_addr*,int *,int) ;
 int FUNC_21 (struct net*,struct net_device*,struct prefix_info*,struct inet6_dev*,struct in6_addr*,int,int ,int,int,scalar_t__,scalar_t__,int) ;
 int FUNC_22 (char*,int) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (struct net_device*,char*) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

void FUNC_28(struct net_device *VAR_12, u8 *VAR_13, int VAR_14, bool VAR_15)
{
 struct prefix_info *VAR_16;
 __u32 VAR_17;
 __u32 VAR_18;
 int VAR_19, VAR_20;
 u32 VAR_21 = 0;
 struct inet6_dev *VAR_22;
 struct net *VAR_23 = FUNC_5(VAR_12);

 VAR_16 = (struct prefix_info *) VAR_13;

 if (VAR_14 < sizeof(struct prefix_info)) {
  FUNC_24(VAR_12, "addrconf: prefix option too short\n");
  return;
 }





 VAR_19 = FUNC_14(&VAR_16->prefix);

 if (VAR_19 & (VAR_4|VAR_3))
  return;

 VAR_17 = FUNC_25(VAR_16->valid);
 VAR_18 = FUNC_25(VAR_16->prefered);

 if (VAR_18 > VAR_17) {
  FUNC_23("addrconf: prefix option has invalid lifetime\n");
  return;
 }

 VAR_22 = FUNC_9(VAR_12);

 if (!VAR_22) {
  FUNC_22("addrconf: device %s not configured\n",
        VAR_12->name);
  return;
 }







 if (VAR_16->onlink) {
  struct fib6_info *VAR_24;
  unsigned long VAR_25;






  if (VAR_1 > VAR_10)
   VAR_25 = FUNC_4(VAR_17, VAR_1);
  else
   VAR_25 = FUNC_4(VAR_17, VAR_10);

  if (FUNC_0(VAR_25))
   VAR_25 *= VAR_1;

  VAR_24 = FUNC_1(&VAR_16->prefix,
            VAR_16->prefix_len,
            VAR_12,
            VAR_5 | VAR_8,
            VAR_6, 1);

  if (VAR_24) {

   if (VAR_17 == 0) {
    FUNC_12(VAR_23, VAR_24);
    VAR_24 = ((void*)0);
   } else if (FUNC_0(VAR_25)) {

    FUNC_8(VAR_24, VAR_11 + VAR_25);
   } else {
    FUNC_6(VAR_24);
   }
  } else if (VAR_17) {
   clock_t VAR_26 = 0;
   int VAR_27 = VAR_5 | VAR_8;
   if (FUNC_0(VAR_25)) {

    VAR_27 |= VAR_7;
    VAR_26 = FUNC_19(VAR_25);
   }
   FUNC_3(&VAR_16->prefix, VAR_16->prefix_len,
           0, VAR_12, VAR_26, VAR_27,
           VAR_0);
  }
  FUNC_7(VAR_24);
 }



 if (VAR_16->autoconf && VAR_22->cnf.autoconf) {
  struct in6_addr VAR_28;
  bool VAR_29 = 0, VAR_30 = 0;

  if (VAR_16->prefix_len == 64) {
   FUNC_20(&VAR_28, &VAR_16->prefix, 8);

   if (!FUNC_13(&VAR_22->token)) {
    FUNC_26(&VAR_22->lock);
    FUNC_20(VAR_28.s6_addr + 8,
           VAR_22->token.s6_addr + 8, 8);
    FUNC_27(&VAR_22->lock);
    VAR_29 = 1;
   } else if (FUNC_18(VAR_22) &&
       !FUNC_16(&VAR_28, 0,
         VAR_22)) {
    VAR_21 |= VAR_2;
    goto ok;
   } else if (FUNC_15(VAR_28.s6_addr + 8, VAR_12) &&
       FUNC_17(VAR_28.s6_addr + 8, VAR_22)) {
    goto put;
   } else {
    VAR_30 = 1;
   }
   goto ok;
  }
  FUNC_22("IPv6 addrconf: prefix with wrong length %d\n",
        VAR_16->prefix_len);
  goto put;

ok:
  VAR_20 = FUNC_2(VAR_23, VAR_12, VAR_16, VAR_22,
         &VAR_28, VAR_19,
         VAR_21, VAR_15,
         VAR_29, VAR_17,
         VAR_18);
  if (VAR_20)
   goto put;




  FUNC_21(VAR_23, VAR_12, VAR_16, VAR_22, &VAR_28,
           VAR_19, VAR_21, VAR_15,
           VAR_29, VAR_17,
           VAR_18,
           VAR_30);
 }
 FUNC_11(VAR_9, VAR_22, VAR_16);
put:
 FUNC_10(VAR_22);
}
