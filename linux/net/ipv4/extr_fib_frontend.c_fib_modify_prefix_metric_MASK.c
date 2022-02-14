
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; } ;
struct in_ifaddr {scalar_t__ ifa_address; scalar_t__ ifa_mask; int ifa_flags; scalar_t__ ifa_local; int ifa_prefixlen; int ifa_rt_priority; struct in_device* ifa_dev; } ;
struct in_device {struct net_device* dev; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,scalar_t__,int,struct in_ifaddr*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2(struct in_ifaddr *VAR_8, u32 VAR_9)
{
 __be32 VAR_10 = VAR_8->ifa_address & VAR_8->ifa_mask;
 struct in_device *VAR_11 = VAR_8->ifa_dev;
 struct net_device *VAR_12 = VAR_11->dev;

 if (!(VAR_12->flags & VAR_3) ||
     VAR_8->ifa_flags & (VAR_1 | VAR_0) ||
     FUNC_1(VAR_10) ||
     (VAR_10 == VAR_8->ifa_local && VAR_8->ifa_prefixlen == 32))
  return;


 FUNC_0(VAR_5,
    VAR_12->flags & VAR_2 ? VAR_6 : VAR_7,
    VAR_10, VAR_8->ifa_prefixlen, VAR_8, VAR_9);


 FUNC_0(VAR_4,
    VAR_12->flags & VAR_2 ? VAR_6 : VAR_7,
    VAR_10, VAR_8->ifa_prefixlen, VAR_8, VAR_8->ifa_rt_priority);
}
