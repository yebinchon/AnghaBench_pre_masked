
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_packet {int vtag; } ;
struct TYPE_6__ {int sk; } ;
struct sctp_endpoint {TYPE_3__ base; } ;
struct sctp_chunk {TYPE_2__* skb; TYPE_1__* sctp_hdr; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_5__ {int sk; } ;
struct TYPE_4__ {int vtag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,size_t,void const*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,struct sctp_chunk*,size_t) ;
 int FUNC_3 (struct sctp_packet*) ;
 struct sctp_packet* FUNC_4 (struct net*,struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_5 (struct sctp_packet*,struct sctp_chunk*) ;
 scalar_t__ FUNC_6 (struct sctp_chunk*) ;

__attribute__((used)) static struct sctp_packet *FUNC_7(
     struct net *VAR_0,
     const struct sctp_endpoint *VAR_1,
     const struct sctp_association *VAR_2,
     struct sctp_chunk *VAR_3,
     const void *VAR_4, size_t VAR_5)
{
 struct sctp_packet *VAR_6;
 struct sctp_chunk *VAR_7;

 VAR_6 = FUNC_4(VAR_0, VAR_2, VAR_3);

 if (VAR_6) {



  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_5);
  if (!VAR_7) {
   FUNC_3(VAR_6);
   return ((void*)0);
  }


  if (FUNC_6(VAR_7))
   VAR_6->vtag = FUNC_0(VAR_3->sctp_hdr->vtag);




  FUNC_1(VAR_7, VAR_5, VAR_4);


  VAR_7->skb->sk = VAR_1->base.sk;

  FUNC_5(VAR_6, VAR_7);

 }

 return VAR_6;
}
