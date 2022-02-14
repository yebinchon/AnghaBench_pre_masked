
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned int FUNC_0 (unsigned short*) ;





 int FUNC_1 (struct snd_ice1712*,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_0)
{
 static unsigned short VAR_1[] = {

  132, 0x0003,


  130, 0x0001,
  131, 0x0000,

  129, 0x0008,
  128, 0x0000,
 };
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2 += 2)
  FUNC_1(VAR_0, VAR_1[VAR_2], VAR_1[VAR_2 + 1]);
}
