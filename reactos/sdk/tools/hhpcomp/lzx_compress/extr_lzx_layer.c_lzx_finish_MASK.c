
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzx_results {int len_uncompressed_input; int len_compressed_output; } ;
struct lzx_data {struct lzx_data* main_freq_table; struct lzx_data* main_tree; struct lzx_data* prev_main_treelengths; struct lzx_data* lzi; int len_uncompressed_input; int len_compressed_output; } ;


 int FUNC_0 (struct lzx_data*) ;
 int FUNC_1 (struct lzx_data*) ;

int FUNC_2(struct lzx_data *VAR_0, struct lzx_results *VAR_1)
{

  if (VAR_1) {
    VAR_1->len_compressed_output = VAR_0->len_compressed_output;
    VAR_1->len_uncompressed_input = VAR_0->len_uncompressed_input;
  }
  FUNC_1(VAR_0->lzi);
  FUNC_0(VAR_0->lzi);
  FUNC_0(VAR_0->prev_main_treelengths);
  FUNC_0(VAR_0->main_tree);
  FUNC_0(VAR_0->main_freq_table);
  FUNC_0(VAR_0);
  return 0;
}
