
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int dummy; } ;
struct audioformat {int rates; int rate_min; int rate_max; unsigned int* rate_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct snd_usb_audio*,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_usb_audio *VAR_2,
     struct audioformat *VAR_3, int VAR_4,
     const unsigned char *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 VAR_3->rates = VAR_3->rate_min = VAR_3->rate_max = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  int VAR_8 = FUNC_0(&VAR_5[2 + 12 * VAR_6]);
  int VAR_9 = FUNC_0(&VAR_5[6 + 12 * VAR_6]);
  int VAR_10 = FUNC_0(&VAR_5[10 + 12 * VAR_6]);
  unsigned int VAR_11;

  if ((VAR_9 < 0) || (VAR_8 < 0) || (VAR_10 < 0) || (VAR_9 < VAR_8))
   continue;






  if (VAR_10 == 1) {
   VAR_3->rate_min = VAR_8;
   VAR_3->rate_max = VAR_9;
   VAR_3->rates = VAR_1;
   return 0;
  }

  for (VAR_11 = VAR_8; VAR_11 <= VAR_9; VAR_11 += VAR_10) {
   if (VAR_3->rate_table)
    VAR_3->rate_table[VAR_7] = VAR_11;
   if (!VAR_3->rate_min || VAR_11 < VAR_3->rate_min)
    VAR_3->rate_min = VAR_11;
   if (!VAR_3->rate_max || VAR_11 > VAR_3->rate_max)
    VAR_3->rate_max = VAR_11;
   VAR_3->rates |= FUNC_1(VAR_11);

   VAR_7++;
   if (VAR_7 >= VAR_0) {
    FUNC_2(VAR_2, "invalid uac2 rates\n");
    break;
   }


   if (VAR_10 == 0)
    break;
  }
 }

 return VAR_7;
}
