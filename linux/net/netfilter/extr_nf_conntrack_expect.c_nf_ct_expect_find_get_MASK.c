
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int use; } ;
struct net {int dummy; } ;


 struct nf_conntrack_expect* FUNC_0 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

struct nf_conntrack_expect *
FUNC_4(struct net *VAR_0,
        const struct nf_conntrack_zone *VAR_1,
        const struct nf_conntrack_tuple *VAR_2)
{
 struct nf_conntrack_expect *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 && !FUNC_3(&VAR_3->use))
  VAR_3 = ((void*)0);
 FUNC_2();

 return VAR_3;
}
