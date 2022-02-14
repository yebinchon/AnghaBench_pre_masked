
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_2, unsigned char VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_0(VAR_2, VAR_0, 0);
  FUNC_1(1);
  FUNC_0(VAR_2, VAR_1, VAR_3 & 0x80);
  FUNC_1(1);
  FUNC_0(VAR_2, VAR_0, 1);
  FUNC_1(1);
  VAR_3 <<= 1;
 }
}
