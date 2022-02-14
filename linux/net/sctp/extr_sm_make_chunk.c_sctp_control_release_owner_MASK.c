
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_shared_key {int key_id; int refcnt; int key_list; scalar_t__ deactivated; } ;
struct sctp_chunk {struct sctp_shared_key* shkey; struct sctp_association* asoc; } ;
struct TYPE_5__ {TYPE_1__* si; } ;
struct sctp_association {int ulpq; TYPE_2__ stream; } ;
struct TYPE_6__ {struct sctp_chunk* destructor_arg; } ;
struct TYPE_4__ {int (* enqueue_event ) (int *,struct sctp_ulpevent*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sctp_shared_key*) ;
 struct sctp_ulpevent* FUNC_3 (struct sctp_association*,int ,int ,int ) ;
 TYPE_3__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,struct sctp_ulpevent*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_2)
{
 struct sctp_chunk *VAR_3 = FUNC_4(VAR_2)->destructor_arg;

 if (VAR_3->shkey) {
  struct sctp_shared_key *VAR_4 = VAR_3->shkey;
  struct sctp_association *VAR_5 = VAR_3->asoc;





  if (VAR_4->deactivated && !FUNC_0(&VAR_4->key_list) &&
      FUNC_1(&VAR_4->refcnt) == 2) {
   struct sctp_ulpevent *VAR_6;

   VAR_6 = FUNC_3(VAR_5, VAR_4->key_id,
       VAR_1,
       VAR_0);
   if (VAR_6)
    VAR_5->stream.si->enqueue_event(&VAR_5->ulpq, VAR_6);
  }
  FUNC_2(VAR_3->shkey);
 }
}
