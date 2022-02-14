
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int dummy; } ;
struct tcf_ctinfo_params {int mode; int dscpstatemask; int net; int zone; } ;
struct tcf_ctinfo {int tcf_action; int tcf_bstats; int tcf_tm; int params; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_zone {int dir; int id; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int mark; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct nf_conntrack_tuple_hash* FUNC_3 (int ,struct nf_conntrack_zone*,struct nf_conntrack_tuple*) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (struct sk_buff*,int,int,int ,struct nf_conntrack_tuple*) ;
 int FUNC_6 (struct nf_conn*) ;
 struct nf_conn* FUNC_7 (struct nf_conntrack_tuple_hash const*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 struct tcf_ctinfo_params* FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct nf_conn*,struct tcf_ctinfo*,struct tcf_ctinfo_params*,struct sk_buff*) ;
 int FUNC_13 (struct nf_conn*,struct tcf_ctinfo*,struct tcf_ctinfo_params*,struct sk_buff*,int,int) ;
 int FUNC_14 (int *) ;
 struct tcf_ctinfo* FUNC_15 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_7, const struct tc_action *VAR_8,
     struct tcf_result *VAR_9)
{
 const struct nf_conntrack_tuple_hash *VAR_10 = ((void*)0);
 struct tcf_ctinfo *VAR_11 = FUNC_15(VAR_8);
 struct nf_conntrack_tuple VAR_12;
 struct nf_conntrack_zone VAR_13;
 enum ip_conntrack_info VAR_14;
 struct tcf_ctinfo_params *VAR_15;
 struct nf_conn *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 VAR_15 = FUNC_9(VAR_11->params);

 FUNC_14(&VAR_11->tcf_tm);
 FUNC_1(&VAR_11->tcf_bstats, VAR_7);
 VAR_19 = FUNC_0(VAR_11->tcf_action);

 VAR_18 = FUNC_10(VAR_7);
 if (FUNC_11(VAR_7) == FUNC_2(VAR_2)) {
  VAR_18 += sizeof(struct iphdr);
  if (!FUNC_8(VAR_7, VAR_18))
   goto out;

  VAR_17 = VAR_4;
 } else if (FUNC_11(VAR_7) == FUNC_2(VAR_3)) {
  VAR_18 += sizeof(struct ipv6hdr);
  if (!FUNC_8(VAR_7, VAR_18))
   goto out;

  VAR_17 = VAR_5;
 } else {
  goto out;
 }

 VAR_16 = FUNC_4(VAR_7, &VAR_14);
 if (!VAR_16) {
  if (!FUNC_5(VAR_7, FUNC_10(VAR_7),
           VAR_17, VAR_15->net, &VAR_12))
   goto out;
  VAR_13.id = VAR_15->zone;
  VAR_13.dir = VAR_6;

  VAR_10 = FUNC_3(VAR_15->net, &VAR_13, &VAR_12);
  if (!VAR_10)
   goto out;

  VAR_16 = FUNC_7(VAR_10);
 }

 if (VAR_15->mode & VAR_1)
  if (!VAR_15->dscpstatemask || (VAR_16->mark & VAR_15->dscpstatemask))
   FUNC_13(VAR_16, VAR_11, VAR_15, VAR_7, VAR_18, VAR_17);

 if (VAR_15->mode & VAR_0)
  FUNC_12(VAR_16, VAR_11, VAR_15, VAR_7);

 if (VAR_10)
  FUNC_6(VAR_16);
out:
 return VAR_19;
}
