
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_amd7930 {scalar_t__ regs; scalar_t__ irq; struct platform_device* op; } ;
struct platform_device {int * resource; } ;


 int FUNC_0 (struct snd_amd7930*) ;
 int FUNC_1 (scalar_t__,struct snd_amd7930*) ;
 int FUNC_2 (struct snd_amd7930*) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_amd7930 *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->op;

 FUNC_0(VAR_0);

 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, VAR_0);

 if (VAR_0->regs)
  FUNC_3(&VAR_1->resource[0], VAR_0->regs,
      FUNC_4(&VAR_1->resource[0]));

 FUNC_2(VAR_0);

 return 0;
}
