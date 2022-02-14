
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct platform_device {int dummy; } ;
struct atmel_ac97c {int irq; int regs; int pclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atmel_ac97c*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct atmel_ac97c*) ;
 struct atmel_ac97c* FUNC_4 (struct snd_card*) ;
 int FUNC_5 (int ) ;
 struct snd_card* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct snd_card*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct snd_card *VAR_4 = FUNC_6(VAR_3);
 struct atmel_ac97c *VAR_5 = FUNC_4(VAR_4);

 FUNC_0(VAR_5, VAR_0, 0);
 FUNC_0(VAR_5, VAR_1, 0);
 FUNC_0(VAR_5, VAR_2, 0);

 FUNC_1(VAR_5->pclk);
 FUNC_2(VAR_5->pclk);
 FUNC_5(VAR_5->regs);
 FUNC_3(VAR_5->irq, VAR_5);

 FUNC_7(VAR_4);

 return 0;
}
