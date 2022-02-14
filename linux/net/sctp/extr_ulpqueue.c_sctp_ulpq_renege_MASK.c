
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_ulpq {struct sctp_association* asoc; } ;
struct sctp_data_chunk {int dummy; } ;
struct sctp_chunk {int skb; TYPE_1__* chunk_hdr; } ;
struct TYPE_6__ {TYPE_3__* sk; } ;
struct sctp_association {TYPE_2__ base; } ;
typedef int gfp_t ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_7__ {int sk_receive_queue; } ;
struct TYPE_5__ {int length; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_ulpq*,int ) ;
 int FUNC_2 (struct sctp_ulpq*) ;
 scalar_t__ FUNC_3 (struct sctp_ulpq*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sctp_ulpq*,scalar_t__) ;
 int FUNC_5 (struct sctp_ulpq*,struct sctp_chunk*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;

void FUNC_9(struct sctp_ulpq *VAR_0, struct sctp_chunk *VAR_1,
        gfp_t VAR_2)
{
 struct sctp_association *VAR_3 = VAR_0->asoc;
 __u32 VAR_4 = 0;
 __u16 VAR_5;

 VAR_5 = FUNC_0(VAR_1->chunk_hdr->length) -
   sizeof(struct sctp_data_chunk);

 if (FUNC_8(&VAR_3->base.sk->sk_receive_queue)) {
  VAR_4 = FUNC_4(VAR_0, VAR_5);
  if (VAR_4 < VAR_5)
   VAR_4 += FUNC_3(VAR_0, VAR_5 - VAR_4);
 }

 if (FUNC_7(VAR_3->base.sk, VAR_1->skb, VAR_5) &&
     VAR_4 >= VAR_5) {
  int VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_2);




  if (VAR_6 <= 0)
   FUNC_1(VAR_0, VAR_2);
  else if (VAR_6 == 1)
   FUNC_2(VAR_0);
 }

 FUNC_6(VAR_3->base.sk);
}
