
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1816a {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ad1816a*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct snd_ad1816a *VAR_3, unsigned char VAR_4,
         unsigned short VAR_5)
{
 FUNC_0(VAR_3, VAR_0, VAR_4 & 0x3f);
 FUNC_0(VAR_3, VAR_2, VAR_5 & 0xff);
 FUNC_0(VAR_3, VAR_1, (VAR_5 >> 8) & 0xff);
}
