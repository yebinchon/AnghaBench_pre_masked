
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xt_conntrack_mtinfo2 {int match_flags; scalar_t__ l4proto; int invert_flags; scalar_t__ origsrc_port; scalar_t__ origdst_port; scalar_t__ replsrc_port; scalar_t__ repldst_port; } ;
struct TYPE_9__ {scalar_t__ all; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct TYPE_7__ {scalar_t__ all; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_5__ dst; TYPE_3__ src; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
struct TYPE_6__ {struct nf_conntrack_tuple tuple; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nf_conn const*) ;

__attribute__((used)) static inline bool
FUNC_1(const struct xt_conntrack_mtinfo2 *VAR_7,
                    const struct nf_conn *VAR_8)
{
 const struct nf_conntrack_tuple *VAR_9;

 VAR_9 = &VAR_8->tuplehash[VAR_0].tuple;
 if ((VAR_7->match_flags & VAR_4) &&
     (FUNC_0(VAR_8) == VAR_7->l4proto) ^
     !(VAR_7->invert_flags & VAR_4))
  return 0;


 if ((VAR_7->match_flags & VAR_3) &&
     (VAR_9->src.u.all == VAR_7->origsrc_port) ^
     !(VAR_7->invert_flags & VAR_3))
  return 0;

 if ((VAR_7->match_flags & VAR_2) &&
     (VAR_9->dst.u.all == VAR_7->origdst_port) ^
     !(VAR_7->invert_flags & VAR_2))
  return 0;

 VAR_9 = &VAR_8->tuplehash[VAR_1].tuple;

 if ((VAR_7->match_flags & VAR_6) &&
     (VAR_9->src.u.all == VAR_7->replsrc_port) ^
     !(VAR_7->invert_flags & VAR_6))
  return 0;

 if ((VAR_7->match_flags & VAR_5) &&
     (VAR_9->dst.u.all == VAR_7->repldst_port) ^
     !(VAR_7->invert_flags & VAR_5))
  return 0;

 return 1;
}
