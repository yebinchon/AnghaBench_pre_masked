
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {struct net_device* dev; } ;
struct sec_path {int len; TYPE_2__** xvec; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int icmpv6_echo_ignore_all; } ;
struct TYPE_9__ {TYPE_3__ sysctl; } ;
struct net {TYPE_4__ ipv6; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int icmp6_type; int icmp6_mtu; int icmp6_code; } ;
struct TYPE_10__ {struct in6_addr daddr; struct in6_addr saddr; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ props; } ;


 int FUNC_0 (struct net*,struct inet6_dev*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 struct inet6_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct net* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct sk_buff*) ;
 struct icmp6hdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int,int ,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int VAR_7 ;
 TYPE_5__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (char*,struct in6_addr const*,struct in6_addr const*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 scalar_t__ FUNC_18 (struct sk_buff*,int ,int ) ;
 int FUNC_19 (struct sk_buff*) ;
 struct sec_path* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*,int) ;
 int FUNC_22 (int *,int ,struct sk_buff*) ;
 int FUNC_23 (int *,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_24(struct sk_buff *VAR_8)
{
 struct net *VAR_9 = FUNC_4(VAR_8->dev);
 struct net_device *VAR_10 = FUNC_5(VAR_8);
 struct inet6_dev *VAR_11 = FUNC_2(VAR_10);
 const struct in6_addr *VAR_12, *VAR_13;
 struct icmp6hdr *VAR_14;
 u8 VAR_15;
 bool VAR_16 = 0;

 if (!FUNC_22(((void*)0), VAR_5, VAR_8)) {
  struct sec_path *VAR_17 = FUNC_20(VAR_8);
  int VAR_18;

  if (!(VAR_17 && VAR_17->xvec[VAR_17->len - 1]->props.flags &
     VAR_6))
   goto drop_no_count;

  if (!FUNC_16(VAR_8, sizeof(*VAR_14) + sizeof(struct ipv6hdr)))
   goto drop_no_count;

  VAR_18 = FUNC_19(VAR_8);
  FUNC_21(VAR_8, sizeof(*VAR_14));

  if (!FUNC_23(((void*)0), VAR_5, VAR_8))
   goto drop_no_count;

  FUNC_21(VAR_8, VAR_18);
 }

 FUNC_1(FUNC_4(VAR_10), VAR_11, VAR_2);

 VAR_12 = &FUNC_11(VAR_8)->saddr;
 VAR_13 = &FUNC_11(VAR_8)->daddr;

 if (FUNC_18(VAR_8, VAR_4, VAR_7)) {
  FUNC_14("ICMPv6 checksum failed [%pI6c > %pI6c]\n",
        VAR_12, VAR_13);
  goto csum_error;
 }

 if (!FUNC_17(VAR_8, sizeof(*VAR_14)))
  goto discard_it;

 VAR_14 = FUNC_6(VAR_8);

 VAR_15 = VAR_14->icmp6_type;

 FUNC_0(FUNC_4(VAR_10), VAR_11, VAR_15);

 switch (VAR_15) {
 case 144:
  if (!VAR_9->ipv6.sysctl.icmpv6_echo_ignore_all)
   FUNC_7(VAR_8);
  break;

 case 145:
  VAR_16 = FUNC_15(VAR_8);
  break;

 case 134:





  if (!FUNC_16(VAR_8, sizeof(struct ipv6hdr)))
   goto discard_it;
  VAR_14 = FUNC_6(VAR_8);



 case 148:
 case 133:
 case 135:
  FUNC_8(VAR_8, VAR_15, VAR_14->icmp6_code, VAR_14->icmp6_mtu);
  break;

 case 128:
 case 129:
 case 131:
 case 132:
 case 130:
  FUNC_13(VAR_8);
  break;

 case 143:
  FUNC_9(VAR_8);
  break;

 case 141:
  FUNC_10(VAR_8);
  break;

 case 142:
 case 137:
 case 136:
 case 140:
 case 146:
 case 147:
 case 138:
 case 139:
  break;

 default:

  if (VAR_15 & VAR_3)
   break;

  FUNC_14("icmpv6: msg of unknown type [%pI6c > %pI6c]\n",
        VAR_12, VAR_13);






  FUNC_8(VAR_8, VAR_15, VAR_14->icmp6_code, VAR_14->icmp6_mtu);
 }




 if (VAR_16)
  FUNC_3(VAR_8);
 else
  FUNC_12(VAR_8);

 return 0;

csum_error:
 FUNC_1(FUNC_4(VAR_10), VAR_11, VAR_0);
discard_it:
 FUNC_1(FUNC_4(VAR_10), VAR_11, VAR_1);
drop_no_count:
 FUNC_12(VAR_8);
 return 0;
}
