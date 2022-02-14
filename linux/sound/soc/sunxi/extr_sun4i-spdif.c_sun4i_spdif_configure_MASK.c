
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_spdif_quirks {int val_fctl_ftx; } ;
struct sun4i_spdif_dev {int regmap; struct sun4i_spdif_quirks* quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sun4i_spdif_dev *VAR_4)
{
 const struct sun4i_spdif_quirks *VAR_5 = VAR_4->quirks;


 FUNC_1(VAR_4->regmap, VAR_0, VAR_1);


 FUNC_0(VAR_4->regmap, VAR_2,
      VAR_5->val_fctl_ftx, VAR_5->val_fctl_ftx);


 FUNC_1(VAR_4->regmap, VAR_3, 0);
}
