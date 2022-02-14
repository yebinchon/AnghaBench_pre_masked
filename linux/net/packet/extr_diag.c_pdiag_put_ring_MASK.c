
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ feature_req_word; scalar_t__ blk_sizeof_priv; scalar_t__ retire_blk_tov; } ;
struct packet_ring_buffer {int pg_vec_pages; TYPE_1__ prb_bdqc; scalar_t__ frame_max; int frame_size; int pg_vec_len; int pg_vec; } ;
struct packet_diag_ring {int pdr_block_size; scalar_t__ pdr_features; scalar_t__ pdr_sizeof_priv; scalar_t__ pdr_retire_tmo; scalar_t__ pdr_frame_nr; int pdr_frame_size; int pdr_block_nr; } ;
typedef int pdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int,int,struct packet_diag_ring*) ;

__attribute__((used)) static int FUNC_1(struct packet_ring_buffer *VAR_2, int VAR_3, int VAR_4,
  struct sk_buff *VAR_5)
{
 struct packet_diag_ring VAR_6;

 if (!VAR_2->pg_vec)
  return 0;

 VAR_6.pdr_block_size = VAR_2->pg_vec_pages << VAR_0;
 VAR_6.pdr_block_nr = VAR_2->pg_vec_len;
 VAR_6.pdr_frame_size = VAR_2->frame_size;
 VAR_6.pdr_frame_nr = VAR_2->frame_max + 1;

 if (VAR_3 > VAR_1) {
  VAR_6.pdr_retire_tmo = VAR_2->prb_bdqc.retire_blk_tov;
  VAR_6.pdr_sizeof_priv = VAR_2->prb_bdqc.blk_sizeof_priv;
  VAR_6.pdr_features = VAR_2->prb_bdqc.feature_req_word;
 } else {
  VAR_6.pdr_retire_tmo = 0;
  VAR_6.pdr_sizeof_priv = 0;
  VAR_6.pdr_features = 0;
 }

 return FUNC_0(VAR_5, VAR_4, sizeof(VAR_6), &VAR_6);
}
