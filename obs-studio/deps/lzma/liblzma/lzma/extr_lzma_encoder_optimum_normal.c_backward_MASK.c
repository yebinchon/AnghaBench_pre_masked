
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t opts_end_index; size_t opts_current_index; TYPE_2__* opts; } ;
typedef TYPE_1__ lzma_coder ;
struct TYPE_5__ {size_t pos_prev; size_t back_prev; int prev_1_is_literal; size_t pos_prev_2; size_t back_prev_2; scalar_t__ prev_2; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(lzma_coder *restrict VAR_0, uint32_t *restrict VAR_1,
  uint32_t *restrict VAR_2, uint32_t VAR_3)
{
 VAR_0->opts_end_index = VAR_3;

 uint32_t VAR_4 = VAR_0->opts[VAR_3].pos_prev;
 uint32_t VAR_5 = VAR_0->opts[VAR_3].back_prev;

 do {
  if (VAR_0->opts[VAR_3].prev_1_is_literal) {
   FUNC_0(&VAR_0->opts[VAR_4]);
   VAR_0->opts[VAR_4].pos_prev = VAR_4 - 1;

   if (VAR_0->opts[VAR_3].prev_2) {
    VAR_0->opts[VAR_4 - 1].prev_1_is_literal
      = 0;
    VAR_0->opts[VAR_4 - 1].pos_prev
      = VAR_0->opts[VAR_3].pos_prev_2;
    VAR_0->opts[VAR_4 - 1].back_prev
      = VAR_0->opts[VAR_3].back_prev_2;
   }
  }

  const uint32_t VAR_6 = VAR_4;
  const uint32_t VAR_7 = VAR_5;

  VAR_5 = VAR_0->opts[VAR_6].back_prev;
  VAR_4 = VAR_0->opts[VAR_6].pos_prev;

  VAR_0->opts[VAR_6].back_prev = VAR_7;
  VAR_0->opts[VAR_6].pos_prev = VAR_3;
  VAR_3 = VAR_6;

 } while (VAR_3 != 0);

 VAR_0->opts_current_index = VAR_0->opts[0].pos_prev;
 *VAR_1 = VAR_0->opts[0].pos_prev;
 *VAR_2 = VAR_0->opts[0].back_prev;

 return;
}
