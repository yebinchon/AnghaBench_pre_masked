
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tp_retire_blk_tov; int tp_block_size; int tp_frame_size; unsigned int tp_block_nr; int tp_frame_nr; int tp_feature_req_word; scalar_t__ tp_sizeof_priv; } ;
struct ring {int mm_len; int rd_num; int flen; TYPE_1__ req3; int walk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ring *VAR_4, unsigned int VAR_5, int VAR_6)
{
 if (VAR_6 == VAR_0) {
  VAR_4->req3.tp_retire_blk_tov = 64;
  VAR_4->req3.tp_sizeof_priv = 0;
  VAR_4->req3.tp_feature_req_word = VAR_2;
 }
 VAR_4->req3.tp_block_size = FUNC_0() << 2;
 VAR_4->req3.tp_frame_size = VAR_1 << 7;
 VAR_4->req3.tp_block_nr = VAR_5;

 VAR_4->req3.tp_frame_nr = VAR_4->req3.tp_block_size /
     VAR_4->req3.tp_frame_size *
     VAR_4->req3.tp_block_nr;

 VAR_4->mm_len = VAR_4->req3.tp_block_size * VAR_4->req3.tp_block_nr;
 VAR_4->walk = VAR_3;
 VAR_4->rd_num = VAR_4->req3.tp_block_nr;
 VAR_4->flen = VAR_4->req3.tp_block_size;
}
