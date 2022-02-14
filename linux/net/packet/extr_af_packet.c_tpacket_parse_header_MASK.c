
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union tpacket_uhdr {TYPE_5__* h1; TYPE_4__* h2; TYPE_3__* h3; void* raw; } ;
struct sockaddr_ll {int dummy; } ;
struct TYPE_7__ {scalar_t__ sk_type; } ;
struct TYPE_6__ {int frame_size; } ;
struct packet_sock {int tp_version; int tp_tx_has_off; int tp_hdrlen; TYPE_2__ sk; TYPE_1__ tx_ring; } ;
struct TYPE_10__ {int tp_len; int tp_net; int tp_mac; } ;
struct TYPE_9__ {int tp_len; int tp_net; int tp_mac; } ;
struct TYPE_8__ {int tp_len; int tp_net; int tp_mac; int tp_next_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct packet_sock *VAR_3, void *VAR_4,
    int VAR_5, void **VAR_6)
{
 union tpacket_uhdr VAR_7;
 int VAR_8, VAR_9;

 VAR_7.raw = VAR_4;

 switch (VAR_3->tp_version) {
 case 128:
  if (VAR_7.h3->tp_next_offset != 0) {
   FUNC_1("variable sized slot not supported");
   return -VAR_0;
  }
  VAR_8 = VAR_7.h3->tp_len;
  break;
 case 129:
  VAR_8 = VAR_7.h2->tp_len;
  break;
 default:
  VAR_8 = VAR_7.h1->tp_len;
  break;
 }
 if (FUNC_2(VAR_8 > VAR_5)) {
  FUNC_0("packet size is too long (%d > %d)\n", VAR_8, VAR_5);
  return -VAR_1;
 }

 if (FUNC_2(VAR_3->tp_tx_has_off)) {
  int VAR_10, VAR_11;

  VAR_10 = VAR_3->tp_hdrlen - sizeof(struct sockaddr_ll);
  VAR_11 = VAR_3->tx_ring.frame_size - VAR_8;
  if (VAR_3->sk.sk_type == VAR_2) {
   switch (VAR_3->tp_version) {
   case 128:
    VAR_9 = VAR_7.h3->tp_net;
    break;
   case 129:
    VAR_9 = VAR_7.h2->tp_net;
    break;
   default:
    VAR_9 = VAR_7.h1->tp_net;
    break;
   }
  } else {
   switch (VAR_3->tp_version) {
   case 128:
    VAR_9 = VAR_7.h3->tp_mac;
    break;
   case 129:
    VAR_9 = VAR_7.h2->tp_mac;
    break;
   default:
    VAR_9 = VAR_7.h1->tp_mac;
    break;
   }
  }
  if (FUNC_2((VAR_9 < VAR_10) || (VAR_11 < VAR_9)))
   return -VAR_0;
 } else {
  VAR_9 = VAR_3->tp_hdrlen - sizeof(struct sockaddr_ll);
 }

 *VAR_6 = VAR_4 + VAR_9;
 return VAR_8;
}
