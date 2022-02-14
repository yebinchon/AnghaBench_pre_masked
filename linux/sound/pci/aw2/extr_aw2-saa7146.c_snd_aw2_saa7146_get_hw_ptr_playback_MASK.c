
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aw2_saa7146 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int ) ;

unsigned int FUNC_1(struct snd_aw2_saa7146 *VAR_2,
       int VAR_3,
       unsigned char *VAR_4,
       unsigned int VAR_5)
{
 long VAR_6 = 0;
 size_t VAR_7 = 0;

 if (VAR_3 == 0) {
  VAR_6 = FUNC_0(VAR_1);
  VAR_7 = VAR_6 - (long)VAR_4;

  if (VAR_7 == VAR_5)
   VAR_7 = 0;
 }
 if (VAR_3 == 1) {
  VAR_6 = FUNC_0(VAR_0);
  VAR_7 = VAR_6 - (size_t) VAR_4;

  if (VAR_7 == VAR_5)
   VAR_7 = 0;
 }
 return VAR_7;
}
