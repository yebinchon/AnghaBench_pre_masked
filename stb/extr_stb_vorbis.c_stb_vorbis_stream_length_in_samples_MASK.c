
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_11__ {unsigned int page_start; unsigned int page_end; int last_decoded_sample; } ;
struct TYPE_12__ {int total_samples; int stream_len; int first_audio_page_offset; TYPE_1__ p_last; void* error; } ;
typedef TYPE_2__ stb_vorbis ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_4 (TYPE_2__*,unsigned int) ;
 unsigned int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,unsigned int*,unsigned int*) ;

unsigned int FUNC_7(stb_vorbis *VAR_3)
{
   unsigned int VAR_4, VAR_5;
   unsigned int VAR_6, VAR_7;

   if (FUNC_0(VAR_3)) return FUNC_1(VAR_3, VAR_2);
   if (!VAR_3->total_samples) {
      unsigned int VAR_8;
      uint32 VAR_9,VAR_10;
      char VAR_11[6];


      VAR_4 = FUNC_5(VAR_3);



      if (VAR_3->stream_len >= 65536 && VAR_3->stream_len-65536 >= VAR_3->first_audio_page_offset)
         VAR_5 = VAR_3->stream_len - 65536;
      else
         VAR_5 = VAR_3->first_audio_page_offset;

      FUNC_4(VAR_3, VAR_5);



      if (!FUNC_6(VAR_3, &VAR_6, &VAR_8)) {

         VAR_3->error = VAR_1;
         VAR_3->total_samples = 0xffffffff;
         goto done;
      }


      VAR_7 = FUNC_5(VAR_3);




      while (!VAR_8) {
         FUNC_4(VAR_3, VAR_6);
         if (!FUNC_6(VAR_3, &VAR_6, &VAR_8)) {


            break;
         }
         VAR_5 = VAR_7+1;
         VAR_7 = FUNC_5(VAR_3);
      }

      FUNC_4(VAR_3, VAR_7);


      FUNC_3(VAR_3, (unsigned char *)VAR_11, 6);

      VAR_9 = FUNC_2(VAR_3);
      VAR_10 = FUNC_2(VAR_3);
      if (VAR_9 == 0xffffffff && VAR_10 == 0xffffffff) {
         VAR_3->error = VAR_1;
         VAR_3->total_samples = VAR_0;
         goto done;
      }
      if (VAR_10)
         VAR_9 = 0xfffffffe;
      VAR_3->total_samples = VAR_9;

      VAR_3->p_last.page_start = VAR_7;
      VAR_3->p_last.page_end = VAR_6;
      VAR_3->p_last.last_decoded_sample = VAR_9;

     done:
      FUNC_4(VAR_3, VAR_4);
   }
   return VAR_3->total_samples == VAR_0 ? 0 : VAR_3->total_samples;
}
