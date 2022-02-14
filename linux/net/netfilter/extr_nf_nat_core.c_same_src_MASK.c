
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ all; } ;
struct TYPE_6__ {TYPE_1__ u; int u3; } ;
struct TYPE_8__ {scalar_t__ protonum; } ;
struct nf_conntrack_tuple {TYPE_2__ src; TYPE_4__ dst; } ;
struct nf_conn {TYPE_3__* tuplehash; } ;
struct TYPE_7__ {struct nf_conntrack_tuple tuple; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static inline int
FUNC_1(const struct nf_conn *VAR_1,
  const struct nf_conntrack_tuple *VAR_2)
{
 const struct nf_conntrack_tuple *VAR_3;

 VAR_3 = &VAR_1->tuplehash[VAR_0].tuple;
 return (VAR_3->dst.protonum == VAR_2->dst.protonum &&
  FUNC_0(&VAR_3->src.u3, &VAR_2->src.u3) &&
  VAR_3->src.u.all == VAR_2->src.u.all);
}
