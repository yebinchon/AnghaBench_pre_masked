
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rtmsg {int rtm_dst_len; int rtm_src_len; int rtm_flags; int rtm_protocol; int rtm_scope; int rtm_type; int rtm_table; scalar_t__ rtm_tos; int rtm_family; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_6__ {scalar_t__ saddr; int flowidn_iif; } ;
struct TYPE_7__ {long expires; int error; TYPE_1__* dev; } ;
struct dn_route {int rt_flags; scalar_t__ rt_daddr; scalar_t__ rt_local_src; scalar_t__ rt_gateway; TYPE_2__ fld; TYPE_3__ dst; int rt_type; } ;
struct TYPE_5__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct dn_route*) ;
 int FUNC_1 (TYPE_3__*) ;
 long VAR_15 ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,TYPE_3__*,int ,long,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_16, u32 VAR_17, u32 VAR_18,
      int VAR_19, int VAR_20, unsigned int VAR_21)
{
 struct dn_route *VAR_22 = (struct dn_route *)FUNC_10(VAR_16);
 struct rtmsg *VAR_23;
 struct nlmsghdr *VAR_24;
 long VAR_25;

 VAR_24 = FUNC_7(VAR_16, VAR_17, VAR_18, VAR_19, sizeof(*VAR_23), VAR_21);
 if (!VAR_24)
  return -VAR_1;

 VAR_23 = FUNC_5(VAR_24);
 VAR_23->rtm_family = VAR_0;
 VAR_23->rtm_dst_len = 16;
 VAR_23->rtm_src_len = 0;
 VAR_23->rtm_tos = 0;
 VAR_23->rtm_table = VAR_14;
 VAR_23->rtm_type = VAR_22->rt_type;
 VAR_23->rtm_flags = (VAR_22->rt_flags & ~0xFFFF) | VAR_10;
 VAR_23->rtm_scope = VAR_13;
 VAR_23->rtm_protocol = VAR_12;

 if (VAR_22->rt_flags & VAR_9)
  VAR_23->rtm_flags |= VAR_11;

 if (FUNC_3(VAR_16, VAR_8, VAR_14) < 0 ||
     FUNC_2(VAR_16, VAR_2, VAR_22->rt_daddr) < 0)
  goto errout;

 if (VAR_22->fld.saddr) {
  VAR_23->rtm_src_len = 16;
  if (FUNC_2(VAR_16, VAR_7, VAR_22->fld.saddr) < 0)
   goto errout;
 }
 if (VAR_22->dst.dev &&
     FUNC_3(VAR_16, VAR_5, VAR_22->dst.dev->ifindex) < 0)
  goto errout;






 if (FUNC_2(VAR_16, VAR_6, VAR_22->rt_local_src) < 0)
  goto errout;

 if (VAR_22->rt_daddr != VAR_22->rt_gateway &&
     FUNC_2(VAR_16, VAR_3, VAR_22->rt_gateway) < 0)
  goto errout;

 if (FUNC_8(VAR_16, FUNC_1(&VAR_22->dst)) < 0)
  goto errout;

 VAR_25 = VAR_22->dst.expires ? VAR_22->dst.expires - VAR_15 : 0;
 if (FUNC_9(VAR_16, &VAR_22->dst, 0, VAR_25,
          VAR_22->dst.error) < 0)
  goto errout;

 if (FUNC_0(VAR_22) &&
     FUNC_3(VAR_16, VAR_4, VAR_22->fld.flowidn_iif) < 0)
  goto errout;

 FUNC_6(VAR_16, VAR_24);
 return 0;

errout:
 FUNC_4(VAR_16, VAR_24);
 return -VAR_1;
}
