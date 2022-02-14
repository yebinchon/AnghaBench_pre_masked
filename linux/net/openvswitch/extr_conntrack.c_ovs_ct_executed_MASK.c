
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_flow_key {int ct_state; scalar_t__ ct_zone; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; } ;
struct ovs_conntrack_info {int family; TYPE_1__ zone; scalar_t__ force; } ;
struct nf_conn {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nf_conn* FUNC_0 (struct net*,TYPE_1__*,int ,struct sk_buff*,int) ;

__attribute__((used)) static
struct nf_conn *FUNC_1(struct net *VAR_3,
    const struct sw_flow_key *VAR_4,
    const struct ovs_conntrack_info *VAR_5,
    struct sk_buff *VAR_6,
    bool *VAR_7)
{
 struct nf_conn *VAR_8 = ((void*)0);







 *VAR_7 = (VAR_4->ct_state & VAR_2) &&
         !(VAR_4->ct_state & VAR_0) &&
         (VAR_4->ct_zone == VAR_5->zone.id);

 if (*VAR_7 || (!VAR_4->ct_state && VAR_5->force)) {
  VAR_8 = FUNC_0(VAR_3, &VAR_5->zone, VAR_5->family, VAR_6,
       !!(VAR_4->ct_state &
       VAR_1));
 }

 return VAR_8;
}
