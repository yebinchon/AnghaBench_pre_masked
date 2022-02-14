
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned char const uint8 ;
typedef int stb_vorbis_alloc ;
struct TYPE_8__ {unsigned char const* stream; unsigned char const* stream_end; int error; scalar_t__ eof; int push_mode; } ;
typedef TYPE_1__ stb_vorbis ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*) ;

stb_vorbis *FUNC_4(
         const unsigned char *VAR_2, int VAR_3,
         int *VAR_4,
         int *VAR_5, const stb_vorbis_alloc *VAR_6)
{
   stb_vorbis *VAR_7, VAR_8;
   FUNC_3(&VAR_8, VAR_6);
   VAR_8.stream = (uint8 *) VAR_2;
   VAR_8.stream_end = (uint8 *) VAR_2 + VAR_3;
   VAR_8.push_mode = VAR_0;
   if (!FUNC_0(&VAR_8)) {
      if (VAR_8.eof)
         *VAR_5 = VAR_1;
      else
         *VAR_5 = VAR_8.error;
      return ((void*)0);
   }
   VAR_7 = FUNC_1(&VAR_8);
   if (VAR_7) {
      *VAR_7 = VAR_8;
      *VAR_4 = (int) (VAR_7->stream - VAR_2);
      *VAR_5 = 0;
      return VAR_7;
   } else {
      FUNC_2(&VAR_8);
      return ((void*)0);
   }
}
