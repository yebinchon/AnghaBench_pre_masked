
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conncount_list {int list_lock; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct nf_conncount_list*,struct nf_conntrack_tuple const*,struct nf_conntrack_zone const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct net *VAR_0,
       struct nf_conncount_list *VAR_1,
       const struct nf_conntrack_tuple *VAR_2,
       const struct nf_conntrack_zone *VAR_3)
{
 int VAR_4;


 FUNC_1(&VAR_1->list_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->list_lock);

 return VAR_4;
}
