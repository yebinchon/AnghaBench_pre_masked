
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ snd_pcm_format_t ;
struct TYPE_2__ {int phys; unsigned char* silence; int signd; } ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (void*,unsigned char,unsigned int) ;
 TYPE_1__* VAR_2 ;

int FUNC_2(snd_pcm_format_t VAR_3, void *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 unsigned char *VAR_7, *VAR_8;

 if ((INT)VAR_3 < 0 || (INT)VAR_3 > (INT)VAR_1)
  return -VAR_0;
 if (VAR_5 == 0)
  return 0;
 VAR_6 = VAR_2[(INT)VAR_3].phys;
 VAR_8 = VAR_2[(INT)VAR_3].silence;
 if (! VAR_6)
  return -VAR_0;

 if (VAR_2[(INT)VAR_3].signd == 1 || VAR_6 <= 8) {
  unsigned int VAR_9 = VAR_5 * VAR_6 / 8;
  FUNC_1(VAR_4, *VAR_8, VAR_9);
  return 0;
 }

 VAR_6 /= 8;
 VAR_7 = VAR_4;







 switch (VAR_6) {
 case 2:
  while (VAR_5--) {
   FUNC_0(VAR_7, VAR_8, 2);
   VAR_7 += 2;
  }
  break;
 case 3:
  while (VAR_5--) {
   FUNC_0(VAR_7, VAR_8, 3);
   VAR_7 += 3;
  }
  break;
 case 4:
  while (VAR_5--) {
   FUNC_0(VAR_7, VAR_8, 4);
   VAR_7 += 4;
  }
  break;
 case 8:
  while (VAR_5--) {
   FUNC_0(VAR_7, VAR_8, 8);
   VAR_7 += 8;
  }
  break;
 }

 return 0;
}
