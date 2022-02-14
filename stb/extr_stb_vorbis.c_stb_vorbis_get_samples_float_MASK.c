
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int channels; int channel_buffer_end; int channel_buffer_start; int* channel_buffers; } ;
typedef TYPE_1__ stb_vorbis ;


 int FUNC_0 (float*,int,int) ;
 int FUNC_1 (float*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *,float***) ;

int FUNC_3(stb_vorbis *VAR_0, int VAR_1, float **VAR_2, int VAR_3)
{
   float **VAR_4;
   int VAR_5=0;
   int VAR_6 = VAR_0->channels;
   if (VAR_6 > VAR_1) VAR_6 = VAR_1;
   while (VAR_5 < VAR_3) {
      int VAR_7;
      int VAR_8 = VAR_0->channel_buffer_end - VAR_0->channel_buffer_start;
      if (VAR_5+VAR_8 >= VAR_3) VAR_8 = VAR_3 - VAR_5;
      if (VAR_8) {
         for (VAR_7=0; VAR_7 < VAR_6; ++VAR_7)
            FUNC_0(VAR_2[VAR_7]+VAR_5, VAR_0->channel_buffers[VAR_7]+VAR_0->channel_buffer_start, sizeof(float)*VAR_8);
         for ( ; VAR_7 < VAR_1; ++VAR_7)
            FUNC_1(VAR_2[VAR_7]+VAR_5, 0, sizeof(float) * VAR_8);
      }
      VAR_5 += VAR_8;
      VAR_0->channel_buffer_start += VAR_8;
      if (VAR_5 == VAR_3)
         break;
      if (!FUNC_2(VAR_0, ((void*)0), &VAR_4))
         break;
   }
   return VAR_5;
}
