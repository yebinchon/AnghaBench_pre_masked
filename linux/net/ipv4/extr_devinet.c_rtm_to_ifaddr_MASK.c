
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int name; } ;
struct net {int dummy; } ;
struct in_ifaddr {int ifa_prefixlen; void* ifa_rt_priority; int ifa_label; void* ifa_broadcast; void* ifa_address; void* ifa_local; struct in_device* ifa_dev; int ifa_scope; void* ifa_flags; int ifa_mask; int hash; } ;
struct in_device {int arp_parms; } ;
struct ifaddrmsg {int ifa_prefixlen; void* ifa_flags; int ifa_scope; int ifa_index; } ;
struct ifa_cacheinfo {scalar_t__ ifa_valid; scalar_t__ ifa_prefered; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct in_ifaddr* FUNC_0 (int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 struct net_device* FUNC_2 (struct net*,int ) ;
 struct in_device* FUNC_3 (struct net_device*) ;
 int VAR_12 ;
 int FUNC_4 (struct in_device*) ;
 struct in_ifaddr* FUNC_5 () ;
 int FUNC_6 (struct in_ifaddr*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct in_device*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;
 struct ifa_cacheinfo* FUNC_11 (struct nlattr*) ;
 void* FUNC_12 (struct nlattr*) ;
 void* FUNC_13 (struct nlattr*) ;
 int FUNC_14 (int ,struct nlattr*,int ) ;
 struct ifaddrmsg* FUNC_15 (struct nlmsghdr*) ;
 int FUNC_16 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static struct in_ifaddr *FUNC_17(struct net *VAR_13, struct nlmsghdr *VAR_14,
           __u32 *VAR_15, __u32 *VAR_16,
           struct netlink_ext_ack *VAR_17)
{
 struct nlattr *VAR_18[VAR_9+1];
 struct in_ifaddr *VAR_19;
 struct ifaddrmsg *VAR_20;
 struct net_device *VAR_21;
 struct in_device *VAR_22;
 int VAR_23;

 VAR_23 = FUNC_16(VAR_14, sizeof(*VAR_20), VAR_18, VAR_9,
         VAR_12, VAR_17);
 if (VAR_23 < 0)
  goto errout;

 VAR_20 = FUNC_15(VAR_14);
 VAR_23 = -VAR_0;
 if (VAR_20->ifa_prefixlen > 32 || !VAR_18[VAR_8])
  goto errout;

 VAR_21 = FUNC_2(VAR_13, VAR_20->ifa_index);
 VAR_23 = -VAR_2;
 if (!VAR_21)
  goto errout;

 VAR_22 = FUNC_3(VAR_21);
 VAR_23 = -VAR_1;
 if (!VAR_22)
  goto errout;

 VAR_19 = FUNC_5();
 if (!VAR_19)




  goto errout;

 FUNC_8(VAR_22);
 FUNC_10(VAR_22->arp_parms);
 FUNC_4(VAR_22);

 if (!VAR_18[VAR_3])
  VAR_18[VAR_3] = VAR_18[VAR_8];

 FUNC_1(&VAR_19->hash);
 VAR_19->ifa_prefixlen = VAR_20->ifa_prefixlen;
 VAR_19->ifa_mask = FUNC_7(VAR_20->ifa_prefixlen);
 VAR_19->ifa_flags = VAR_18[VAR_6] ? FUNC_13(VAR_18[VAR_6]) :
      VAR_20->ifa_flags;
 VAR_19->ifa_scope = VAR_20->ifa_scope;
 VAR_19->ifa_dev = VAR_22;

 VAR_19->ifa_local = FUNC_12(VAR_18[VAR_8]);
 VAR_19->ifa_address = FUNC_12(VAR_18[VAR_3]);

 if (VAR_18[VAR_4])
  VAR_19->ifa_broadcast = FUNC_12(VAR_18[VAR_4]);

 if (VAR_18[VAR_7])
  FUNC_14(VAR_19->ifa_label, VAR_18[VAR_7], VAR_11);
 else
  FUNC_9(VAR_19->ifa_label, VAR_21->name, VAR_11);

 if (VAR_18[VAR_10])
  VAR_19->ifa_rt_priority = FUNC_13(VAR_18[VAR_10]);

 if (VAR_18[VAR_5]) {
  struct ifa_cacheinfo *VAR_24;

  VAR_24 = FUNC_11(VAR_18[VAR_5]);
  if (!VAR_24->ifa_valid || VAR_24->ifa_prefered > VAR_24->ifa_valid) {
   VAR_23 = -VAR_0;
   goto errout_free;
  }
  *VAR_15 = VAR_24->ifa_valid;
  *VAR_16 = VAR_24->ifa_prefered;
 }

 return VAR_19;

errout_free:
 FUNC_6(VAR_19);
errout:
 return FUNC_0(VAR_23);
}
