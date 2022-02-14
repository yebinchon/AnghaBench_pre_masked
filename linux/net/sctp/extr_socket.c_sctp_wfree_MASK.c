
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_wmem_alloc; int sk_wmem_queued; } ;
struct sk_buff {scalar_t__ truesize; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_shared_key {int key_id; int refcnt; int key_list; scalar_t__ deactivated; } ;
struct sctp_chunk {struct sctp_shared_key* shkey; struct sctp_association* asoc; } ;
struct TYPE_7__ {TYPE_2__* si; } ;
struct TYPE_5__ {struct sock* sk; } ;
struct sctp_association {int ulpq; TYPE_3__ stream; int sndbuf_used; TYPE_1__ base; } ;
struct TYPE_8__ {struct sctp_chunk* destructor_arg; } ;
struct TYPE_6__ {int (* enqueue_event ) (int *,struct sctp_ulpevent*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct sctp_association*) ;
 int FUNC_5 (struct sctp_shared_key*) ;
 struct sctp_ulpevent* FUNC_6 (struct sctp_association*,int ,int ,int ) ;
 int FUNC_7 (struct sock*,struct sctp_association*) ;
 int FUNC_8 (struct sock*,scalar_t__) ;
 TYPE_4__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *,struct sctp_ulpevent*) ;

__attribute__((used)) static void FUNC_12(struct sk_buff *VAR_2)
{
 struct sctp_chunk *VAR_3 = FUNC_9(VAR_2)->destructor_arg;
 struct sctp_association *VAR_4 = VAR_3->asoc;
 struct sock *VAR_5 = VAR_4->base.sk;

 FUNC_8(VAR_5, VAR_2->truesize);
 VAR_5->sk_wmem_queued -= VAR_2->truesize + sizeof(struct sctp_chunk);
 VAR_4->sndbuf_used -= VAR_2->truesize + sizeof(struct sctp_chunk);
 FUNC_0(FUNC_3(sizeof(struct sctp_chunk),
          &VAR_5->sk_wmem_alloc));

 if (VAR_3->shkey) {
  struct sctp_shared_key *VAR_6 = VAR_3->shkey;





  if (VAR_6->deactivated && !FUNC_1(&VAR_6->key_list) &&
      FUNC_2(&VAR_6->refcnt) == 2) {
   struct sctp_ulpevent *VAR_7;

   VAR_7 = FUNC_6(VAR_4, VAR_6->key_id,
       VAR_1,
       VAR_0);
   if (VAR_7)
    VAR_4->stream.si->enqueue_event(&VAR_4->ulpq, VAR_7);
  }
  FUNC_5(VAR_3->shkey);
 }

 FUNC_10(VAR_2);
 FUNC_7(VAR_5, VAR_4);

 FUNC_4(VAR_4);
}
