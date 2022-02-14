
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_17__ {unsigned int last_decoded_sample; int page_end; int page_start; } ;
struct TYPE_16__ {int blocksize_1; int blocksize_0; int end_seg_with_known_loc; int* segments; int page_flag; int segment_count; int next_seg; scalar_t__ current_loc; scalar_t__ previous_length; scalar_t__ bytes_in_seg; scalar_t__ packet_bytes; scalar_t__ valid_bits; void* last_seg; void* current_loc_valid; TYPE_2__ p_last; TYPE_2__ p_first; } ;
typedef TYPE_1__ stb_vorbis ;
typedef TYPE_2__ ProbedPage ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *,int *) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(stb_vorbis *VAR_5, uint32 VAR_6)
{
   ProbedPage VAR_7, VAR_8, VAR_9;
   int VAR_10, VAR_11, VAR_12, VAR_13;
   uint32 VAR_14, VAR_15, VAR_16;
   double VAR_17, VAR_18;
   int VAR_19 = 0;


   VAR_15 = FUNC_9(VAR_5);
   if (VAR_15 == 0) return FUNC_1(VAR_5, VAR_4);
   if (VAR_6 > VAR_15) return FUNC_1(VAR_5, VAR_3);




   VAR_16 = ((VAR_5->blocksize_1 - VAR_5->blocksize_0) >> 2);
   if (VAR_6 < VAR_16)
      VAR_6 = 0;
   else
      VAR_6 -= VAR_16;

   VAR_7 = VAR_5->p_first;
   while (VAR_7.last_decoded_sample == ~0U) {

      FUNC_4(VAR_5, VAR_7.page_end);
      if (!FUNC_2(VAR_5, &VAR_7)) goto error;
   }

   VAR_8 = VAR_5->p_last;
   FUNC_0(VAR_8.last_decoded_sample != ~0U);


   if (VAR_6 <= VAR_7.last_decoded_sample) {
      if (FUNC_8(VAR_5))
         return 1;
      return 0;
   }

   while (VAR_7.page_end != VAR_8.page_start) {
      FUNC_0(VAR_7.page_end < VAR_8.page_start);

      VAR_14 = VAR_8.page_start - VAR_7.page_end;
      if (VAR_14 <= 65536) {

         FUNC_4(VAR_5, VAR_7.page_end);
      } else {
         if (VAR_19 < 2) {
            if (VAR_19 == 0) {

               double VAR_20 = VAR_8.page_end - VAR_7.page_start;
               VAR_18 = VAR_20 / VAR_8.last_decoded_sample;
               VAR_17 = VAR_7.page_start + VAR_18 * (VAR_6 - VAR_7.last_decoded_sample);
            } else {

               double VAR_21 = ((double) VAR_6 - VAR_9.last_decoded_sample) * VAR_18;
               if (VAR_21 >= 0 && VAR_21 < 8000) VAR_21 = 8000;
               if (VAR_21 < 0 && VAR_21 > -8000) VAR_21 = -8000;
               VAR_17 += VAR_21 * 2;
            }


            if (VAR_17 < VAR_7.page_end)
               VAR_17 = VAR_7.page_end;
            if (VAR_17 > VAR_8.page_start - 65536)
               VAR_17 = VAR_8.page_start - 65536;

            FUNC_4(VAR_5, (unsigned int) VAR_17);
         } else {


            FUNC_4(VAR_5, VAR_7.page_end + (VAR_14 / 2) - 32768);
         }

         if (!FUNC_10(VAR_5, ((void*)0), ((void*)0))) goto error;
      }

      for (;;) {
         if (!FUNC_2(VAR_5, &VAR_9)) goto error;
         if (VAR_9.last_decoded_sample != ~0U) break;

         FUNC_4(VAR_5, VAR_9.page_end);
         FUNC_0(VAR_9.page_start < VAR_8.page_start);
      }



      if (VAR_9.page_start == VAR_8.page_start)
         break;

      if (VAR_6 < VAR_9.last_decoded_sample)
         VAR_8 = VAR_9;
      else
         VAR_7 = VAR_9;

      ++VAR_19;
   }


   VAR_13 = VAR_7.page_start;
   FUNC_4(VAR_5, VAR_13);
   if (!FUNC_6(VAR_5)) return FUNC_1(VAR_5, VAR_2);
   VAR_12 = VAR_5->end_seg_with_known_loc;
   FUNC_0(VAR_12 >= 0);

   for (;;) {
      for (VAR_10 = VAR_12; VAR_10 > 0; --VAR_10)
         if (VAR_5->segments[VAR_10-1] != 255)
            break;

      VAR_11 = VAR_10;

      if (VAR_11 > 0 || !(VAR_5->page_flag & VAR_1))
         break;


      if (!FUNC_3(VAR_5, VAR_13))
         goto error;

      VAR_13 = FUNC_7(VAR_5);
      if (!FUNC_6(VAR_5)) goto error;
      VAR_12 = VAR_5->segment_count - 1;
   }


   VAR_5->current_loc_valid = VAR_0;
   VAR_5->last_seg = VAR_0;
   VAR_5->valid_bits = 0;
   VAR_5->packet_bytes = 0;
   VAR_5->bytes_in_seg = 0;
   VAR_5->previous_length = 0;
   VAR_5->next_seg = VAR_11;

   for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
      FUNC_5(VAR_5, VAR_5->segments[VAR_10]);


   if (!FUNC_11(VAR_5))
      return 0;
   if (VAR_5->current_loc > VAR_6)
      return FUNC_1(VAR_5, VAR_2);
   return 1;

error:

   FUNC_8(VAR_5);
   return FUNC_1(VAR_5, VAR_2);
}
