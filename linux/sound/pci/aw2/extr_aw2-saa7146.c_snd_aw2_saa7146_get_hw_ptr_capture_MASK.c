
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aw2_saa7146 {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;

unsigned int FUNC_1(struct snd_aw2_saa7146 *VAR_1,
      int VAR_2,
      unsigned char *VAR_3,
      unsigned int VAR_4)
{
 size_t VAR_5 = 0;
 size_t VAR_6 = 0;
 if (VAR_2 == 0) {
  VAR_5 = FUNC_0(VAR_0);
  VAR_6 = VAR_5 - (size_t) VAR_3;

  if (VAR_6 == VAR_4)
   VAR_6 = 0;
 }
 return VAR_6;
}
