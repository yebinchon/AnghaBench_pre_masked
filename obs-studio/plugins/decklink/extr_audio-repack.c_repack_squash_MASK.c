
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct audio_repack {int extra_dst_size; scalar_t__ packet_buffer; } ;
typedef int __m128i ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct audio_repack*,int) ;

int FUNC_3(struct audio_repack *VAR_0, const uint8_t *VAR_1,
    uint32_t VAR_2)
{
 if (FUNC_2(VAR_0, VAR_2) < 0)
  return -1;

 int VAR_3 = VAR_0->extra_dst_size;
 const __m128i *VAR_4 = (__m128i *)VAR_1;
 const __m128i *VAR_5 = VAR_4 + VAR_2;
 uint16_t *VAR_6 = (uint16_t *)VAR_0->packet_buffer;




 if (VAR_3 > 0) {
  while (VAR_4 != VAR_5) {
   __m128i VAR_7 = FUNC_0(VAR_4++);
   FUNC_1((__m128i *)VAR_6, VAR_7);
   VAR_6 += 8 - VAR_3;
  }
 }

 return 0;
}
