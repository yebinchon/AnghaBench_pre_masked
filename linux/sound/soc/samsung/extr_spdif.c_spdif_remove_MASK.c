
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_spdif_info {int pclk; int sclk; int regs; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct resource*) ;
 struct samsung_spdif_info VAR_1 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct samsung_spdif_info *VAR_3 = &VAR_1;
 struct resource *VAR_4;

 FUNC_1(VAR_3->regs);

 VAR_4 = FUNC_2(VAR_2, VAR_0, 0);
 if (VAR_4)
  FUNC_3(VAR_4->start, FUNC_4(VAR_4));

 FUNC_0(VAR_3->sclk);
 FUNC_0(VAR_3->pclk);

 return 0;
}
