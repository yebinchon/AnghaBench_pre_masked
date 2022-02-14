
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int destructor; int * sk; } ;
struct sctp_chunk {int shkey; scalar_t__ auth; struct sk_buff* skb; struct sctp_association* asoc; } ;
struct TYPE_3__ {int * sk; } ;
struct sctp_association {TYPE_1__ base; int shkey; } ;
struct TYPE_4__ {struct sctp_chunk* destructor_arg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sctp_chunk *VAR_1)
{
 struct sctp_association *VAR_2 = VAR_1->asoc;
 struct sk_buff *VAR_3 = VAR_1->skb;
 if (VAR_1->auth) {
  VAR_1->shkey = VAR_2->shkey;
  FUNC_0(VAR_1->shkey);
 }
 VAR_3->sk = VAR_2 ? VAR_2->base.sk : ((void*)0);
 FUNC_1(VAR_3)->destructor_arg = VAR_1;
 VAR_3->destructor = VAR_0;
}
