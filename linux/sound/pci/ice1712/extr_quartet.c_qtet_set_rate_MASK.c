
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct snd_ice1712*) ;
 unsigned char FUNC_3 (int ) ;
 int FUNC_4 (unsigned char,int ) ;
 int FUNC_5 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct snd_ice1712 *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned char VAR_7;

 VAR_7 = FUNC_3(FUNC_0(VAR_4, VAR_2));
 FUNC_4(VAR_7 | VAR_3, FUNC_0(VAR_4, VAR_2));

 VAR_6 = (FUNC_2(VAR_4) & ~VAR_0) | FUNC_1(VAR_5);

 VAR_6 &= ~VAR_1;


 FUNC_5(VAR_4, VAR_6);
}
