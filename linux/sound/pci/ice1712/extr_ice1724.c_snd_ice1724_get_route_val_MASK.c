
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 () ;

int FUNC_3(struct snd_ice1712 *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 unsigned char VAR_4;
 static const unsigned char VAR_5[8] = {
  0, 255, 1, 2, 255, 255, 3, 4,
 };

 VAR_3 = FUNC_1(FUNC_0(VAR_1, VAR_0));
 VAR_3 >>= VAR_2;
 VAR_3 &= 7;
 VAR_4 = VAR_5[VAR_3];
 if (VAR_4 == 255) {
  FUNC_2();
  return 0;
 }
 return VAR_4;
}
