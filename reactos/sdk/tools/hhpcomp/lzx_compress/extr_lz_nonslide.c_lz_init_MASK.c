
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int output_match_t ;
typedef int output_literal_t ;
struct TYPE_3__ {int wsize; int max_match; int min_match; int max_dist; int block_buf_size; int frame_size; scalar_t__ analysis_valid; void* prevtab; void* lentab; void* user_data; int output_literal; int output_match; int get_chars; scalar_t__ eofcount; scalar_t__ chars_in_buf; scalar_t__ block_loc; scalar_t__ cur_loc; int * block_buf; int * block_bufe; } ;
typedef TYPE_1__ lz_info ;
typedef int get_chars_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;
 int * FUNC_2 (int) ;

void FUNC_3(lz_info *VAR_0, int VAR_1, int VAR_2,
      int VAR_3, int VAR_4,
      int VAR_5,
      get_chars_t VAR_6,
      output_match_t VAR_7,
      output_literal_t VAR_8, void *VAR_9)
{





  VAR_0->wsize = VAR_1;
  if (VAR_3 > VAR_1)
    VAR_0->max_match = VAR_1;
  else
    VAR_0->max_match = VAR_3;

  VAR_0->min_match = VAR_4;
  if (VAR_0->min_match < 3) VAR_0->min_match = 3;

  VAR_0->max_dist = VAR_2;
  VAR_0->block_buf_size = VAR_1 + VAR_0->max_dist;
  VAR_0->block_buf = FUNC_2(VAR_0->block_buf_size);
  VAR_0->block_bufe = VAR_0->block_buf + VAR_0->block_buf_size;
  FUNC_0(VAR_0->block_buf != ((void*)0));

  VAR_0->cur_loc = 0;
  VAR_0->block_loc = 0;
  VAR_0->chars_in_buf = 0;
  VAR_0->eofcount = 0;
  VAR_0->get_chars = VAR_6;
  VAR_0->output_match = VAR_7;
  VAR_0->output_literal = VAR_8;
  VAR_0->user_data = VAR_9;
  VAR_0->frame_size = VAR_5;
  VAR_0->lentab = FUNC_1(sizeof(int), VAR_0->block_buf_size);
  VAR_0->prevtab = FUNC_1(sizeof(u_char *), VAR_0->block_buf_size);
  VAR_0->analysis_valid = 0;
}
