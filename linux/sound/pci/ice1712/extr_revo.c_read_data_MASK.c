
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned char FUNC_3(struct snd_ice1712 *VAR_2, unsigned int VAR_3,
          int VAR_4)
{
 unsigned char VAR_5 = 0;

 for (; VAR_4 >= 0; VAR_4--) {

  VAR_3 &= ~VAR_0;
  FUNC_1(VAR_2, VAR_3);
  FUNC_2(1);

  if (FUNC_0(VAR_2) & VAR_1)
   VAR_5 |= (1 << VAR_4);
  FUNC_2(1);

  VAR_3 |= VAR_0;
  FUNC_1(VAR_2, VAR_3);
  FUNC_2(1);
 }
 return VAR_5;
}
