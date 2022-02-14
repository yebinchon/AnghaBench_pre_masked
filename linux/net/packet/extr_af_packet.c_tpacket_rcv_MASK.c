
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


union tpacket_uhdr {struct sockaddr_ll* raw; TYPE_5__* h3; TYPE_4__* h2; TYPE_3__* h1; } ;
struct sockaddr_ll {scalar_t__ sll_pkttype; int sll_ifindex; int sll_protocol; int sll_hatype; int sll_family; int sll_addr; int sll_halen; } ;
typedef struct sockaddr_ll u8 ;
typedef unsigned int u32 ;
struct virtio_net_hdr {int dummy; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_17__ {int lock; } ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_rcvbuf; int (* sk_data_ready ) (struct sock*) ;TYPE_8__ sk_receive_queue; int sk_rmem_alloc; } ;
struct sk_buff {int len; scalar_t__ pkt_type; scalar_t__ ip_summed; struct sockaddr_ll* data; int protocol; int vlan_proto; } ;
struct packet_type {struct sock* af_packet_priv; } ;
struct TYPE_16__ {unsigned short frame_size; } ;
struct TYPE_11__ {int tp_packets; } ;
struct TYPE_12__ {TYPE_1__ stats1; } ;
struct packet_sock {unsigned short tp_hdrlen; int tp_reserve; int tp_version; int origdev; int tp_drops; TYPE_6__ rx_ring; int tp_tstamp; TYPE_2__ stats; scalar_t__ copy_thresh; scalar_t__ has_vnet_hdr; } ;
struct net_device {int ifindex; int type; scalar_t__ header_ops; } ;
typedef unsigned long __u32 ;
struct TYPE_18__ {unsigned short max_frame_len; } ;
struct TYPE_15__ {unsigned long tp_status; unsigned int tp_len; unsigned int tp_snaplen; unsigned short tp_mac; unsigned short tp_net; int tp_nsec; int tp_padding; int tp_sec; } ;
struct TYPE_14__ {unsigned int tp_len; unsigned int tp_snaplen; unsigned short tp_mac; unsigned short tp_net; int tp_nsec; int tp_padding; int tp_vlan_tpid; int tp_vlan_tci; int tp_sec; } ;
struct TYPE_13__ {unsigned int tp_len; unsigned int tp_snaplen; unsigned short tp_mac; unsigned short tp_net; int tp_usec; int tp_sec; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_9__* FUNC_2 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (unsigned short) ;



 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 scalar_t__ FUNC_5 (struct packet_sock*,struct sk_buff*) ;
 int FUNC_6 (struct packet_sock*,struct sockaddr_ll*,unsigned long) ;
 int FUNC_7 (TYPE_8__*,struct sk_buff*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct timespec*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 struct sockaddr_ll* FUNC_19 (struct packet_sock*,struct sk_buff*,int ,unsigned short) ;
 int FUNC_20 (struct packet_sock*,TYPE_6__*) ;
 int FUNC_21 (struct sockaddr_ll*) ;
 struct packet_sock* FUNC_22 (struct sock*) ;
 int FUNC_23 (char*,unsigned int,unsigned int,unsigned short) ;
 int FUNC_24 (TYPE_6__*) ;
 unsigned int FUNC_25 (struct sk_buff*,struct sock*,unsigned int) ;
 struct sk_buff* FUNC_26 (struct sk_buff*,int ) ;
 int FUNC_27 (struct sk_buff*,int ,struct sockaddr_ll*,unsigned int) ;
 scalar_t__ FUNC_28 (struct sk_buff*) ;
 struct sk_buff* FUNC_29 (struct sk_buff*) ;
 int FUNC_30 (struct sk_buff*) ;
 unsigned int FUNC_31 (struct sk_buff*) ;
 int FUNC_32 (struct sk_buff*,unsigned int) ;
 int FUNC_33 (struct sk_buff*,struct sockaddr_ll*) ;
 int FUNC_34 (struct sk_buff*,struct sock*) ;
 scalar_t__ FUNC_35 (struct sk_buff*) ;
 int FUNC_36 (struct sk_buff*) ;
 int FUNC_37 (struct sk_buff*) ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 (struct sock*) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (struct sock*) ;
 int FUNC_44 (struct sock*) ;
 unsigned long FUNC_45 (struct sk_buff*,struct timespec*,int ) ;
 scalar_t__ FUNC_46 (int) ;
 int FUNC_47 () ;
 scalar_t__ FUNC_48 (struct sk_buff*,struct sockaddr_ll*,int ,int,int ) ;

__attribute__((used)) static int FUNC_49(struct sk_buff *VAR_18, struct net_device *VAR_19,
         struct packet_type *VAR_20, struct net_device *VAR_21)
{
 struct sock *VAR_22;
 struct packet_sock *VAR_23;
 struct sockaddr_ll *VAR_24;
 union tpacket_uhdr VAR_25;
 u8 *VAR_26 = VAR_18->data;
 int VAR_27 = VAR_18->len;
 unsigned int VAR_28, VAR_29;
 unsigned long VAR_30 = VAR_15;
 unsigned short VAR_31, VAR_32, VAR_33;
 struct sk_buff *VAR_34 = ((void*)0);
 struct timespec VAR_35;
 __u32 VAR_36;
 bool VAR_37 = 0;
 bool VAR_38 = 0;





 FUNC_1(FUNC_4(sizeof(*VAR_25.h2)) != 32);
 FUNC_1(FUNC_4(sizeof(*VAR_25.h3)) != 48);

 if (VAR_18->pkt_type == VAR_5)
  goto drop;

 VAR_22 = VAR_20->af_packet_priv;
 VAR_23 = FUNC_22(VAR_22);

 if (!FUNC_17(FUNC_11(VAR_19), FUNC_40(VAR_22)))
  goto drop;

 if (VAR_19->header_ops) {
  if (VAR_22->sk_type != VAR_9)
   FUNC_33(VAR_18, VAR_18->data - FUNC_30(VAR_18));
  else if (VAR_18->pkt_type == VAR_6) {

   FUNC_32(VAR_18, FUNC_31(VAR_18));
  }
 }

 VAR_28 = VAR_18->len;

 VAR_29 = FUNC_25(VAR_18, VAR_22, VAR_28);
 if (!VAR_29)
  goto drop_n_restore;


 if (FUNC_5(VAR_23, VAR_18) == VAR_8) {
  FUNC_8(&VAR_23->tp_drops);
  goto drop_n_restore;
 }

 if (VAR_18->ip_summed == VAR_2)
  VAR_30 |= VAR_11;
 else if (VAR_18->pkt_type != VAR_6 &&
   (VAR_18->ip_summed == VAR_1 ||
    FUNC_28(VAR_18)))
  VAR_30 |= VAR_12;

 if (VAR_28 > VAR_29)
  VAR_28 = VAR_29;

 if (VAR_22->sk_type == VAR_9) {
  VAR_31 = VAR_32 = FUNC_4(VAR_23->tp_hdrlen) + 16 +
      VAR_23->tp_reserve;
 } else {
  unsigned int VAR_39 = FUNC_31(VAR_18);
  VAR_32 = FUNC_4(VAR_23->tp_hdrlen +
           (VAR_39 < 16 ? 16 : VAR_39)) +
           VAR_23->tp_reserve;
  if (VAR_23->has_vnet_hdr) {
   VAR_32 += sizeof(struct virtio_net_hdr);
   VAR_38 = 1;
  }
  VAR_31 = VAR_32 - VAR_39;
 }
 if (VAR_23->tp_version <= 129) {
  if (VAR_31 + VAR_28 > VAR_23->rx_ring.frame_size) {
   if (VAR_23->copy_thresh &&
       FUNC_9(&VAR_22->sk_rmem_alloc) < VAR_22->sk_rcvbuf) {
    if (FUNC_35(VAR_18)) {
     VAR_34 = FUNC_26(VAR_18, VAR_3);
    } else {
     VAR_34 = FUNC_29(VAR_18);
     VAR_26 = VAR_18->data;
    }
    if (VAR_34)
     FUNC_34(VAR_34, VAR_22);
   }
   VAR_28 = VAR_23->rx_ring.frame_size - VAR_31;
   if ((int)VAR_28 < 0) {
    VAR_28 = 0;
    VAR_38 = 0;
   }
  }
 } else if (FUNC_46(VAR_31 + VAR_28 >
       FUNC_2(&VAR_23->rx_ring)->max_frame_len)) {
  u32 VAR_40;

  VAR_40 = FUNC_2(&VAR_23->rx_ring)->max_frame_len - VAR_31;
  FUNC_23("tpacket_rcv: packet too big, clamped from %u to %u. macoff=%u\n",
       VAR_28, VAR_40, VAR_31);
  VAR_28 = VAR_40;
  if (FUNC_46((int)VAR_28 < 0)) {
   VAR_28 = 0;
   VAR_31 = FUNC_2(&VAR_23->rx_ring)->max_frame_len;
   VAR_38 = 0;
  }
 }
 FUNC_41(&VAR_22->sk_receive_queue.lock);
 VAR_25.raw = FUNC_19(VAR_23, VAR_18,
     VAR_13, (VAR_31+VAR_28));
 if (!VAR_25.raw)
  goto drop_n_account;
 if (VAR_23->tp_version <= 129) {
  FUNC_20(VAR_23, &VAR_23->rx_ring);






  if (FUNC_9(&VAR_23->tp_drops))
   VAR_30 |= VAR_14;
 }

 if (VAR_38 &&
     FUNC_48(VAR_18, VAR_25.raw + VAR_31 -
        sizeof(struct virtio_net_hdr),
        FUNC_47(), 1, 0))
  goto drop_n_account;

 VAR_23->stats.stats1.tp_packets++;
 if (VAR_34) {
  VAR_30 |= VAR_10;
  FUNC_7(&VAR_22->sk_receive_queue, VAR_34);
 }
 FUNC_42(&VAR_22->sk_receive_queue.lock);

 FUNC_27(VAR_18, 0, VAR_25.raw + VAR_31, VAR_28);

 if (!(VAR_36 = FUNC_45(VAR_18, &VAR_35, VAR_23->tp_tstamp)))
  FUNC_14(&VAR_35);

 VAR_30 |= VAR_36;

 switch (VAR_23->tp_version) {
 case 130:
  VAR_25.h1->tp_len = VAR_18->len;
  VAR_25.h1->tp_snaplen = VAR_28;
  VAR_25.h1->tp_mac = VAR_31;
  VAR_25.h1->tp_net = VAR_32;
  VAR_25.h1->tp_sec = VAR_35.tv_sec;
  VAR_25.h1->tp_usec = VAR_35.tv_nsec / VAR_4;
  VAR_33 = sizeof(*VAR_25.h1);
  break;
 case 129:
  VAR_25.h2->tp_len = VAR_18->len;
  VAR_25.h2->tp_snaplen = VAR_28;
  VAR_25.h2->tp_mac = VAR_31;
  VAR_25.h2->tp_net = VAR_32;
  VAR_25.h2->tp_sec = VAR_35.tv_sec;
  VAR_25.h2->tp_nsec = VAR_35.tv_nsec;
  if (FUNC_37(VAR_18)) {
   VAR_25.h2->tp_vlan_tci = FUNC_36(VAR_18);
   VAR_25.h2->tp_vlan_tpid = FUNC_18(VAR_18->vlan_proto);
   VAR_30 |= VAR_17 | VAR_16;
  } else {
   VAR_25.h2->tp_vlan_tci = 0;
   VAR_25.h2->tp_vlan_tpid = 0;
  }
  FUNC_16(VAR_25.h2->tp_padding, 0, sizeof(VAR_25.h2->tp_padding));
  VAR_33 = sizeof(*VAR_25.h2);
  break;
 case 128:



  VAR_25.h3->tp_status |= VAR_30;
  VAR_25.h3->tp_len = VAR_18->len;
  VAR_25.h3->tp_snaplen = VAR_28;
  VAR_25.h3->tp_mac = VAR_31;
  VAR_25.h3->tp_net = VAR_32;
  VAR_25.h3->tp_sec = VAR_35.tv_sec;
  VAR_25.h3->tp_nsec = VAR_35.tv_nsec;
  FUNC_16(VAR_25.h3->tp_padding, 0, sizeof(VAR_25.h3->tp_padding));
  VAR_33 = sizeof(*VAR_25.h3);
  break;
 default:
  FUNC_0();
 }

 VAR_24 = VAR_25.raw + FUNC_4(VAR_33);
 VAR_24->sll_halen = FUNC_12(VAR_18, VAR_24->sll_addr);
 VAR_24->sll_family = VAR_0;
 VAR_24->sll_hatype = VAR_19->type;
 VAR_24->sll_protocol = VAR_18->protocol;
 VAR_24->sll_pkttype = VAR_18->pkt_type;
 if (FUNC_46(VAR_23->origdev))
  VAR_24->sll_ifindex = VAR_21->ifindex;
 else
  VAR_24->sll_ifindex = VAR_19->ifindex;

 FUNC_38();
 if (VAR_23->tp_version <= 129) {
  FUNC_6(VAR_23, VAR_25.raw, VAR_30);
  VAR_22->sk_data_ready(VAR_22);
 } else {
  FUNC_24(&VAR_23->rx_ring);
 }

drop_n_restore:
 if (VAR_26 != VAR_18->data && FUNC_35(VAR_18)) {
  VAR_18->data = VAR_26;
  VAR_18->len = VAR_27;
 }
drop:
 if (!VAR_37)
  FUNC_10(VAR_18);
 else
  FUNC_15(VAR_18);
 return 0;

drop_n_account:
 FUNC_42(&VAR_22->sk_receive_queue.lock);
 FUNC_8(&VAR_23->tp_drops);
 VAR_37 = 1;

 VAR_22->sk_data_ready(VAR_22);
 FUNC_15(VAR_34);
 goto drop_n_restore;
}
