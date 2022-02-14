
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2s_clk_config_data {int chan_nr; } ;
struct dw_i2s_dev {int xfer_resolution; int fifo_th; int i2s_base; struct i2s_clk_config_data config; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dw_i2s_dev*,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct dw_i2s_dev *VAR_1, int VAR_2)
{
 u32 VAR_3;
 struct i2s_clk_config_data *VAR_4 = &VAR_1->config;


 FUNC_6(VAR_1, VAR_2);

 for (VAR_3 = 0; VAR_3 < (VAR_4->chan_nr / 2); VAR_3++) {
  if (VAR_2 == VAR_0) {
   FUNC_7(VAR_1->i2s_base, FUNC_3(VAR_3),
          VAR_1->xfer_resolution);
   FUNC_7(VAR_1->i2s_base, FUNC_5(VAR_3),
          VAR_1->fifo_th - 1);
   FUNC_7(VAR_1->i2s_base, FUNC_4(VAR_3), 1);
  } else {
   FUNC_7(VAR_1->i2s_base, FUNC_0(VAR_3),
          VAR_1->xfer_resolution);
   FUNC_7(VAR_1->i2s_base, FUNC_2(VAR_3),
          VAR_1->fifo_th - 1);
   FUNC_7(VAR_1->i2s_base, FUNC_1(VAR_3), 1);
  }

 }
}
