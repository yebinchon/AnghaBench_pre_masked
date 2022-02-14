
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;



 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_5, int VAR_6)
{
 unsigned int VAR_7, VAR_8;

 VAR_7 = VAR_8 = FUNC_0(VAR_5);
 VAR_8 &= ~(VAR_0 | VAR_4);
 switch (VAR_6) {
 case 130:
  VAR_8 |= VAR_1;
  break;
 case 129:
  VAR_8 |= VAR_2;
  break;
 case 128:
  VAR_8 |= VAR_3;
  break;
 default:
  FUNC_2();
 }
 if (VAR_7 != VAR_8) {
  FUNC_1(VAR_5, VAR_8);

  return 1;
 }
 return 0;
}
