
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (unsigned short*) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 int FUNC_2 (struct snd_ice1712*,int ) ;
 int FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ,int ) ;
 int FUNC_5 (struct snd_ice1712*,int ,int ) ;
 int FUNC_6 (struct snd_ice1712*,int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct snd_ice1712 *VAR_0)
{
 int VAR_1;
 static unsigned short VAR_2[] = {
  0x100, 0x100, 0x100,
  0x100, 0x100, 0x100,
  0x000, 0x090, 0x000, 0x000,
  0x022, 0x022, 0x022,
  0x008, 0x0cf, 0x0cf, 0x07b, 0x000,
  0x032, 0x000, 0x0a6, 0x001, 0x001
 };

 FUNC_6(VAR_0, 0x17, 0x000);


 FUNC_7(10);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2); VAR_1++)
  FUNC_6(VAR_0, VAR_1, VAR_2[VAR_1]);

 FUNC_3(VAR_0, 0);
 FUNC_1(VAR_0, 0);
 FUNC_2(VAR_0, 0);
 FUNC_4(VAR_0, 0, 0);
 FUNC_5(VAR_0, 0, 0);


 FUNC_6(VAR_0, 0x00, 0);
 FUNC_6(VAR_0, 0x01, 0);
 FUNC_6(VAR_0, 0x02, 0x100);
 FUNC_6(VAR_0, 0x0d, 0x080);
}
