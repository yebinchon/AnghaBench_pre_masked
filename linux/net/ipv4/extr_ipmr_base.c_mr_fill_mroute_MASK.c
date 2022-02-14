
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vif_device {TYPE_1__* dev; } ;
struct sk_buff {int dummy; } ;
struct rtnexthop {int rtnh_hops; int rtnh_len; int rtnh_ifindex; scalar_t__ rtnh_flags; } ;
struct rtmsg {int rtm_type; int rtm_flags; } ;
struct rta_mfc_stats {int mfcs_wrong_if; int mfcs_bytes; int mfcs_packets; } ;
struct nlattr {int dummy; } ;
struct mr_table {struct vif_device* vif_table; } ;
struct TYPE_5__ {int minvif; int maxvif; int* ttls; int wrong_if; int bytes; int pkt; int lastuse; } ;
struct TYPE_6__ {TYPE_2__ res; } ;
struct mr_mfc {int mfc_parent; int mfc_flags; TYPE_3__ mfc_un; } ;
typedef int mfcs ;
struct TYPE_4__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct mr_table*,int) ;
 unsigned long VAR_12 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int,struct rta_mfc_stats*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 struct rtnexthop* FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

int FUNC_11(struct mr_table *VAR_13, struct sk_buff *VAR_14,
     struct mr_mfc *VAR_15, struct rtmsg *VAR_16)
{
 struct rta_mfc_stats VAR_17;
 struct nlattr *VAR_18;
 struct rtnexthop *VAR_19;
 unsigned long VAR_20;
 int VAR_21;


 if (VAR_15->mfc_parent >= VAR_2) {
  VAR_16->rtm_flags |= VAR_10;
  return -VAR_1;
 }

 if (FUNC_1(VAR_13, VAR_15->mfc_parent) &&
     FUNC_7(VAR_14, VAR_5,
   VAR_13->vif_table[VAR_15->mfc_parent].dev->ifindex) < 0)
  return -VAR_0;

 if (VAR_15->mfc_flags & VAR_3)
  VAR_16->rtm_flags |= VAR_9;

 VAR_18 = FUNC_5(VAR_14, VAR_7);
 if (!VAR_18)
  return -VAR_0;

 for (VAR_21 = VAR_15->mfc_un.res.minvif; VAR_21 < VAR_15->mfc_un.res.maxvif; VAR_21++) {
  if (FUNC_1(VAR_13, VAR_21) && VAR_15->mfc_un.res.ttls[VAR_21] < 255) {
   struct vif_device *VAR_22;

   VAR_19 = FUNC_9(VAR_14, sizeof(*VAR_19));
   if (!VAR_19) {
    FUNC_3(VAR_14, VAR_18);
    return -VAR_0;
   }

   VAR_19->rtnh_flags = 0;
   VAR_19->rtnh_hops = VAR_15->mfc_un.res.ttls[VAR_21];
   VAR_22 = &VAR_13->vif_table[VAR_21];
   VAR_19->rtnh_ifindex = VAR_22->dev->ifindex;
   VAR_19->rtnh_len = sizeof(*VAR_19);
  }
 }

 FUNC_4(VAR_14, VAR_18);

 VAR_20 = FUNC_0(VAR_15->mfc_un.res.lastuse);
 VAR_20 = FUNC_10(VAR_12, VAR_20) ? VAR_12 - VAR_20 : 0;

 VAR_17.mfcs_packets = VAR_15->mfc_un.res.pkt;
 VAR_17.mfcs_bytes = VAR_15->mfc_un.res.bytes;
 VAR_17.mfcs_wrong_if = VAR_15->mfc_un.res.wrong_if;
 if (FUNC_6(VAR_14, VAR_6, sizeof(VAR_17), &VAR_17, VAR_8) ||
     FUNC_8(VAR_14, VAR_4, FUNC_2(VAR_20),
         VAR_8))
  return -VAR_0;

 VAR_16->rtm_type = VAR_11;
 return 1;
}
