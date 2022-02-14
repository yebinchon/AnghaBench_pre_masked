
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ channel_buffer_end; scalar_t__ channel_buffer_start; scalar_t__ samples_output; void* first_decode; void* current_loc_valid; scalar_t__ discard_samples_deferred; scalar_t__ page_crc_tests; scalar_t__ previous_length; } ;
typedef TYPE_1__ stb_vorbis ;


 void* VAR_0 ;

void FUNC_0(stb_vorbis *VAR_1)
{
   VAR_1->previous_length = 0;
   VAR_1->page_crc_tests = 0;
   VAR_1->discard_samples_deferred = 0;
   VAR_1->current_loc_valid = VAR_0;
   VAR_1->first_decode = VAR_0;
   VAR_1->samples_output = 0;
   VAR_1->channel_buffer_start = 0;
   VAR_1->channel_buffer_end = 0;
}
