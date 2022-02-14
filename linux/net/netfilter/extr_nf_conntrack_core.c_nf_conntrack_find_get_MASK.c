
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct net {int dummy; } ;


 struct nf_conntrack_tuple_hash* FUNC_0 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple const*,int ) ;
 int FUNC_1 (struct nf_conntrack_tuple const*,struct net*) ;

struct nf_conntrack_tuple_hash *
FUNC_2(struct net *VAR_0, const struct nf_conntrack_zone *VAR_1,
        const struct nf_conntrack_tuple *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2,
           FUNC_1(VAR_2, VAR_0));
}
