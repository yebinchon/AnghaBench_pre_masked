
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct sctp_transport {size_t flight_size; struct sctp_association* asoc; } ;
struct sctp_packet {struct sctp_transport* transport; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_7__ {TYPE_2__* si; } ;
struct TYPE_8__ {size_t rwnd; } ;
struct TYPE_5__ {size_t outstanding_bytes; } ;
struct sctp_association {TYPE_3__ stream; TYPE_4__ peer; TYPE_1__ outqueue; } ;
struct TYPE_6__ {int (* assign_number ) (struct sctp_chunk*) ;} ;


 int FUNC_0 (struct sctp_chunk*) ;
 size_t FUNC_1 (struct sctp_chunk*) ;
 int FUNC_2 (struct sctp_chunk*) ;

__attribute__((used)) static void FUNC_3(struct sctp_packet *VAR_0,
    struct sctp_chunk *VAR_1)
{
 struct sctp_transport *VAR_2 = VAR_0->transport;
 size_t VAR_3 = FUNC_1(VAR_1);
 struct sctp_association *VAR_4 = VAR_2->asoc;
 u32 VAR_5 = VAR_4->peer.rwnd;


 VAR_2->flight_size += VAR_3;


 VAR_4->outqueue.outstanding_bytes += VAR_3;


 if (VAR_3 < VAR_5)
  VAR_5 -= VAR_3;
 else
  VAR_5 = 0;

 VAR_4->peer.rwnd = VAR_5;
 FUNC_0(VAR_1);
 VAR_4->stream.si->assign_number(VAR_1);
}
