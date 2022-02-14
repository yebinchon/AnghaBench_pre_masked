
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nft_table {int dummy; } ;
struct nft_ctx {int seq; int flags; int report; int portid; struct nlattr const* const* nla; struct nft_chain* chain; struct nft_table* table; scalar_t__ level; int family; struct net* net; } ;
struct nft_chain {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 TYPE_1__ FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct nlmsghdr const*) ;

__attribute__((used)) static void FUNC_2(struct nft_ctx *VAR_0,
    struct net *VAR_1,
    const struct sk_buff *VAR_2,
    const struct nlmsghdr *VAR_3,
    u8 VAR_4,
    struct nft_table *VAR_5,
    struct nft_chain *VAR_6,
    const struct nlattr * const *VAR_7)
{
 VAR_0->net = VAR_1;
 VAR_0->family = VAR_4;
 VAR_0->level = 0;
 VAR_0->table = VAR_5;
 VAR_0->chain = VAR_6;
 VAR_0->nla = VAR_7;
 VAR_0->portid = FUNC_0(VAR_2).portid;
 VAR_0->report = FUNC_1(VAR_3);
 VAR_0->flags = VAR_3->nlmsg_flags;
 VAR_0->seq = VAR_3->nlmsg_seq;
}
