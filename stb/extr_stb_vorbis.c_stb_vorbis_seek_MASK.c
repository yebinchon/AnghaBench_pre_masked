
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint32 ;
struct TYPE_5__ {unsigned int current_loc; scalar_t__ channel_buffer_start; scalar_t__ channel_buffer_end; } ;
typedef TYPE_1__ stb_vorbis ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int*,int *) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;

int FUNC_3(stb_vorbis *VAR_0, unsigned int VAR_1)
{
   if (!FUNC_2(VAR_0, VAR_1))
      return 0;

   if (VAR_1 != VAR_0->current_loc) {
      int VAR_2;
      uint32 VAR_3 = VAR_0->current_loc;
      FUNC_1(VAR_0, &VAR_2, ((void*)0));
      FUNC_0(VAR_1 > VAR_3);
      FUNC_0(VAR_0->channel_buffer_start + (int) (VAR_1-VAR_3) <= VAR_0->channel_buffer_end);
      VAR_0->channel_buffer_start += (VAR_1 - VAR_3);
   }

   return 1;
}
