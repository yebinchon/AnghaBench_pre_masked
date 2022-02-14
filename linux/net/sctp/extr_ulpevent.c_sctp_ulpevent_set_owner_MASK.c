
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sctp_ulpevent {struct sctp_association* asoc; int rmem_len; struct sctp_chunk* chunk; } ;
struct sctp_chunk {TYPE_1__* head_skb; } ;
struct TYPE_4__ {scalar_t__ sk; } ;
struct sctp_association {TYPE_2__ base; int rmem_alloc; } ;
struct TYPE_3__ {scalar_t__ sk; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sctp_association*) ;
 struct sk_buff* FUNC_2 (struct sctp_ulpevent*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct sctp_ulpevent *VAR_0,
        const struct sctp_association *VAR_1)
{
 struct sctp_chunk *VAR_2 = VAR_0->chunk;
 struct sk_buff *VAR_3;




 FUNC_1((struct sctp_association *)VAR_1);
 VAR_3 = FUNC_2(VAR_0);
 VAR_0->asoc = (struct sctp_association *)VAR_1;
 FUNC_0(VAR_0->rmem_len, &VAR_0->asoc->rmem_alloc);
 FUNC_3(VAR_3, VAR_1->base.sk);
 if (VAR_2 && VAR_2->head_skb && !VAR_2->head_skb->sk)
  VAR_2->head_skb->sk = VAR_1->base.sk;
}
