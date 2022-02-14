
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer_length; unsigned char* transfer_buffer; } ;
struct snd_line6_pcm {unsigned char* prev_fbuf; scalar_t__ impulse_count; unsigned char impulse_volume; scalar_t__ impulse_period; } ;



__attribute__((used)) static void FUNC_0(struct snd_line6_pcm *VAR_0,
           struct urb *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->transfer_buffer_length / VAR_2;

 if (VAR_2 == 4) {
  int VAR_4;
  short *VAR_5 = (short *)VAR_0->prev_fbuf;
  short *VAR_6 = (short *)VAR_1->transfer_buffer;

  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
   VAR_6[0] = VAR_5[0];
   VAR_6[1] = 0;
   VAR_5 += 2;
   VAR_6 += 2;
  }
 } else if (VAR_2 == 6) {
  int VAR_7, VAR_8;
  unsigned char *VAR_9 = VAR_0->prev_fbuf;
  unsigned char *VAR_10 = VAR_1->transfer_buffer;

  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
   for (VAR_8 = 0; VAR_8 < VAR_2 / 2; ++VAR_8)
    VAR_10[VAR_8] = VAR_9[VAR_8];

   for (; VAR_8 < VAR_2; ++VAR_8)
    VAR_10[VAR_8] = 0;

   VAR_9 += VAR_2;
   VAR_10 += VAR_2;
  }
 }
 if (--VAR_0->impulse_count <= 0) {
  ((unsigned char *)(VAR_1->transfer_buffer))[VAR_2 -
             1] =
      VAR_0->impulse_volume;
  VAR_0->impulse_count = VAR_0->impulse_period;
 }
}
