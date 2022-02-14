
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int need_1bit_header; int R0; int R1; int R2; int main_tree_size; int lzi; int prev_length_treelengths; int prev_main_treelengths; } ;
typedef TYPE_1__ lzx_data ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(lzx_data *VAR_1)
{
  VAR_1->need_1bit_header = 1;
  VAR_1->R0 = VAR_1->R1 = VAR_1->R2 = 1;
  FUNC_1(VAR_1->prev_main_treelengths, 0, VAR_1->main_tree_size * sizeof(uint8_t));
  FUNC_1(VAR_1->prev_length_treelengths, 0, VAR_0 * sizeof(uint8_t));
  FUNC_0(VAR_1->lzi);
}
