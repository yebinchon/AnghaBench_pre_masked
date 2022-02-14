
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lzx_data {int num_position_slots; int main_tree_size; scalar_t__ len_compressed_output; scalar_t__ len_uncompressed_input; void* lzi; void* prev_main_treelengths; void* main_tree; void* main_freq_table; int * block_codes; scalar_t__ bits_in_buf; int mark_frame; int at_eof; int put_bytes; int get_bytes; void* mark_frame_arg; void* out_arg; void* in_arg; } ;
typedef int lzx_put_bytes_t ;
typedef int lzx_mark_frame_t ;
typedef int lzx_get_bytes_t ;
typedef int lzx_at_eof_t ;
typedef int huff_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int,int,int ,int ,int ,int ,int ,int ,struct lzx_data*) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct lzx_data*) ;
 void* FUNC_3 (int) ;
 int* VAR_7 ;

int FUNC_4(struct lzx_data **VAR_8, int VAR_9,
      lzx_get_bytes_t VAR_10, void *VAR_11,
      lzx_at_eof_t VAR_12,
      lzx_put_bytes_t VAR_13, void *VAR_14,
      lzx_mark_frame_t VAR_15, void *VAR_16)
{
  int VAR_17;
  struct lzx_data *VAR_18;

  if ((VAR_9 < 15) || (VAR_9 > 21)) {
    return -1;
  }
  FUNC_1();

  *VAR_8 = VAR_18 = FUNC_3(sizeof(*VAR_18));
  if (VAR_18 == 0)
    return -2;

  VAR_18->in_arg = VAR_11;
  VAR_18->out_arg = VAR_14;
  VAR_18->mark_frame_arg = VAR_16;
  VAR_18->get_bytes = VAR_10;
  VAR_18->put_bytes = VAR_13;
  VAR_18->at_eof = VAR_12;
  VAR_18->mark_frame = VAR_15;

  VAR_17 = 1 << (VAR_9);

  VAR_18->bits_in_buf = 0;
  VAR_18->block_codes = ((void*)0);
  VAR_18->num_position_slots = VAR_7[VAR_9-15];
  VAR_18->main_tree_size = (VAR_3 + 8 * VAR_18->num_position_slots);

  VAR_18->main_freq_table = FUNC_3(sizeof(int) * VAR_18->main_tree_size);
  VAR_18->main_tree = FUNC_3(sizeof(huff_entry)* VAR_18->main_tree_size);
  VAR_18->prev_main_treelengths = FUNC_3(sizeof(uint8_t)*VAR_18->main_tree_size);

  VAR_18->lzi = FUNC_3(sizeof (*VAR_18->lzi));

  FUNC_0(VAR_18->lzi, VAR_17, VAR_17 - 3, VAR_1, VAR_2, VAR_0,
   VAR_4, VAR_6, VAR_5,VAR_18);
  VAR_18->len_uncompressed_input = 0;
  VAR_18->len_compressed_output = 0;
  FUNC_2(VAR_18);
  return 0;
}
