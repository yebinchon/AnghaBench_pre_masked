
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int stb_vorbis_alloc ;
struct TYPE_9__ {unsigned int stream_len; int close_on_free; int error; scalar_t__ f_start; int * f; } ;
typedef TYPE_1__ stb_vorbis ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*) ;

stb_vorbis * FUNC_6(FILE *VAR_0, int VAR_1, int *VAR_2, const stb_vorbis_alloc *VAR_3, unsigned int VAR_4)
{
   stb_vorbis *VAR_5, VAR_6;
   FUNC_4(&VAR_6, VAR_3);
   VAR_6.f = VAR_0;
   VAR_6.f_start = (uint32) FUNC_0(VAR_0);
   VAR_6.stream_len = VAR_4;
   VAR_6.close_on_free = VAR_1;
   if (FUNC_1(&VAR_6)) {
      VAR_5 = FUNC_2(&VAR_6);
      if (VAR_5) {
         *VAR_5 = VAR_6;
         FUNC_5(VAR_5);
         return VAR_5;
      }
   }
   if (VAR_2) *VAR_2 = VAR_6.error;
   FUNC_3(&VAR_6);
   return ((void*)0);
}
