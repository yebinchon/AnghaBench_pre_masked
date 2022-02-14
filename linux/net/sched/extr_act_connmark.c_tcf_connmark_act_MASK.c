
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct TYPE_2__ {int overlimits; } ;
struct tcf_connmark_info {int tcf_action; int tcf_lock; TYPE_1__ tcf_qstats; int net; int zone; int tcf_bstats; int tcf_tm; } ;
struct tc_action {int dummy; } ;
struct sk_buff {scalar_t__ protocol; int len; int mark; } ;
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
 int FUNC_0 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct nf_conntrack_tuple_hash* FUNC_2 (int ,struct nf_conntrack_zone*,struct nf_conntrack_tuple*) ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 int FUNC_4 (struct sk_buff*,int ,int,int ,struct nf_conntrack_tuple*) ;
 int FUNC_5 (struct nf_conn*) ;
 struct nf_conn* FUNC_6 (struct nf_conntrack_tuple_hash const*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct tcf_connmark_info* FUNC_11 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_5, const struct tc_action *VAR_6,
       struct tcf_result *VAR_7)
{
 const struct nf_conntrack_tuple_hash *VAR_8;
 struct nf_conntrack_tuple VAR_9;
 enum ip_conntrack_info VAR_10;
 struct tcf_connmark_info *VAR_11 = FUNC_11(VAR_6);
 struct nf_conntrack_zone VAR_12;
 struct nf_conn *VAR_13;
 int VAR_14;

 FUNC_8(&VAR_11->tcf_lock);
 FUNC_10(&VAR_11->tcf_tm);
 FUNC_0(&VAR_11->tcf_bstats, VAR_5);

 if (VAR_5->protocol == FUNC_1(VAR_0)) {
  if (VAR_5->len < sizeof(struct iphdr))
   goto out;

  VAR_14 = VAR_2;
 } else if (VAR_5->protocol == FUNC_1(VAR_1)) {
  if (VAR_5->len < sizeof(struct ipv6hdr))
   goto out;

  VAR_14 = VAR_3;
 } else {
  goto out;
 }

 VAR_13 = FUNC_3(VAR_5, &VAR_10);
 if (VAR_13) {
  VAR_5->mark = VAR_13->mark;

  VAR_11->tcf_qstats.overlimits++;
  goto out;
 }

 if (!FUNC_4(VAR_5, FUNC_7(VAR_5),
          VAR_14, VAR_11->net, &VAR_9))
  goto out;

 VAR_12.id = VAR_11->zone;
 VAR_12.dir = VAR_4;

 VAR_8 = FUNC_2(VAR_11->net, &VAR_12, &VAR_9);
 if (!VAR_8)
  goto out;

 VAR_13 = FUNC_6(VAR_8);

 VAR_11->tcf_qstats.overlimits++;
 VAR_5->mark = VAR_13->mark;
 FUNC_5(VAR_13);

out:
 FUNC_9(&VAR_11->tcf_lock);
 return VAR_11->tcf_action;
}
