
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_0,
     unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = (VAR_1 << 9) | VAR_2;
 FUNC_0(VAR_0, 0x34, VAR_3 >> 8, VAR_3 & 0xff);
}
