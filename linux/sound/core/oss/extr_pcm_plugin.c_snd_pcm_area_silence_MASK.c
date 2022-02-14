
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_channel_area {unsigned char* addr; size_t first; size_t step; } ;
typedef int snd_pcm_format_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,size_t) ;
 unsigned char* FUNC_3 (int ) ;

int FUNC_4(const struct snd_pcm_channel_area *VAR_1, size_t VAR_2,
    size_t VAR_3, snd_pcm_format_t VAR_4)
{

 unsigned char *VAR_5;
 unsigned int VAR_6;
 int VAR_7;
 const unsigned char *VAR_8;
 if (!VAR_1->addr)
  return 0;
 VAR_5 = VAR_1->addr + (VAR_1->first + VAR_1->step * VAR_2) / 8;
 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 <= 0)
  return -VAR_0;
 if (VAR_1->step == (unsigned int) VAR_7 && VAR_7 >= 8)
  return FUNC_2(VAR_4, VAR_5, VAR_3);
 VAR_8 = FUNC_3(VAR_4);
 if (! VAR_8)
  return -VAR_0;
 VAR_6 = VAR_1->step / 8;
 if (VAR_7 == 4) {

  int VAR_9 = VAR_1->first % 8;
  int VAR_10 = VAR_1->step % 8;
  while (VAR_3-- > 0) {
   if (VAR_9)
    *VAR_5 &= 0xf0;
   else
    *VAR_5 &= 0x0f;
   VAR_5 += VAR_6;
   VAR_9 += VAR_10;
   if (VAR_9 == 8) {
    VAR_5++;
    VAR_9 = 0;
   }
  }
 } else {
  VAR_7 /= 8;
  while (VAR_3-- > 0) {
   FUNC_0(VAR_5, VAR_8, VAR_7);
   VAR_5 += VAR_6;
  }
 }
 return 0;
}
