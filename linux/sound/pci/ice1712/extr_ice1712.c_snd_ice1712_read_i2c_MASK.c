
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;

__attribute__((used)) static unsigned char FUNC_3(struct snd_ice1712 *VAR_6,
       unsigned char VAR_7,
       unsigned char VAR_8)
{
 long VAR_9 = 0x10000;

 FUNC_2(VAR_8, FUNC_0(VAR_6, VAR_0));
 FUNC_2(VAR_7 & ~VAR_5, FUNC_0(VAR_6, VAR_3));
 while (VAR_9-- > 0 && (FUNC_1(FUNC_0(VAR_6, VAR_1)) & VAR_4)) ;
 return FUNC_1(FUNC_0(VAR_6, VAR_2));
}
