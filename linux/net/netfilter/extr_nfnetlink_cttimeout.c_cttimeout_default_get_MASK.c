
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_l4proto {int l4proto; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_18__ {int portid; } ;
struct TYPE_17__ {unsigned int* dccp_timeout; } ;
struct TYPE_16__ {unsigned int timeout; } ;
struct TYPE_15__ {unsigned int* timeouts; } ;
struct TYPE_14__ {unsigned int timeout; } ;
struct TYPE_13__ {unsigned int timeout; } ;
struct TYPE_12__ {unsigned int* timeouts; } ;
struct TYPE_11__ {unsigned int* timeouts; } ;
struct TYPE_10__ {unsigned int* timeouts; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_9__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (struct net*,struct sk_buff*,int ,int ,int ,int ,int ,struct nf_conntrack_l4proto const*,unsigned int*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 struct nf_conntrack_l4proto* FUNC_6 (int) ;
 TYPE_8__* FUNC_7 (struct net*) ;
 TYPE_7__* FUNC_8 (struct net*) ;
 TYPE_6__* FUNC_9 (struct net*) ;
 TYPE_5__* FUNC_10 (struct net*) ;
 TYPE_4__* FUNC_11 (struct net*) ;
 TYPE_3__* FUNC_12 (struct net*) ;
 TYPE_2__* FUNC_13 (struct net*) ;
 TYPE_1__* FUNC_14 (struct net*) ;
 int FUNC_15 (struct nlattr const* const) ;
 int FUNC_16 (struct nlattr const* const) ;
 struct sk_buff* FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct net *VAR_11, struct sock *VAR_12,
     struct sk_buff *VAR_13,
     const struct nlmsghdr *VAR_14,
     const struct nlattr * const VAR_15[],
     struct netlink_ext_ack *VAR_16)
{
 const struct nf_conntrack_l4proto *VAR_17;
 unsigned int *VAR_18 = ((void*)0);
 struct sk_buff *VAR_19;
 int VAR_20, VAR_21;
 __u16 VAR_22;
 __u8 VAR_23;

 if (!VAR_15[VAR_0] || !VAR_15[VAR_1])
  return -VAR_3;

 VAR_22 = FUNC_18(FUNC_15(VAR_15[VAR_0]));
 VAR_23 = FUNC_16(VAR_15[VAR_1]);
 VAR_17 = FUNC_6(VAR_23);

 VAR_21 = -VAR_6;
 if (VAR_17->l4proto != VAR_23)
  goto err;

 switch (VAR_17->l4proto) {
 case 133:
  VAR_18 = &FUNC_10(VAR_11)->timeout;
  break;
 case 130:
  VAR_18 = FUNC_13(VAR_11)->timeouts;
  break;
 case 129:
 case 128:
  VAR_18 = FUNC_14(VAR_11)->timeouts;
  break;
 case 135:



  break;
 case 132:
  VAR_18 = &FUNC_11(VAR_11)->timeout;
  break;
 case 131:



  break;
 case 134:



  break;
 case 255:
  VAR_18 = &FUNC_8(VAR_11)->timeout;
  break;
 default:
  FUNC_2(1, "Missing timeouts for proto %d", VAR_17->l4proto);
  break;
 }

 if (!VAR_18)
  goto err;

 VAR_19 = FUNC_17(VAR_10, VAR_7);
 if (VAR_19 == ((void*)0)) {
  VAR_21 = -VAR_5;
  goto err;
 }

 VAR_20 = FUNC_3(VAR_11, VAR_19, FUNC_0(VAR_13).portid,
       VAR_14->nlmsg_seq,
       FUNC_1(VAR_14->nlmsg_type),
       VAR_8,
       VAR_22, VAR_17, VAR_18);
 if (VAR_20 <= 0) {
  FUNC_4(VAR_19);
  VAR_21 = -VAR_5;
  goto err;
 }
 VAR_20 = FUNC_5(VAR_12, VAR_19, FUNC_0(VAR_13).portid, VAR_9);
 if (VAR_20 > 0)
  VAR_20 = 0;


 return VAR_20 == -VAR_2 ? -VAR_4 : VAR_20;
err:
 return VAR_21;
}
