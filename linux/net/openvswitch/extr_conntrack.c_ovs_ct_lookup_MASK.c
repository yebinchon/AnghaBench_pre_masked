
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ovs_conntrack_info {int zone; int family; } ;
struct nf_conntrack_expect {int master; } ;
struct nf_conn {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,struct sw_flow_key*,struct ovs_conntrack_info const*,struct sk_buff*) ;
 int FUNC_1 (struct sw_flow_key*,int,int *,int ) ;
 int FUNC_2 (struct nf_conn*) ;
 struct nf_conntrack_expect* FUNC_3 (struct net*,int *,int ,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3, struct sw_flow_key *VAR_4,
    const struct ovs_conntrack_info *VAR_5,
    struct sk_buff *VAR_6)
{
 struct nf_conntrack_expect *VAR_7;
 VAR_7 = FUNC_3(VAR_3, &VAR_5->zone, VAR_5->family, VAR_6);
 if (VAR_7) {
  u8 VAR_8;




  VAR_8 = VAR_2 | VAR_0 | VAR_1;
  FUNC_1(VAR_4, VAR_8, &VAR_5->zone, VAR_7->master);
 } else {
  struct nf_conn *VAR_9;
  int VAR_10;

  VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_10)
   return VAR_10;

  VAR_9 = (struct nf_conn *)FUNC_4(VAR_6);
  if (VAR_9)
   FUNC_2(VAR_9);
 }

 return 0;
}
