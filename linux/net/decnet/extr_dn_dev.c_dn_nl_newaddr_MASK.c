
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int name; int dn_ptr; } ;
struct net {int dummy; } ;
struct ifaddrmsg {int ifa_scope; int ifa_flags; int ifa_index; } ;
struct dn_ifaddr {int ifa_label; struct dn_dev* ifa_dev; int ifa_scope; int ifa_flags; void* ifa_address; void* ifa_local; } ;
struct dn_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct net_device* FUNC_0 (int *,int ) ;
 struct dn_ifaddr* FUNC_1 () ;
 struct dn_dev* FUNC_2 (struct net_device*,int*) ;
 int FUNC_3 (struct dn_ifaddr*) ;
 int FUNC_4 (struct dn_dev*,struct dn_ifaddr*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct net*,int *) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 void* FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (int ,struct nlattr*,int ) ;
 struct ifaddrmsg* FUNC_11 (struct nlmsghdr*) ;
 int FUNC_12 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 struct dn_dev* FUNC_13 (int ) ;
 struct net* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_13, struct nlmsghdr *VAR_14,
    struct netlink_ext_ack *VAR_15)
{
 struct net *VAR_16 = FUNC_14(VAR_13->sk);
 struct nlattr *VAR_17[VAR_9+1];
 struct net_device *VAR_18;
 struct dn_dev *VAR_19;
 struct ifaddrmsg *VAR_20;
 struct dn_ifaddr *VAR_21;
 int VAR_22;

 if (!FUNC_7(VAR_13, VAR_0))
  return -VAR_4;

 if (!FUNC_6(VAR_16, &VAR_12))
  return -VAR_1;

 VAR_22 = FUNC_12(VAR_14, sizeof(*VAR_20), VAR_17, VAR_9,
         VAR_11, VAR_15);
 if (VAR_22 < 0)
  return VAR_22;

 if (VAR_17[VAR_8] == ((void*)0))
  return -VAR_1;

 VAR_20 = FUNC_11(VAR_14);
 if ((VAR_18 = FUNC_0(&VAR_12, VAR_20->ifa_index)) == ((void*)0))
  return -VAR_3;

 if ((VAR_19 = FUNC_13(VAR_18->dn_ptr)) == ((void*)0)) {
  VAR_19 = FUNC_2(VAR_18, &VAR_22);
  if (!VAR_19)
   return VAR_22;
 }

 if ((VAR_21 = FUNC_1()) == ((void*)0))
  return -VAR_2;

 if (VAR_17[VAR_5] == ((void*)0))
  VAR_17[VAR_5] = VAR_17[VAR_8];

 VAR_21->ifa_local = FUNC_8(VAR_17[VAR_8]);
 VAR_21->ifa_address = FUNC_8(VAR_17[VAR_5]);
 VAR_21->ifa_flags = VAR_17[VAR_6] ? FUNC_9(VAR_17[VAR_6]) :
      VAR_20->ifa_flags;
 VAR_21->ifa_scope = VAR_20->ifa_scope;
 VAR_21->ifa_dev = VAR_19;

 if (VAR_17[VAR_7])
  FUNC_10(VAR_21->ifa_label, VAR_17[VAR_7], VAR_10);
 else
  FUNC_5(VAR_21->ifa_label, VAR_18->name, VAR_10);

 VAR_22 = FUNC_4(VAR_19, VAR_21);
 if (VAR_22)
  FUNC_3(VAR_21);

 return VAR_22;
}
