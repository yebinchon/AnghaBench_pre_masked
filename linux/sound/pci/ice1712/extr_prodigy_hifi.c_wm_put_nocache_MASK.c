
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_1, int VAR_2, unsigned short VAR_3)
{
 unsigned short VAR_4;
 VAR_4 = (VAR_2 << 9) | VAR_3;
 FUNC_0(VAR_1, VAR_0, VAR_4 >> 8, VAR_4 & 0xff);
}
