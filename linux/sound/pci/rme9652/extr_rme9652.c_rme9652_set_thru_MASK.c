
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int thru_bits; int* channel_map; scalar_t__ passthru; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_rme9652*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct snd_rme9652 *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_2->passthru = 0;

 if (VAR_3 < 0) {



  if (VAR_4) {
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    VAR_2->thru_bits |= (1 << VAR_5);
    FUNC_0(VAR_2, VAR_1 + VAR_5 * 4, 1);
   }
  } else {
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    VAR_2->thru_bits &= ~(1 << VAR_5);
    FUNC_0(VAR_2, VAR_1 + VAR_5 * 4, 0);
   }
  }

 } else {
  int VAR_6;

  VAR_6 = VAR_2->channel_map[VAR_3];

  if (VAR_4) {
   VAR_2->thru_bits |= (1 << VAR_6);
  } else {
   VAR_2->thru_bits &= ~(1 << VAR_6);
  }

  FUNC_0(VAR_2,
          VAR_1 + VAR_6 * 4,
          VAR_4 ? 1 : 0);
 }
}
