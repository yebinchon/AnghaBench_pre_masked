
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int master; int mask; int tuple; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct net const*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nf_conntrack_tuple const*,int *,int *) ;
 scalar_t__ FUNC_3 (int ,struct nf_conntrack_zone const*) ;

__attribute__((used)) static bool
FUNC_4(const struct nf_conntrack_tuple *VAR_0,
  const struct nf_conntrack_expect *VAR_1,
  const struct nf_conntrack_zone *VAR_2,
  const struct net *VAR_3)
{
 return FUNC_2(VAR_0, &VAR_1->tuple, &VAR_1->mask) &&
        FUNC_0(VAR_3, FUNC_1(VAR_1->master)) &&
        FUNC_3(VAR_1->master, VAR_2);
}
