
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_wmem_queued; int sk_wmem_alloc; } ;
struct sctp_chunk {TYPE_3__* skb; scalar_t__ shkey; struct sctp_association* asoc; } ;
struct TYPE_5__ {struct sock* sk; } ;
struct sctp_association {int sndbuf_used; TYPE_1__ base; } ;
struct TYPE_7__ {int truesize; int destructor; } ;
struct TYPE_6__ {struct sctp_chunk* destructor_arg; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct sctp_association*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (TYPE_3__*,struct sock*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_6(struct sctp_chunk *VAR_1)
{
 struct sctp_association *VAR_2 = VAR_1->asoc;
 struct sock *VAR_3 = VAR_2->base.sk;


 FUNC_1(VAR_2);

 if (VAR_1->shkey)
  FUNC_2(VAR_1->shkey);

 FUNC_4(VAR_1->skb, VAR_3);

 VAR_1->skb->destructor = VAR_0;

 FUNC_5(VAR_1->skb)->destructor_arg = VAR_1;

 FUNC_0(sizeof(struct sctp_chunk), &VAR_3->sk_wmem_alloc);
 VAR_2->sndbuf_used += VAR_1->skb->truesize + sizeof(struct sctp_chunk);
 VAR_3->sk_wmem_queued += VAR_1->skb->truesize + sizeof(struct sctp_chunk);
 FUNC_3(VAR_3, VAR_1->skb->truesize);
}
