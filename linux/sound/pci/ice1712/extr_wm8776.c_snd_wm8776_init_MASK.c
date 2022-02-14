
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_wm8776 {int ctl; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct snd_wm8776*,int,int const) ;
 int FUNC_3 (int) ;

void FUNC_4(struct snd_wm8776 *VAR_2)
{
 int VAR_3;
 static const u16 VAR_4[] = {
  0x000, 0x100, 0x000,
  0x000, 0x100, 0x000,
  0x000, 0x090, 0x000, 0x000,
  0x022, 0x022, 0x022,
  0x008, 0x0cf, 0x0cf, 0x07b, 0x000,
  0x032, 0x000, 0x0a6, 0x001, 0x001
 };

 FUNC_1(VAR_2->ctl, VAR_1, sizeof(VAR_2->ctl));

 FUNC_2(VAR_2, VAR_0, 0x00);
 FUNC_3(10);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_4); VAR_3++)
  FUNC_2(VAR_2, VAR_3, VAR_4[VAR_3]);
}
