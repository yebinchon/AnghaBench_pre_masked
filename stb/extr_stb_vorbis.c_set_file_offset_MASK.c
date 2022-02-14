
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eof; scalar_t__ stream_start; scalar_t__ stream_end; scalar_t__ stream; unsigned int f_start; int f; scalar_t__ push_mode; } ;
typedef TYPE_1__ stb_vorbis ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(stb_vorbis *VAR_2, unsigned int VAR_3)
{

   if (VAR_2->push_mode) return 0;

   VAR_2->eof = 0;
   if (FUNC_0(VAR_2)) {
      if (VAR_2->stream_start + VAR_3 >= VAR_2->stream_end || VAR_2->stream_start + VAR_3 < VAR_2->stream_start) {
         VAR_2->stream = VAR_2->stream_end;
         VAR_2->eof = 1;
         return 0;
      } else {
         VAR_2->stream = VAR_2->stream_start + VAR_3;
         return 1;
      }
   }

   if (VAR_3 + VAR_2->f_start < VAR_3 || VAR_3 >= 0x80000000) {
      VAR_3 = 0x7fffffff;
      VAR_2->eof = 1;
   } else {
      VAR_3 += VAR_2->f_start;
   }
   if (!FUNC_1(VAR_2->f, VAR_3, VAR_1))
      return 1;
   VAR_2->eof = 1;
   FUNC_1(VAR_2->f, VAR_2->f_start, VAR_0);
   return 0;

}
