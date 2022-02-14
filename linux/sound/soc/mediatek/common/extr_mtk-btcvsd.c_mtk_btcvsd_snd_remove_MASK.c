
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mtk_btcvsd_snd {int bt_sram_bank2_base; int bt_pkv_base; } ;


 struct mtk_btcvsd_snd* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct mtk_btcvsd_snd *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1->bt_pkv_base);
 FUNC_1(VAR_1->bt_sram_bank2_base);
 return 0;
}
