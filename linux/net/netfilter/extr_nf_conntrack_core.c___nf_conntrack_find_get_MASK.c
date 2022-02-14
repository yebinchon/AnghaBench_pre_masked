
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct TYPE_2__ {int use; } ;
struct nf_conn {TYPE_1__ ct_general; } ;
struct net {int dummy; } ;


 struct nf_conntrack_tuple_hash* FUNC_0 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple const*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct nf_conntrack_tuple_hash*,struct nf_conntrack_tuple const*,struct nf_conntrack_zone const*,struct net*) ;
 int FUNC_4 (struct nf_conn*) ;
 struct nf_conn* FUNC_5 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static struct nf_conntrack_tuple_hash *
FUNC_8(struct net *VAR_0, const struct nf_conntrack_zone *VAR_1,
   const struct nf_conntrack_tuple *VAR_2, u32 VAR_3)
{
 struct nf_conntrack_tuple_hash *VAR_4;
 struct nf_conn *VAR_5;

 FUNC_6();

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4) {



  VAR_5 = FUNC_5(VAR_4);
  if (FUNC_2(FUNC_1(&VAR_5->ct_general.use))) {
   if (FUNC_2(FUNC_3(VAR_4, VAR_2, VAR_1, VAR_0)))
    goto found;


   FUNC_4(VAR_5);
  }

  VAR_4 = ((void*)0);
 }
found:
 FUNC_7();

 return VAR_4;
}
