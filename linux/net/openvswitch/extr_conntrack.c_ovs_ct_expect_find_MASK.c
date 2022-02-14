
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int dummy; } ;
struct nf_conn {int ct_general; } ;
struct net {int dummy; } ;


 struct nf_conntrack_expect* FUNC_0 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple*) ;
 struct nf_conntrack_tuple_hash* FUNC_1 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nf_conn*,int ,int ) ;
 int FUNC_4 (struct sk_buff const*,int ,int ,struct net*,struct nf_conntrack_tuple*) ;
 struct nf_conn* FUNC_5 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_6 (struct sk_buff const*) ;

__attribute__((used)) static struct nf_conntrack_expect *
FUNC_7(struct net *VAR_0, const struct nf_conntrack_zone *VAR_1,
     u16 VAR_2, const struct sk_buff *VAR_3)
{
 struct nf_conntrack_tuple VAR_4;
 struct nf_conntrack_expect *VAR_5;

 if (!FUNC_4(VAR_3, FUNC_6(VAR_3), VAR_2, VAR_0, &VAR_4))
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_5) {
  struct nf_conntrack_tuple_hash *VAR_6;
  VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_4);
  if (VAR_6) {
   struct nf_conn *VAR_7 = FUNC_5(VAR_6);

   FUNC_3(VAR_7, 0, 0);
   FUNC_2(&VAR_7->ct_general);
  }
 }

 return VAR_5;
}
