
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_packet {int dummy; } ;
struct sctp_transport {struct sctp_packet packet; } ;
struct TYPE_8__ {int init_tag; } ;
struct sctp_initack_chunk {TYPE_1__ init_hdr; } ;
struct TYPE_12__ {int init_tag; } ;
struct sctp_init_chunk {TYPE_5__ init_hdr; } ;
struct sctp_chunk {int dest; TYPE_6__* sctp_hdr; TYPE_4__* chunk_hdr; } ;
struct TYPE_9__ {int init_tag; } ;
struct TYPE_10__ {TYPE_2__ i; } ;
struct sctp_association {TYPE_3__ peer; } ;
struct TYPE_14__ {int ctl_sock; } ;
struct net {TYPE_7__ sctp; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_13__ {int vtag; int source; int dest; } ;
struct TYPE_11__ {int type; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_packet*,int ,int ) ;
 int FUNC_3 (struct sctp_packet*,struct sctp_transport*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_chunk const*) ;
 struct sctp_transport* FUNC_6 (struct net*,int ,int ) ;
 int FUNC_7 (struct sctp_transport*,union sctp_addr*,int ) ;

__attribute__((used)) static struct sctp_packet *FUNC_8(
     struct net *VAR_1,
     const struct sctp_association *VAR_2,
     const struct sctp_chunk *VAR_3)
{
 struct sctp_transport *VAR_4;
 struct sctp_packet *VAR_5;
 __u16 VAR_6, VAR_7;
 __u32 VAR_8;


 VAR_6 = FUNC_1(VAR_3->sctp_hdr->dest);
 VAR_7 = FUNC_1(VAR_3->sctp_hdr->source);




 if (VAR_2) {



  switch (VAR_3->chunk_hdr->type) {
  case 128:
  {
   struct sctp_initack_chunk *VAR_9;

   VAR_9 = (struct sctp_initack_chunk *)VAR_3->chunk_hdr;
   VAR_8 = FUNC_0(VAR_9->init_hdr.init_tag);
   break;
  }
  default:
   VAR_8 = VAR_2->peer.i.init_tag;
   break;
  }
 } else {



  switch (VAR_3->chunk_hdr->type) {
  case 129:
  {
   struct sctp_init_chunk *VAR_10;

   VAR_10 = (struct sctp_init_chunk *)VAR_3->chunk_hdr;
   VAR_8 = FUNC_0(VAR_10->init_hdr.init_tag);
   break;
  }
  default:
   VAR_8 = FUNC_0(VAR_3->sctp_hdr->vtag);
   break;
  }
 }


 VAR_4 = FUNC_6(VAR_1, FUNC_5(VAR_3), VAR_0);
 if (!VAR_4)
  goto nomem;




 FUNC_7(VAR_4, (union sctp_addr *)&VAR_3->dest,
        FUNC_4(VAR_1->sctp.ctl_sock));

 VAR_5 = &VAR_4->packet;
 FUNC_3(VAR_5, VAR_4, VAR_6, VAR_7);
 FUNC_2(VAR_5, VAR_8, 0);

 return VAR_5;

nomem:
 return ((void*)0);
}
