
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_zone {int dummy; } ;
struct TYPE_3__ {int dir; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct nf_conntrack_tuple_hash {TYPE_2__ tuple; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {struct nf_conntrack_tuple_hash* tuplehash; } ;
struct net {int dummy; } ;


 struct nf_conntrack_tuple_hash* FUNC_0 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,struct net*,struct nf_conntrack_tuple*) ;
 int FUNC_2 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,int ) ;
 struct nf_conn* FUNC_4 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_5 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct nf_conn *
FUNC_8(struct net *VAR_0, const struct nf_conntrack_zone *VAR_1,
       u8 VAR_2, struct sk_buff *VAR_3, bool VAR_4)
{
 struct nf_conntrack_tuple VAR_5;
 struct nf_conntrack_tuple_hash *VAR_6;
 struct nf_conn *VAR_7;

 if (!FUNC_1(VAR_3, FUNC_7(VAR_3), VAR_2,
          VAR_0, &VAR_5)) {
  FUNC_6("ovs_ct_find_existing: Can't get tuple\n");
  return ((void*)0);
 }


 if (VAR_4) {
  struct nf_conntrack_tuple VAR_8;

  if (!FUNC_2(&VAR_8, &VAR_5)) {
   FUNC_6("ovs_ct_find_existing: Inversion failed!\n");
   return ((void*)0);
  }
  VAR_5 = VAR_8;
 }


 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_4(VAR_6);





 if (VAR_4)
  VAR_6 = &VAR_7->tuplehash[!VAR_6->tuple.dst.dir];

 FUNC_3(VAR_3, VAR_7, FUNC_5(VAR_6));
 return VAR_7;
}
