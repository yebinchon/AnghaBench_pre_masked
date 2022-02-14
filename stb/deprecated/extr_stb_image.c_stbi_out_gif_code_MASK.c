
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t cur_y; size_t max_y; int* out; size_t cur_x; int* color_table; int max_x; int start_x; size_t step; int parse; int line_size; int start_y; TYPE_1__* codes; } ;
typedef TYPE_2__ stbi_gif ;
typedef int stbi__uint8 ;
typedef size_t stbi__uint16 ;
struct TYPE_4__ {scalar_t__ prefix; int suffix; } ;



__attribute__((used)) static void FUNC_0(stbi_gif *VAR_0, stbi__uint16 VAR_1)
{
   stbi__uint8 *VAR_2, *VAR_3;



   if (VAR_0->codes[VAR_1].prefix >= 0)
      FUNC_0(VAR_0, VAR_0->codes[VAR_1].prefix);

   if (VAR_0->cur_y >= VAR_0->max_y) return;

   VAR_2 = &VAR_0->out[VAR_0->cur_x + VAR_0->cur_y];
   VAR_3 = &VAR_0->color_table[VAR_0->codes[VAR_1].suffix * 4];

   if (VAR_3[3] >= 128) {
      VAR_2[0] = VAR_3[2];
      VAR_2[1] = VAR_3[1];
      VAR_2[2] = VAR_3[0];
      VAR_2[3] = VAR_3[3];
   }
   VAR_0->cur_x += 4;

   if (VAR_0->cur_x >= VAR_0->max_x) {
      VAR_0->cur_x = VAR_0->start_x;
      VAR_0->cur_y += VAR_0->step;

      while (VAR_0->cur_y >= VAR_0->max_y && VAR_0->parse > 0) {
         VAR_0->step = (1 << VAR_0->parse) * VAR_0->line_size;
         VAR_0->cur_y = VAR_0->start_y + (VAR_0->step >> 1);
         --VAR_0->parse;
      }
   }
}
