
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_transport {struct sctp_association* asoc; } ;
struct sctp_packet {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_5__ {int init_tag; } ;
struct TYPE_8__ {TYPE_1__ i; int port; } ;
struct TYPE_6__ {int port; } ;
struct TYPE_7__ {TYPE_2__ bind_addr; } ;
struct sctp_association {TYPE_4__ peer; TYPE_3__ base; } ;
typedef int gfp_t ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (struct sctp_packet*,struct sctp_chunk*) ;
 int FUNC_1 (struct sctp_packet*,int const,int ) ;
 int FUNC_2 (struct sctp_packet*,struct sctp_transport*,int const,int const) ;
 int FUNC_3 (struct sctp_packet*,int ) ;

__attribute__((used)) static int FUNC_4(struct sctp_transport *VAR_0,
     struct sctp_chunk *VAR_1, gfp_t VAR_2)
{
 const struct sctp_association *VAR_3 = VAR_0->asoc;
 const __u16 VAR_4 = VAR_3->base.bind_addr.port;
 const __u16 VAR_5 = VAR_3->peer.port;
 const __u32 VAR_6 = VAR_3->peer.i.init_tag;
 struct sctp_packet VAR_7;

 FUNC_2(&VAR_7, VAR_0, VAR_4, VAR_5);
 FUNC_1(&VAR_7, VAR_6, 0);
 FUNC_0(&VAR_7, VAR_1);
 return FUNC_3(&VAR_7, VAR_2);
}
