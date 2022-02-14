
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tp_block_size; int tp_frame_size; unsigned int tp_block_nr; int tp_frame_nr; } ;
struct ring {int mm_len; int rd_num; int flen; TYPE_1__ req; int walk; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ring *VAR_2, unsigned int VAR_3)
{
 VAR_2->req.tp_block_size = FUNC_0() << 2;
 VAR_2->req.tp_frame_size = VAR_0 << 7;
 VAR_2->req.tp_block_nr = VAR_3;

 VAR_2->req.tp_frame_nr = VAR_2->req.tp_block_size /
    VAR_2->req.tp_frame_size *
    VAR_2->req.tp_block_nr;

 VAR_2->mm_len = VAR_2->req.tp_block_size * VAR_2->req.tp_block_nr;
 VAR_2->walk = VAR_1;
 VAR_2->rd_num = VAR_2->req.tp_frame_nr;
 VAR_2->flen = VAR_2->req.tp_frame_size;
}
