
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct xt_ipvs_mtinfo {int bitmask; int invert; scalar_t__ l4proto; scalar_t__ vport; scalar_t__ vportctl; int fwd_method; int vmask; int vaddr; } ;
struct xt_action_param {struct xt_ipvs_mtinfo* matchinfo; } ;
struct sk_buff {int ipvs_property; } ;
struct nf_conn {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_protocol {struct ip_vs_conn* (* conn_out_get ) (struct netns_ipvs*,int const,struct sk_buff const*,struct ip_vs_iphdr*) ;} ;
struct ip_vs_iphdr {scalar_t__ protocol; } ;
struct ip_vs_conn {scalar_t__ vport; int flags; int vaddr; TYPE_1__* control; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {scalar_t__ vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ip_vs_conn*) ;
 int FUNC_1 (int const,struct sk_buff const*,int,struct ip_vs_iphdr*) ;
 struct ip_vs_protocol* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int *,int const) ;
 struct netns_ipvs* FUNC_4 (int ) ;
 struct nf_conn* FUNC_5 (struct sk_buff const*,int*) ;
 int FUNC_6 (char*,int) ;
 struct ip_vs_conn* FUNC_7 (struct netns_ipvs*,int const,struct sk_buff const*,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct xt_action_param*) ;
 int FUNC_10 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_11(const struct sk_buff *VAR_9, struct xt_action_param *VAR_10)
{
 const struct xt_ipvs_mtinfo *VAR_11 = VAR_10->matchinfo;
 struct netns_ipvs *VAR_12 = FUNC_4(FUNC_10(VAR_10));

 const u_int8_t VAR_13 = FUNC_9(VAR_10);
 struct ip_vs_iphdr VAR_14;
 struct ip_vs_protocol *VAR_15;
 struct ip_vs_conn *VAR_16;
 bool VAR_17 = 1;

 if (VAR_11->bitmask == VAR_3) {
  VAR_17 = VAR_9->ipvs_property ^
   !!(VAR_11->invert & VAR_3);
  goto out;
 }


 if (!VAR_9->ipvs_property) {
  VAR_17 = 0;
  goto out;
 }

 FUNC_1(VAR_13, VAR_9, 1, &VAR_14);

 if (VAR_11->bitmask & VAR_5)
  if ((VAR_14.protocol == VAR_11->l4proto) ^
      !(VAR_11->invert & VAR_5)) {
   VAR_17 = 0;
   goto out;
  }

 VAR_15 = FUNC_2(VAR_14.protocol);
 if (FUNC_8(!VAR_15)) {
  VAR_17 = 0;
  goto out;
 }




 VAR_16 = VAR_15->conn_out_get(VAR_12, VAR_13, VAR_9, &VAR_14);
 if (FUNC_8(VAR_16 == ((void*)0))) {
  VAR_17 = 0;
  goto out;
 }






 if (VAR_11->bitmask & VAR_7)
  if ((VAR_16->vport == VAR_11->vport) ^
      !(VAR_11->invert & VAR_7)) {
   VAR_17 = 0;
   goto out_put_cp;
  }

 if (VAR_11->bitmask & VAR_8)
  if ((VAR_16->control != ((void*)0) &&
       VAR_16->control->vport == VAR_11->vportctl) ^
      !(VAR_11->invert & VAR_8)) {
   VAR_17 = 0;
   goto out_put_cp;
  }

 if (VAR_11->bitmask & VAR_2) {
  enum ip_conntrack_info VAR_18;
  struct nf_conn *VAR_19 = FUNC_5(VAR_9, &VAR_18);

  if (VAR_19 == ((void*)0)) {
   VAR_17 = 0;
   goto out_put_cp;
  }

  if ((VAR_18 >= VAR_0) ^
      !!(VAR_11->invert & VAR_2)) {
   VAR_17 = 0;
   goto out_put_cp;
  }
 }

 if (VAR_11->bitmask & VAR_4)
  if (((VAR_16->flags & VAR_1) == VAR_11->fwd_method) ^
      !(VAR_11->invert & VAR_4)) {
   VAR_17 = 0;
   goto out_put_cp;
  }

 if (VAR_11->bitmask & VAR_6) {
  if (FUNC_3(&VAR_16->vaddr, &VAR_11->vaddr,
        &VAR_11->vmask, VAR_13) ^
      !(VAR_11->invert & VAR_6)) {
   VAR_17 = 0;
   goto out_put_cp;
  }
 }

out_put_cp:
 FUNC_0(VAR_16);
out:
 FUNC_6("match=%d\n", VAR_17);
 return VAR_17;
}
