
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct TYPE_9__ {TYPE_3__* peer; } ;
struct rxrpc_connection {TYPE_4__ params; } ;
struct rxrpc_call {size_t ackr_serial; size_t ackr_prev_seq; int nr_jumbo_bad; size_t rx_winsize; scalar_t__* rxtx_buffer; int rx_top; int rx_hard_ack; } ;
struct TYPE_10__ {void* jumbo_max; void* rwind; void* maxMTU; void* rxMTU; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {size_t nAcks; scalar_t__ reason; void* serial; void* previousPacket; void* firstPacket; void* maxSkew; void* bufferSpace; } ;
struct rxrpc_ack_buffer {TYPE_5__ ackinfo; TYPE_2__ whdr; TYPE_1__ ack; scalar_t__* acks; } ;
typedef size_t rxrpc_serial_t ;
typedef size_t rxrpc_seq_t ;
struct TYPE_8__ {size_t if_mtu; size_t hdrsize; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (size_t,size_t) ;
 void* FUNC_3 (size_t) ;
 void* FUNC_4 (int) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static size_t FUNC_6(struct rxrpc_connection *VAR_7,
     struct rxrpc_call *VAR_8,
     struct rxrpc_ack_buffer *VAR_9,
     rxrpc_seq_t *VAR_10,
     rxrpc_seq_t *VAR_11,
     u8 VAR_12)
{
 rxrpc_serial_t VAR_13;
 rxrpc_seq_t VAR_14, VAR_15, VAR_16;
 int VAR_17;
 u32 VAR_18, VAR_19;
 u8 *VAR_20 = VAR_9->acks;


 VAR_13 = VAR_8->ackr_serial;
 VAR_14 = FUNC_0(VAR_8->rx_hard_ack);
 VAR_15 = FUNC_5(&VAR_8->rx_top);
 *VAR_10 = VAR_14;
 *VAR_11 = VAR_15;

 VAR_9->ack.bufferSpace = FUNC_4(8);
 VAR_9->ack.maxSkew = FUNC_4(0);
 VAR_9->ack.firstPacket = FUNC_3(VAR_14 + 1);
 VAR_9->ack.previousPacket = FUNC_3(VAR_8->ackr_prev_seq);
 VAR_9->ack.serial = FUNC_3(VAR_13);
 VAR_9->ack.reason = VAR_12;
 VAR_9->ack.nAcks = VAR_15 - VAR_14;

 if (VAR_12 == VAR_0)
  VAR_9->whdr.flags |= VAR_3;

 if (FUNC_1(VAR_15, VAR_14)) {
  VAR_16 = VAR_14 + 1;
  do {
   VAR_17 = VAR_16 & VAR_4;
   if (VAR_8->rxtx_buffer[VAR_17])
    *VAR_20++ = VAR_1;
   else
    *VAR_20++ = VAR_2;
   VAR_16++;
  } while (FUNC_2(VAR_16, VAR_15));
 }

 VAR_18 = VAR_7->params.peer->if_mtu;
 VAR_18 -= VAR_7->params.peer->hdrsize;
 VAR_19 = (VAR_8->nr_jumbo_bad > 3) ? 1 : VAR_5;
 VAR_9->ackinfo.rxMTU = FUNC_3(VAR_6);
 VAR_9->ackinfo.maxMTU = FUNC_3(VAR_18);
 VAR_9->ackinfo.rwind = FUNC_3(VAR_8->rx_winsize);
 VAR_9->ackinfo.jumbo_max = FUNC_3(VAR_19);

 *VAR_20++ = 0;
 *VAR_20++ = 0;
 *VAR_20++ = 0;
 return VAR_15 - VAR_14 + 3;
}
