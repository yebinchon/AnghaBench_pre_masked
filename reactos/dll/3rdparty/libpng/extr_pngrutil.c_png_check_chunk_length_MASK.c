
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_const_structrp ;
typedef scalar_t__ png_alloc_size_t ;
struct TYPE_4__ {scalar_t__ user_chunk_malloc_max; scalar_t__ chunk_name; int bit_depth; size_t height; scalar_t__ interlaced; scalar_t__ channels; scalar_t__ width; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long) ;

void
FUNC_2(png_const_structrp VAR_4, png_uint_32 VAR_5)
{
   png_alloc_size_t VAR_6 = VAR_0;
   if (VAR_4->chunk_name == VAR_3)
   {
      png_alloc_size_t VAR_7 = VAR_0;
      size_t VAR_8 =
         (size_t)VAR_4->width
         * (size_t)VAR_4->channels
         * (VAR_4->bit_depth > 8? 2: 1)
         + 1
         + (VAR_4->interlaced? 6: 0);
      if (VAR_4->height > VAR_1/VAR_8)
         VAR_7 = VAR_0;
      else
         VAR_7 = VAR_4->height * VAR_8;
      VAR_8 = VAR_8 > 32566? 32566 : VAR_8;
      VAR_7 += 6 + 5*(VAR_7/VAR_8+1);
      VAR_7=VAR_7 < VAR_0? VAR_7 : VAR_0;
      VAR_6 = VAR_6 < VAR_7? VAR_7 : VAR_6;
   }

   if (VAR_5 > VAR_6)
   {
      FUNC_1(0," length = %lu, limit = %lu",
         (unsigned long)VAR_5,(unsigned long)VAR_6);
      FUNC_0(VAR_4, "chunk data is too large");
   }
}
