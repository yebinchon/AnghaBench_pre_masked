
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_ulpq {int reasm_uo; int reasm; int lobby; struct sctp_association* asoc; } ;
struct sctp_idata_chunk {int dummy; } ;
struct sctp_chunk {TYPE_1__* chunk_hdr; } ;
struct TYPE_5__ {TYPE_3__* sk; } ;
struct sctp_association {TYPE_2__ base; } ;
typedef int gfp_t ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_6__ {int sk_receive_queue; } ;
struct TYPE_4__ {int length; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_ulpq*,int ) ;
 scalar_t__ FUNC_2 (struct sctp_ulpq*,struct sctp_chunk*,int ) ;
 scalar_t__ FUNC_3 (struct sctp_ulpq*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sctp_ulpq *VAR_0, struct sctp_chunk *VAR_1,
          gfp_t VAR_2)
{
 struct sctp_association *VAR_3 = VAR_0->asoc;
 __u32 VAR_4 = 0;
 __u16 VAR_5;

 VAR_5 = FUNC_0(VAR_1->chunk_hdr->length) -
   sizeof(struct sctp_idata_chunk);

 if (FUNC_5(&VAR_3->base.sk->sk_receive_queue)) {
  VAR_4 = FUNC_3(VAR_0, &VAR_0->lobby, VAR_5);
  if (VAR_4 < VAR_5)
   VAR_4 += FUNC_3(VAR_0, &VAR_0->reasm,
             VAR_5);
  if (VAR_4 < VAR_5)
   VAR_4 += FUNC_3(VAR_0, &VAR_0->reasm_uo,
             VAR_5);
 }

 if (VAR_4 >= VAR_5 && FUNC_2(VAR_0, VAR_1, VAR_2) <= 0)
  FUNC_1(VAR_0, VAR_2);

 FUNC_4(VAR_3->base.sk);
}
