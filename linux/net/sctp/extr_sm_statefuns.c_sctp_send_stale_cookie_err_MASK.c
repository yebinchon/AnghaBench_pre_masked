
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int peer_vtag; } ;
struct sctp_signed_cookie {TYPE_1__ c; } ;
struct sctp_packet {int vtag; } ;
struct TYPE_7__ {int sk; } ;
struct sctp_endpoint {TYPE_3__ base; } ;
struct sctp_cmd_seq {int dummy; } ;
struct TYPE_8__ {struct sctp_signed_cookie* cookie_hdr; } ;
struct sctp_chunk {TYPE_2__* skb; TYPE_4__ subh; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int sk; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sctp_packet*) ;
 int FUNC_2 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_3 (struct sctp_chunk*) ;
 struct sctp_packet* FUNC_4 (struct net*,struct sctp_association const*,struct sctp_chunk const*) ;
 int FUNC_5 (struct sctp_packet*,struct sctp_chunk*) ;

__attribute__((used)) static void FUNC_6(struct net *VAR_2,
           const struct sctp_endpoint *VAR_3,
           const struct sctp_association *VAR_4,
           const struct sctp_chunk *VAR_5,
           struct sctp_cmd_seq *VAR_6,
           struct sctp_chunk *VAR_7)
{
 struct sctp_packet *VAR_8;

 if (VAR_7) {
  VAR_8 = FUNC_4(VAR_2, VAR_4, VAR_5);
  if (VAR_8) {
   struct sctp_signed_cookie *VAR_9;


   VAR_9 = VAR_5->subh.cookie_hdr;
   VAR_8->vtag = VAR_9->c.peer_vtag;


   VAR_7->skb->sk = VAR_3->base.sk;
   FUNC_5(VAR_8, VAR_7);
   FUNC_2(VAR_6, VAR_0,
     FUNC_1(VAR_8));
   FUNC_0(VAR_2, VAR_1);
  } else
   FUNC_3 (VAR_7);
 }
}
