
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nft_set_ext {int dummy; } ;
struct TYPE_5__ {void* code; } ;
struct nft_regs {TYPE_2__ verdict; } ;
struct nft_pktinfo {int skb; } ;
struct TYPE_6__ {unsigned int count; } ;
struct nft_connlimit {unsigned int limit; int invert; TYPE_3__ list; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_4__ {struct nf_conntrack_tuple tuple; } ;


 size_t VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,struct nf_conntrack_tuple const*,struct nf_conntrack_zone const*) ;
 struct nf_conn* FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int ,int ,int ,struct nf_conntrack_tuple*) ;
 struct nf_conntrack_zone* FUNC_3 (struct nf_conn const*) ;
 struct nf_conntrack_zone VAR_3 ;
 int FUNC_4 (struct nft_pktinfo const*) ;
 int FUNC_5 (struct nft_pktinfo const*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(struct nft_connlimit *VAR_4,
      struct nft_regs *VAR_5,
      const struct nft_pktinfo *VAR_6,
      const struct nft_set_ext *VAR_7)
{
 const struct nf_conntrack_zone *VAR_8 = &VAR_3;
 const struct nf_conntrack_tuple *VAR_9;
 struct nf_conntrack_tuple VAR_10;
 enum ip_conntrack_info VAR_11;
 const struct nf_conn *VAR_12;
 unsigned int VAR_13;

 VAR_9 = &VAR_10;

 VAR_12 = FUNC_1(VAR_6->skb, &VAR_11);
 if (VAR_12 != ((void*)0)) {
  VAR_9 = &VAR_12->tuplehash[VAR_0].tuple;
  VAR_8 = FUNC_3(VAR_12);
 } else if (!FUNC_2(VAR_6->skb, FUNC_6(VAR_6->skb),
          FUNC_5(VAR_6), FUNC_4(VAR_6), &VAR_10)) {
  VAR_5->verdict.code = VAR_2;
  return;
 }

 if (FUNC_0(FUNC_4(VAR_6), &VAR_4->list, VAR_9, VAR_8)) {
  VAR_5->verdict.code = VAR_2;
  return;
 }

 VAR_13 = VAR_4->list.count;

 if ((VAR_13 > VAR_4->limit) ^ VAR_4->invert) {
  VAR_5->verdict.code = VAR_1;
  return;
 }
}
