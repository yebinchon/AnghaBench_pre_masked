
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t state_out_pos; size_t numZ; TYPE_1__* strm; int * zbits; } ;
struct TYPE_4__ {scalar_t__ avail_out; scalar_t__ total_out_lo32; int total_out_hi32; int * next_out; } ;
typedef TYPE_2__ EState ;
typedef scalar_t__ Bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static
Bool FUNC_0 ( EState* VAR_2 )
{
   Bool VAR_3 = VAR_0;

   while (VAR_1) {


      if (VAR_2->strm->avail_out == 0) break;


      if (VAR_2->state_out_pos >= VAR_2->numZ) break;

      VAR_3 = VAR_1;
      *(VAR_2->strm->next_out) = VAR_2->zbits[VAR_2->state_out_pos];
      VAR_2->state_out_pos++;
      VAR_2->strm->avail_out--;
      VAR_2->strm->next_out++;
      VAR_2->strm->total_out_lo32++;
      if (VAR_2->strm->total_out_lo32 == 0) VAR_2->strm->total_out_hi32++;
   }

   return VAR_3;
}
