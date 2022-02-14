
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef long uint32_t ;
struct TYPE_8__ {int block_size; int subdivide; int left_in_block; scalar_t__ left_in_frame; double main_entropy; double last_ratio; int* length_freq_table; int* main_freq_table; int main_tree_size; int* aligned_freq_table; long* prev_main_treelengths; long* prev_length_treelengths; int * block_codes; int * block_codesp; TYPE_3__* length_tree; TYPE_3__* main_tree; TYPE_3__* aligned_tree; scalar_t__ need_1bit_header; int in_arg; scalar_t__ (* at_eof ) (int ) ;int lzi; } ;
typedef TYPE_1__ lzx_data ;
struct TYPE_9__ {long codelength; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int,long) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,long*,int) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int*,int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;

int FUNC_12(lzx_data *VAR_8, int VAR_9, int VAR_10)
{
  int VAR_11;
  uint32_t VAR_12 = 0;
  int VAR_13;
  long VAR_14;
  long VAR_15;
  long VAR_16;
  long VAR_17;

  if ((VAR_8->block_size != VAR_9) || (VAR_8->block_codes == ((void*)0))) {
    if (VAR_8->block_codes != ((void*)0)) FUNC_2(VAR_8->block_codes);
    VAR_8->block_size = VAR_9;
    VAR_8->block_codes = FUNC_8(VAR_9 * sizeof(uint32_t));
  }
  VAR_8->subdivide = VAR_10?1:0;

  VAR_8->left_in_block = VAR_9;
  VAR_8->left_in_frame = VAR_2;
  VAR_8->main_entropy = 0.0;
  VAR_8->last_ratio = 9999999.0;
  VAR_8->block_codesp = VAR_8->block_codes;

  FUNC_9(VAR_8->length_freq_table, 0, VAR_6 * sizeof(int));
  FUNC_9(VAR_8->main_freq_table, 0, VAR_8->main_tree_size * sizeof(int));
  FUNC_9(VAR_8->aligned_freq_table, 0, VAR_1 * sizeof(int));
  do {
    FUNC_3(VAR_8->lzi, VAR_8->left_in_block);
    if (VAR_8->left_in_frame == 0)
      VAR_8->left_in_frame = VAR_2;

    if ((VAR_8->subdivide<0) || !VAR_8->left_in_block ||
 (!FUNC_4(VAR_8->lzi) && VAR_8->at_eof(VAR_8->in_arg))) {


      VAR_17 = VAR_8->block_size - VAR_8->left_in_block - VAR_12;


      if (VAR_17 == 0)
   continue;
      if (VAR_8->subdivide < 0) {



 VAR_8->subdivide = 1;
      }

      if (VAR_8->need_1bit_header) {


 FUNC_5(VAR_8, 1, 0);
 VAR_8->need_1bit_header = 0;
      }


      VAR_14 = VAR_15 = 0;
      FUNC_0(VAR_1, 7, VAR_8->aligned_freq_table, VAR_8->aligned_tree);
      for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
 VAR_14 += VAR_8->aligned_freq_table[VAR_11]* 3;
 VAR_15 += VAR_8->aligned_freq_table[VAR_11]* VAR_8->aligned_tree[VAR_11].codelength;
      }
      VAR_16 = VAR_15 + VAR_1 * 3;
      if (VAR_16 < VAR_14)
       VAR_13 = VAR_0;
      else
 VAR_13 = VAR_4;






      FUNC_5(VAR_8, 3, VAR_13);

      FUNC_5(VAR_8, 24, VAR_17);

      VAR_12 = VAR_8->block_size - VAR_8->left_in_block;


      if (VAR_13 == VAR_0) {
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   FUNC_5(VAR_8, 3, VAR_8->aligned_tree[VAR_11].codelength);
 }
      }

      FUNC_0(VAR_8->main_tree_size, VAR_3,
    VAR_8->main_freq_table, VAR_8->main_tree);
      FUNC_0(VAR_6, 16,
    VAR_8->length_freq_table, VAR_8->length_tree);




      FUNC_7(VAR_8, VAR_8->main_tree, VAR_8->prev_main_treelengths, VAR_5);


      FUNC_7(VAR_8, VAR_8->main_tree + VAR_5,
    VAR_8->prev_main_treelengths + VAR_5,
    VAR_8->main_tree_size - VAR_5);


      FUNC_7(VAR_8, VAR_8->length_tree, VAR_8->prev_length_treelengths,
    VAR_6);


      FUNC_6(VAR_8, VAR_13);


      for (VAR_11 = 0; VAR_11 < VAR_8->main_tree_size; VAR_11++) {
 VAR_8->prev_main_treelengths[VAR_11] = VAR_8->main_tree[VAR_11].codelength;
      }
      for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
 VAR_8->prev_length_treelengths[VAR_11] = VAR_8->length_tree[VAR_11].codelength;
      }
      VAR_8->main_entropy = 0.0;
      VAR_8->last_ratio = 9999999.0;
      VAR_8->block_codesp = VAR_8->block_codes;

      FUNC_9(VAR_8->length_freq_table, 0, VAR_6 * sizeof(int));
      FUNC_9(VAR_8->main_freq_table, 0, VAR_8->main_tree_size * sizeof(int));
      FUNC_9(VAR_8->aligned_freq_table, 0, VAR_1 * sizeof(int));
    }
  }
  while (VAR_8->left_in_block && (FUNC_4(VAR_8->lzi) || !VAR_8->at_eof(VAR_8->in_arg)));
  return 0;
}
