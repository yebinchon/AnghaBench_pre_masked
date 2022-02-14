
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int last_decoded_sample; scalar_t__ page_start; scalar_t__ page_end; } ;
struct TYPE_8__ {unsigned int last_page; int segment_count; int* segments; int end_seg_with_known_loc; unsigned int known_loc_for_packet; scalar_t__ next_seg; TYPE_2__ p_first; scalar_t__ first_audio_page_offset; scalar_t__ first_decode; scalar_t__ page_flag; } ;
typedef TYPE_1__ vorb ;
typedef unsigned int uint32 ;
typedef TYPE_2__ ProbedPage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_4(vorb *VAR_3)
{
   uint32 VAR_4,VAR_5,VAR_6;

   if (0 != FUNC_2(VAR_3)) return FUNC_0(VAR_3, VAR_1);

   VAR_3->page_flag = FUNC_2(VAR_3);

   VAR_4 = FUNC_1(VAR_3);
   VAR_5 = FUNC_1(VAR_3);


   FUNC_1(VAR_3);


   VAR_6 = FUNC_1(VAR_3);
   VAR_3->last_page = VAR_6;

   FUNC_1(VAR_3);

   VAR_3->segment_count = FUNC_2(VAR_3);
   if (!FUNC_3(VAR_3, VAR_3->segments, VAR_3->segment_count))
      return FUNC_0(VAR_3, VAR_2);

   VAR_3->end_seg_with_known_loc = -2;
   if (VAR_4 != ~0U || VAR_5 != ~0U) {
      int VAR_7;

      for (VAR_7=VAR_3->segment_count-1; VAR_7 >= 0; --VAR_7)
         if (VAR_3->segments[VAR_7] < 255)
            break;

      if (VAR_7 >= 0) {
         VAR_3->end_seg_with_known_loc = VAR_7;
         VAR_3->known_loc_for_packet = VAR_4;
      }
   }
   if (VAR_3->first_decode) {
      int VAR_8,VAR_9;
      ProbedPage VAR_10;
      VAR_9 = 0;
      for (VAR_8=0; VAR_8 < VAR_3->segment_count; ++VAR_8)
         VAR_9 += VAR_3->segments[VAR_8];
      VAR_9 += 27 + VAR_3->segment_count;
      VAR_10.page_start = VAR_3->first_audio_page_offset;
      VAR_10.page_end = VAR_10.page_start + VAR_9;
      VAR_10.last_decoded_sample = VAR_4;
      VAR_3->p_first = VAR_10;
   }
   VAR_3->next_seg = 0;
   return VAR_0;
}
