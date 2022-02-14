
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;







 unsigned int FUNC_0 (unsigned short*) ;
 int FUNC_1 (struct snd_ice1712*,int const,unsigned short) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_ice1712 *VAR_0)
{
 static unsigned short VAR_1[] = {
  132, 0x87,
  131, 0x02,
  130, 0x00,
  129, 0x00,
  128, 0x00,
 };

 unsigned int VAR_2;



 FUNC_1(VAR_0, 132, 0x86);
 FUNC_2(100);
 FUNC_1(VAR_0, 132, 0x87);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2 += 2)
  FUNC_1(VAR_0, VAR_1[VAR_2], VAR_1[VAR_2+1]);
}
