
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
typedef int stb_vorbis_alloc ;
struct TYPE_9__ {int stream_len; int error; int push_mode; int * stream; int * stream_start; int * stream_end; } ;
typedef TYPE_1__ stb_vorbis ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*) ;

stb_vorbis * FUNC_5(const unsigned char *VAR_2, int VAR_3, int *VAR_4, const stb_vorbis_alloc *VAR_5)
{
   stb_vorbis *VAR_6, VAR_7;
   if (VAR_2 == ((void*)0)) return ((void*)0);
   FUNC_3(&VAR_7, VAR_5);
   VAR_7.stream = (uint8 *) VAR_2;
   VAR_7.stream_end = (uint8 *) VAR_2 + VAR_3;
   VAR_7.stream_start = (uint8 *) VAR_7.stream;
   VAR_7.stream_len = VAR_3;
   VAR_7.push_mode = VAR_0;
   if (FUNC_0(&VAR_7)) {
      VAR_6 = FUNC_1(&VAR_7);
      if (VAR_6) {
         *VAR_6 = VAR_7;
         FUNC_4(VAR_6);
         if (VAR_4) *VAR_4 = VAR_1;
         return VAR_6;
      }
   }
   if (VAR_4) *VAR_4 = VAR_7.error;
   FUNC_2(&VAR_7);
   return ((void*)0);
}
