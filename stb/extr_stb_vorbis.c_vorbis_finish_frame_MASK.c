
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int previous_length; int channels; float** channel_buffers; float** previous_window; int samples_output; } ;
typedef TYPE_1__ stb_vorbis ;


 float* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(stb_vorbis *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
   int VAR_4,VAR_5,VAR_6;
   if (VAR_0->previous_length) {
      int VAR_7,VAR_8, VAR_9 = VAR_0->previous_length;
      float *VAR_10 = FUNC_0(VAR_0, VAR_9);
      if (VAR_10 == ((void*)0)) return 0;
      for (VAR_7=0; VAR_7 < VAR_0->channels; ++VAR_7) {
         for (VAR_8=0; VAR_8 < VAR_9; ++VAR_8)
            VAR_0->channel_buffers[VAR_7][VAR_2+VAR_8] =
               VAR_0->channel_buffers[VAR_7][VAR_2+VAR_8]*VAR_10[ VAR_8] +
               VAR_0->previous_window[VAR_7][ VAR_8]*VAR_10[VAR_9-1-VAR_8];
      }
   }

   VAR_4 = VAR_0->previous_length;


   VAR_0->previous_length = VAR_1 - VAR_3;







   for (VAR_5=0; VAR_5 < VAR_0->channels; ++VAR_5)
      for (VAR_6=0; VAR_3+VAR_6 < VAR_1; ++VAR_6)
         VAR_0->previous_window[VAR_5][VAR_6] = VAR_0->channel_buffers[VAR_5][VAR_3+VAR_6];

   if (!VAR_4)



      return 0;


   if (VAR_1 < VAR_3) VAR_3 = VAR_1;

   VAR_0->samples_output += VAR_3-VAR_2;

   return VAR_3 - VAR_2;
}
