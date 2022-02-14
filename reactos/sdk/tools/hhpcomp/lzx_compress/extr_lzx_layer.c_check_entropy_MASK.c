
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* main_freq_table; double main_entropy; int block_codesp; int block_codes; int left_in_block; int main_tree_size; double last_ratio; int subdivide; int lzi; } ;
typedef TYPE_1__ lzx_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 double FUNC_1 (double) ;
 int FUNC_2 (int ) ;
 double VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(lzx_data *VAR_4, int VAR_5)
{
    double VAR_6;
    double VAR_7;
    double VAR_8;
    double VAR_9;
    int VAR_10;


    if (VAR_4->main_freq_table[VAR_5] != 1) {
      VAR_6 = (double)VAR_4->main_freq_table[VAR_5]-1;
      VAR_4->main_entropy += VAR_6 * FUNC_1(VAR_6);
    }

    VAR_6 = (double)VAR_4->main_freq_table[VAR_5];
    VAR_4->main_entropy -= VAR_6 * FUNC_1(VAR_6);
    VAR_10 = VAR_4->block_codesp - VAR_4->block_codes;

    if (((VAR_10 & 0xFFF) == 0) && (VAR_4->left_in_block >= 0x1000)) {
      VAR_7 = (double)VAR_10 * FUNC_1((double)VAR_10);
      VAR_8 = VAR_2 / (double)VAR_10;
      VAR_9 = (VAR_10 * VAR_8 *(VAR_7 + VAR_4->main_entropy) + 24 + 3 * 80 + VAR_0 + (VAR_4->main_tree_size-VAR_0)*3 + VAR_1 ) / (double)VAR_10;






      if (VAR_9 > VAR_4->last_ratio) {



 VAR_4->subdivide = -1;
 FUNC_2(VAR_4->lzi);
      }
      VAR_4->last_ratio = VAR_9;
    }
}
