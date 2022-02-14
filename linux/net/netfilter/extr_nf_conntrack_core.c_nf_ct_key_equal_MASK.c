
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int tuple; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct nf_conntrack_tuple_hash*) ;
 scalar_t__ FUNC_1 (struct net const*,int ) ;
 scalar_t__ FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conn*) ;
 scalar_t__ FUNC_4 (struct nf_conntrack_tuple const*,int *) ;
 struct nf_conn* FUNC_5 (struct nf_conntrack_tuple_hash*) ;
 scalar_t__ FUNC_6 (struct nf_conn*,struct nf_conntrack_zone const*,int ) ;

__attribute__((used)) static inline bool
FUNC_7(struct nf_conntrack_tuple_hash *VAR_0,
  const struct nf_conntrack_tuple *VAR_1,
  const struct nf_conntrack_zone *VAR_2,
  const struct net *VAR_3)
{
 struct nf_conn *VAR_4 = FUNC_5(VAR_0);




 return FUNC_4(VAR_1, &VAR_0->tuple) &&
        FUNC_6(VAR_4, VAR_2, FUNC_0(VAR_0)) &&
        FUNC_2(VAR_4) &&
        FUNC_1(VAR_3, FUNC_3(VAR_4));
}
