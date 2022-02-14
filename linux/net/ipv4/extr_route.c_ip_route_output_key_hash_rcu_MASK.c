
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtable {int dummy; } ;
struct net_device {int ifindex; int flags; } ;
struct net {struct net_device* loopback_dev; } ;
struct flowi4 {int flowi4_oif; int flowi4_flags; scalar_t__ flowi4_proto; void* daddr; void* saddr; int flowi4_scope; } ;
struct fib_result {scalar_t__ type; TYPE_1__* fi; int * table; } ;
struct TYPE_2__ {void* fib_prefsrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtable* FUNC_0 (int) ;
 struct net_device* FUNC_1 (struct fib_result) ;
 int FUNC_2 (struct fib_result) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct net*,void*,int) ;
 struct rtable* FUNC_5 (struct fib_result*,struct flowi4*,int,struct net_device*,unsigned int) ;
 struct net_device* FUNC_6 (struct net*,int) ;
 int FUNC_7 (struct net*,struct flowi4*,struct fib_result*,int ) ;
 int FUNC_8 (struct net*,struct fib_result*,struct flowi4*,struct sk_buff const*) ;
 void* FUNC_9 (int ) ;
 void* FUNC_10 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (void*) ;
 scalar_t__ FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net*,int) ;

struct rtable *FUNC_17(struct net *VAR_13, struct flowi4 *VAR_14,
         struct fib_result *VAR_15,
         const struct sk_buff *VAR_16)
{
 struct net_device *VAR_17 = ((void*)0);
 int VAR_18 = VAR_14->flowi4_oif;
 unsigned int VAR_19 = 0;
 struct rtable *VAR_20;
 int VAR_21;

 if (VAR_14->saddr) {
  if (FUNC_13(VAR_14->saddr) ||
      FUNC_11(VAR_14->saddr) ||
      FUNC_14(VAR_14->saddr)) {
   VAR_20 = FUNC_0(-VAR_0);
   goto out;
  }

  VAR_20 = FUNC_0(-VAR_1);
  if (VAR_14->flowi4_oif == 0 &&
      (FUNC_13(VAR_14->daddr) ||
       FUNC_11(VAR_14->daddr))) {

   VAR_17 = FUNC_4(VAR_13, VAR_14->saddr, 0);
   if (!VAR_17)
    goto out;
   VAR_14->flowi4_oif = VAR_17->ifindex;
   goto make_route;
  }

  if (!(VAR_14->flowi4_flags & VAR_3)) {

   if (!FUNC_4(VAR_13, VAR_14->saddr, 0))
    goto out;
  }
 }


 if (VAR_14->flowi4_oif) {
  VAR_17 = FUNC_6(VAR_13, VAR_14->flowi4_oif);
  VAR_20 = FUNC_0(-VAR_2);
  if (!VAR_17)
   goto out;


  if (!(VAR_17->flags & VAR_4) || !FUNC_3(VAR_17)) {
   VAR_20 = FUNC_0(-VAR_1);
   goto out;
  }
  if (FUNC_12(VAR_14->daddr) ||
      FUNC_11(VAR_14->daddr) ||
      VAR_14->flowi4_proto == VAR_6) {
   if (!VAR_14->saddr)
    VAR_14->saddr = FUNC_10(VAR_17, 0,
             VAR_12);
   goto make_route;
  }
  if (!VAR_14->saddr) {
   if (FUNC_13(VAR_14->daddr))
    VAR_14->saddr = FUNC_10(VAR_17, 0,
             VAR_14->flowi4_scope);
   else if (!VAR_14->daddr)
    VAR_14->saddr = FUNC_10(VAR_17, 0,
             VAR_11);
  }
 }

 if (!VAR_14->daddr) {
  VAR_14->daddr = VAR_14->saddr;
  if (!VAR_14->daddr)
   VAR_14->daddr = VAR_14->saddr = FUNC_9(VAR_5);
  VAR_17 = VAR_13->loopback_dev;
  VAR_14->flowi4_oif = VAR_7;
  VAR_15->type = VAR_9;
  VAR_19 |= VAR_8;
  goto make_route;
 }

 VAR_21 = FUNC_7(VAR_13, VAR_14, VAR_15, 0);
 if (VAR_21) {
  VAR_15->fi = ((void*)0);
  VAR_15->table = ((void*)0);
  if (VAR_14->flowi4_oif &&
      (FUNC_13(VAR_14->daddr) ||
      !FUNC_16(VAR_13, VAR_14->flowi4_oif))) {
   if (VAR_14->saddr == 0)
    VAR_14->saddr = FUNC_10(VAR_17, 0,
             VAR_12);
   VAR_15->type = VAR_10;
   goto make_route;
  }
  VAR_20 = FUNC_0(VAR_21);
  goto out;
 }

 if (VAR_15->type == VAR_9) {
  if (!VAR_14->saddr) {
   if (VAR_15->fi->fib_prefsrc)
    VAR_14->saddr = VAR_15->fi->fib_prefsrc;
   else
    VAR_14->saddr = VAR_14->daddr;
  }


  VAR_17 = FUNC_15(FUNC_1(*VAR_15)) ? :
   VAR_13->loopback_dev;




  VAR_18 = FUNC_2(*VAR_15);

  VAR_14->flowi4_oif = VAR_17->ifindex;
  VAR_19 |= VAR_8;
  goto make_route;
 }

 FUNC_8(VAR_13, VAR_15, VAR_14, VAR_16);

 VAR_17 = FUNC_1(*VAR_15);
 VAR_14->flowi4_oif = VAR_17->ifindex;


make_route:
 VAR_20 = FUNC_5(VAR_15, VAR_14, VAR_18, VAR_17, VAR_19);

out:
 return VAR_20;
}
