
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1816a {int dummy; } ;


 unsigned short FUNC_0 (struct snd_ad1816a*,unsigned char) ;
 int FUNC_1 (struct snd_ad1816a*,unsigned char,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct snd_ad1816a *VAR_0, unsigned char VAR_1,
       unsigned short VAR_2, unsigned short VAR_3)
{
 FUNC_1(VAR_0, VAR_1,
  (VAR_3 & VAR_2) | (FUNC_0(VAR_0, VAR_1) & ~VAR_2));
}
