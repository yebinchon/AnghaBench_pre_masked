
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int ingress; int qstats; } ;
struct TYPE_2__ {int cpu_qstats; int cpu_bstats; } ;
struct tcf_mirred {TYPE_1__ common; int tcfm_dev; int tcf_action; int tcfm_eaction; int tcfm_mac_header_xmit; int tcf_tm; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int tc_redirected; scalar_t__ tstamp; scalar_t__ tc_from_ingress; scalar_t__ tc_at_ingress; struct net_device* dev; int skb_iif; int mac_len; } ;
struct net_device {int flags; int ifindex; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 struct net_device* FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 int FUNC_18 (struct sk_buff*,struct tcf_result*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 struct tcf_mirred* FUNC_24 (struct tc_action const*) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static int FUNC_26(struct sk_buff *VAR_6, const struct tc_action *VAR_7,
     struct tcf_result *VAR_8)
{
 struct tcf_mirred *VAR_9 = FUNC_24(VAR_7);
 struct sk_buff *VAR_10 = VAR_6;
 bool VAR_11;
 struct net_device *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15 = 0;
 bool VAR_16;
 bool VAR_17;
 bool VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_13 = FUNC_2(VAR_5);
 if (FUNC_25(VAR_13 > VAR_2)) {
  FUNC_6("Packet exceeded mirred recursion limit on dev %s\n",
         FUNC_7(VAR_6->dev));
  FUNC_1(VAR_5);
  return VAR_4;
 }

 FUNC_19(&VAR_9->tcf_tm);
 FUNC_3(FUNC_23(VAR_9->common.cpu_bstats), VAR_6);

 VAR_11 = FUNC_0(VAR_9->tcfm_mac_header_xmit);
 VAR_19 = FUNC_0(VAR_9->tcfm_eaction);
 VAR_14 = FUNC_0(VAR_9->tcf_action);
 VAR_12 = FUNC_11(VAR_9->tcfm_dev);
 if (FUNC_25(!VAR_12)) {
  FUNC_9("tc mirred: target device is gone\n");
  goto out;
 }

 if (FUNC_25(!(VAR_12->flags & VAR_1))) {
  FUNC_5("tc mirred to Houston: device %s is down\n",
           VAR_12->name);
  goto out;
 }





 VAR_18 = FUNC_22(VAR_19);
 VAR_16 = FUNC_12(VAR_6) && VAR_18 &&
         FUNC_21(VAR_14);
 if (!VAR_16) {
  VAR_10 = FUNC_13(VAR_6, VAR_0);
  if (!VAR_10)
   goto out;
 }





 VAR_17 = FUNC_20(VAR_19);
 if (FUNC_12(VAR_6) != VAR_17 && VAR_11) {
  if (!FUNC_12(VAR_6)) {

   VAR_20 = FUNC_15(VAR_6) - FUNC_14(VAR_6);
   FUNC_16(VAR_10, VAR_20);
  } else {

   FUNC_17(VAR_10, VAR_6->mac_len);
  }
 }

 VAR_10->skb_iif = VAR_6->dev->ifindex;
 VAR_10->dev = VAR_12;


 if (VAR_18) {
  VAR_10->tc_redirected = 1;
  VAR_10->tc_from_ingress = VAR_10->tc_at_ingress;
  if (VAR_10->tc_from_ingress)
   VAR_10->tstamp = 0;

  if (VAR_16) {
   VAR_8->ingress = VAR_17;
   VAR_8->qstats = FUNC_23(VAR_9->common.cpu_qstats);
   FUNC_18(VAR_6, VAR_8);
   FUNC_1(VAR_5);
   return VAR_3;
  }
 }

 if (!VAR_17)
  VAR_15 = FUNC_4(VAR_10);
 else
  VAR_15 = FUNC_8(VAR_10);

 if (VAR_15) {
out:
  FUNC_10(FUNC_23(VAR_9->common.cpu_qstats));
  if (FUNC_22(VAR_19))
   VAR_14 = VAR_4;
 }
 FUNC_1(VAR_5);

 return VAR_14;
}
