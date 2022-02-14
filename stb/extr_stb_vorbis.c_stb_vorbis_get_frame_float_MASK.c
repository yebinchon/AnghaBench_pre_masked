
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int channel_buffer_start; int channel_buffer_end; int channels; float** outputs; float** channel_buffers; } ;
typedef TYPE_1__ stb_vorbis ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int*,int*,int*) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;

int FUNC_4(stb_vorbis *VAR_1, int *VAR_2, float ***VAR_3)
{
   int VAR_4, VAR_5,VAR_6,VAR_7;
   if (FUNC_0(VAR_1)) return FUNC_1(VAR_1, VAR_0);

   if (!FUNC_2(VAR_1, &VAR_4, &VAR_6, &VAR_5)) {
      VAR_1->channel_buffer_start = VAR_1->channel_buffer_end = 0;
      return 0;
   }

   VAR_4 = FUNC_3(VAR_1, VAR_4, VAR_6, VAR_5);
   for (VAR_7=0; VAR_7 < VAR_1->channels; ++VAR_7)
      VAR_1->outputs[VAR_7] = VAR_1->channel_buffers[VAR_7] + VAR_6;

   VAR_1->channel_buffer_start = VAR_6;
   VAR_1->channel_buffer_end = VAR_6+VAR_4;

   if (VAR_2) *VAR_2 = VAR_1->channels;
   if (VAR_3) *VAR_3 = VAR_1->outputs;
   return VAR_4;
}
