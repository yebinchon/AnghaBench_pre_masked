
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned char FUNC_3(struct snd_ice1712 *VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 7; VAR_6 >= 0; VAR_6--) {
  VAR_4 &= ~VAR_0;
  FUNC_1(VAR_3, VAR_2, VAR_4);
  FUNC_2(5);
  if (FUNC_0(VAR_3, VAR_2) & VAR_1)
   VAR_5 |= 1 << VAR_6;
  VAR_4 |= VAR_0;
  FUNC_1(VAR_3, VAR_2, VAR_4);
  FUNC_2(5);
 }
 return VAR_5;
}
