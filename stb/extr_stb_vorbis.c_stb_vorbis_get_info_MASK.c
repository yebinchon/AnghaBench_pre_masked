
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max_frame_size; int temp_memory_required; int setup_temp_memory_required; int setup_memory_required; int sample_rate; int channels; } ;
typedef TYPE_1__ stb_vorbis_info ;
struct TYPE_6__ {int blocksize_1; int temp_memory_required; int setup_temp_memory_required; int setup_memory_required; int sample_rate; int channels; } ;
typedef TYPE_2__ stb_vorbis ;



stb_vorbis_info FUNC_0(stb_vorbis *VAR_0)
{
   stb_vorbis_info VAR_1;
   VAR_1.channels = VAR_0->channels;
   VAR_1.sample_rate = VAR_0->sample_rate;
   VAR_1.setup_memory_required = VAR_0->setup_memory_required;
   VAR_1.setup_temp_memory_required = VAR_0->setup_temp_memory_required;
   VAR_1.temp_memory_required = VAR_0->temp_memory_required;
   VAR_1.max_frame_size = VAR_0->blocksize_1 >> 1;
   return VAR_1;
}
