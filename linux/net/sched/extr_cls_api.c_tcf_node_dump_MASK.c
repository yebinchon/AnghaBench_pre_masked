
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcf_walker {int dummy; } ;
struct tcf_proto {int dummy; } ;
struct tcf_dump_args {TYPE_2__* cb; int parent; int q; int block; TYPE_3__* skb; } ;
struct net {int dummy; } ;
struct TYPE_8__ {int portid; } ;
struct TYPE_7__ {int sk; } ;
struct TYPE_6__ {TYPE_1__* nlh; int skb; } ;
struct TYPE_5__ {int nlmsg_seq; } ;


 TYPE_4__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct net*,TYPE_3__*,struct tcf_proto*,int ,int ,int ,void*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_2, void *VAR_3, struct tcf_walker *VAR_4)
{
 struct tcf_dump_args *VAR_5 = (void *)VAR_4;
 struct net *VAR_6 = FUNC_1(VAR_5->skb->sk);

 return FUNC_2(VAR_6, VAR_5->skb, VAR_2, VAR_5->block, VAR_5->q, VAR_5->parent,
        VAR_3, FUNC_0(VAR_5->cb->skb).portid,
        VAR_5->cb->nlh->nlmsg_seq, VAR_0,
        VAR_1, 1);
}
