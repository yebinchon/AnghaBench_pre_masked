
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpacket_req3 {int tp_feature_req_word; scalar_t__ tp_sizeof_priv; int tp_retire_blk_tov; } ;
struct tpacket_req {int tp_block_nr; scalar_t__ tp_block_size; unsigned int tp_frame_size; int tp_frame_nr; } ;
union tpacket_req_u {struct tpacket_req3 req3; struct tpacket_req req; } ;
typedef int u64 ;
struct sk_buff_head {int lock; } ;
struct sock {struct sk_buff_head sk_receive_queue; struct sk_buff_head sk_write_queue; } ;
struct pgv {int dummy; } ;
struct packet_ring_buffer {int pg_vec; int frames_per_block; int frame_max; int frame_size; int pg_vec_pages; int pg_vec_len; int pg_vec_order; scalar_t__ head; } ;
struct TYPE_2__ {int func; } ;
struct packet_sock {int tp_version; unsigned int tp_hdrlen; unsigned int tp_reserve; int running; int bind_lock; scalar_t__ num; int pg_vec_lock; int mapped; struct packet_ring_buffer rx_ring; TYPE_1__ prot_hook; struct packet_ring_buffer tx_ring; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;



 int VAR_8 ;
 int FUNC_2 (struct sock*,int) ;
 struct pgv* FUNC_3 (struct tpacket_req*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct pgv*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct packet_sock*,struct packet_ring_buffer*,struct pgv*,union tpacket_req_u*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (struct packet_ring_buffer*) ;
 struct packet_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (char*,scalar_t__) ;
 int FUNC_13 (struct packet_sock*,struct sk_buff_head*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sk_buff_head*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int,int) ;
 int FUNC_21 () ;
 int VAR_10 ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct sock *VAR_11, union tpacket_req_u *VAR_12,
  int VAR_13, int VAR_14)
{
 struct pgv *VAR_15 = ((void*)0);
 struct packet_sock *VAR_16 = FUNC_11(VAR_11);
 int VAR_17, VAR_18 = 0;
 struct packet_ring_buffer *VAR_19;
 struct sk_buff_head *VAR_20;
 __be16 VAR_21;
 int VAR_22 = -VAR_1;

 struct tpacket_req *VAR_23 = &VAR_12->req;

 VAR_19 = VAR_14 ? &VAR_16->tx_ring : &VAR_16->rx_ring;
 VAR_20 = VAR_14 ? &VAR_11->sk_write_queue : &VAR_11->sk_receive_queue;

 VAR_22 = -VAR_0;
 if (!VAR_13) {
  if (FUNC_4(&VAR_16->mapped))
   goto out;
  if (FUNC_10(VAR_19))
   goto out;
 }

 if (VAR_23->tp_block_nr) {
  unsigned int VAR_24;


  VAR_22 = -VAR_0;
  if (FUNC_22(VAR_19->pg_vec))
   goto out;

  switch (VAR_16->tp_version) {
  case 130:
   VAR_16->tp_hdrlen = VAR_7;
   break;
  case 129:
   VAR_16->tp_hdrlen = VAR_4;
   break;
  case 128:
   VAR_16->tp_hdrlen = VAR_5;
   break;
  }

  VAR_22 = -VAR_1;
  if (FUNC_22((int)VAR_23->tp_block_size <= 0))
   goto out;
  if (FUNC_22(!FUNC_1(VAR_23->tp_block_size)))
   goto out;
  VAR_24 = VAR_16->tp_hdrlen + VAR_16->tp_reserve;
  if (VAR_16->tp_version >= 128 &&
      VAR_23->tp_block_size <
      FUNC_0((u64)VAR_12->req3.tp_sizeof_priv) + VAR_24)
   goto out;
  if (FUNC_22(VAR_23->tp_frame_size < VAR_24))
   goto out;
  if (FUNC_22(VAR_23->tp_frame_size & (VAR_6 - 1)))
   goto out;

  VAR_19->frames_per_block = VAR_23->tp_block_size / VAR_23->tp_frame_size;
  if (FUNC_22(VAR_19->frames_per_block == 0))
   goto out;
  if (FUNC_22(VAR_19->frames_per_block > VAR_8 / VAR_23->tp_block_nr))
   goto out;
  if (FUNC_22((VAR_19->frames_per_block * VAR_23->tp_block_nr) !=
     VAR_23->tp_frame_nr))
   goto out;

  VAR_22 = -VAR_2;
  VAR_18 = FUNC_6(VAR_23->tp_block_size);
  VAR_15 = FUNC_3(VAR_23, VAR_18);
  if (FUNC_22(!VAR_15))
   goto out;
  switch (VAR_16->tp_version) {
  case 128:

   if (!VAR_14) {
    FUNC_7(VAR_16, VAR_19, VAR_15, VAR_12);
   } else {
    struct tpacket_req3 *VAR_25 = &VAR_12->req3;

    if (VAR_25->tp_retire_blk_tov ||
        VAR_25->tp_sizeof_priv ||
        VAR_25->tp_feature_req_word) {
     VAR_22 = -VAR_1;
     goto out_free_pg_vec;
    }
   }
   break;
  default:
   break;
  }
 }

 else {
  VAR_22 = -VAR_1;
  if (FUNC_22(VAR_23->tp_frame_nr))
   goto out;
 }



 FUNC_16(&VAR_16->bind_lock);
 VAR_17 = VAR_16->running;
 VAR_21 = VAR_16->num;
 if (VAR_17) {
  VAR_16->num = 0;
  FUNC_2(VAR_11, 0);
 }
 FUNC_18(&VAR_16->bind_lock);

 FUNC_21();

 VAR_22 = -VAR_0;
 FUNC_8(&VAR_16->pg_vec_lock);
 if (VAR_13 || FUNC_4(&VAR_16->mapped) == 0) {
  VAR_22 = 0;
  FUNC_17(&VAR_20->lock);
  FUNC_20(VAR_19->pg_vec, VAR_15);
  VAR_19->frame_max = (VAR_23->tp_frame_nr - 1);
  VAR_19->head = 0;
  VAR_19->frame_size = VAR_23->tp_frame_size;
  FUNC_19(&VAR_20->lock);

  FUNC_20(VAR_19->pg_vec_order, VAR_18);
  FUNC_20(VAR_19->pg_vec_len, VAR_23->tp_block_nr);

  VAR_19->pg_vec_pages = VAR_23->tp_block_size/VAR_3;
  VAR_16->prot_hook.func = (VAR_16->rx_ring.pg_vec) ?
      VAR_10 : VAR_9;
  FUNC_15(VAR_20);
  if (FUNC_4(&VAR_16->mapped))
   FUNC_12("packet_mmap: vma is busy: %d\n",
          FUNC_4(&VAR_16->mapped));
 }
 FUNC_9(&VAR_16->pg_vec_lock);

 FUNC_16(&VAR_16->bind_lock);
 if (VAR_17) {
  VAR_16->num = VAR_21;
  FUNC_14(VAR_11);
 }
 FUNC_18(&VAR_16->bind_lock);
 if (VAR_15 && (VAR_16->tp_version > 129)) {

  if (!VAR_14)
   FUNC_13(VAR_16, VAR_20);
 }

out_free_pg_vec:
 if (VAR_15)
  FUNC_5(VAR_15, VAR_18, VAR_23->tp_block_nr);
out:
 return VAR_22;
}
