
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sw_flow_key {int ct_state; } ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_zone {int dummy; } ;
struct ovs_conntrack_info {struct nf_conntrack_zone zone; } ;
struct nf_conn {int status; scalar_t__ master; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sw_flow_key*,int,struct nf_conntrack_zone const*,struct nf_conn*) ;
 struct nf_conn* FUNC_1 (struct sk_buff const*,int*) ;
 int FUNC_2 (struct nf_conn*) ;
 struct nf_conntrack_zone* FUNC_3 (struct nf_conn*) ;
 struct nf_conntrack_zone VAR_9 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(const struct sk_buff *VAR_10,
         const struct ovs_conntrack_info *VAR_11,
         struct sw_flow_key *VAR_12, bool VAR_13,
         bool VAR_14)
{
 const struct nf_conntrack_zone *VAR_15 = &VAR_9;
 enum ip_conntrack_info VAR_16;
 struct nf_conn *VAR_17;
 u8 VAR_18 = 0;

 VAR_17 = FUNC_1(VAR_10, &VAR_16);
 if (VAR_17) {
  VAR_18 = FUNC_4(VAR_16);

  if (!FUNC_2(VAR_17))
   VAR_18 |= VAR_5;



  if (VAR_17->master)
   VAR_18 |= VAR_6;
  if (VAR_14) {
   VAR_18 |= VAR_12->ct_state & VAR_4;
  } else {
   if (VAR_17->status & VAR_1)
    VAR_18 |= VAR_7;
   if (VAR_17->status & VAR_0)
    VAR_18 |= VAR_2;
  }
  VAR_15 = FUNC_3(VAR_17);
 } else if (VAR_13) {
  VAR_18 = VAR_8 | VAR_3;
  if (VAR_11)
   VAR_15 = &VAR_11->zone;
 }
 FUNC_0(VAR_12, VAR_18, VAR_15, VAR_17);
}
