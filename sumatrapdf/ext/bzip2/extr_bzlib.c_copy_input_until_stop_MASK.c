
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt32 ;
typedef scalar_t__ UChar ;
struct TYPE_6__ {scalar_t__ mode; scalar_t__ nblock; scalar_t__ nblockMAX; scalar_t__ avail_in_expect; TYPE_1__* strm; } ;
struct TYPE_5__ {scalar_t__ avail_in; scalar_t__ total_in_lo32; int total_in_hi32; scalar_t__ next_in; } ;
typedef TYPE_2__ EState ;
typedef scalar_t__ Bool ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static
Bool FUNC_1 ( EState* VAR_3 )
{
   Bool VAR_4 = VAR_1;

   if (VAR_3->mode == VAR_0) {


      while (VAR_2) {

         if (VAR_3->nblock >= VAR_3->nblockMAX) break;

         if (VAR_3->strm->avail_in == 0) break;
         VAR_4 = VAR_2;
         FUNC_0 ( VAR_3, (UInt32)(*((UChar*)(VAR_3->strm->next_in))) );
         VAR_3->strm->next_in++;
         VAR_3->strm->avail_in--;
         VAR_3->strm->total_in_lo32++;
         if (VAR_3->strm->total_in_lo32 == 0) VAR_3->strm->total_in_hi32++;
      }

   } else {


      while (VAR_2) {

         if (VAR_3->nblock >= VAR_3->nblockMAX) break;

         if (VAR_3->strm->avail_in == 0) break;

         if (VAR_3->avail_in_expect == 0) break;
         VAR_4 = VAR_2;
         FUNC_0 ( VAR_3, (UInt32)(*((UChar*)(VAR_3->strm->next_in))) );
         VAR_3->strm->next_in++;
         VAR_3->strm->avail_in--;
         VAR_3->strm->total_in_lo32++;
         if (VAR_3->strm->total_in_lo32 == 0) VAR_3->strm->total_in_hi32++;
         VAR_3->avail_in_expect--;
      }
   }
   return VAR_4;
}
