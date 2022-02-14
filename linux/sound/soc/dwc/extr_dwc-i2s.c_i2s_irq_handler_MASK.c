
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_i2s_dev {int dev; scalar_t__ use_pio; int i2s_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dw_i2s_dev*) ;
 int FUNC_3 (struct dw_i2s_dev*) ;
 int FUNC_4 (struct dw_i2s_dev*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct dw_i2s_dev *VAR_10 = VAR_9;
 bool VAR_11 = 0;
 u32 VAR_12[4];
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  VAR_12[VAR_13] = FUNC_5(VAR_10->i2s_base, FUNC_0(VAR_13));

 FUNC_4(VAR_10, VAR_7);
 FUNC_4(VAR_10, VAR_6);

 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {




  if ((VAR_12[VAR_13] & VAR_4) && (VAR_13 == 0) && VAR_10->use_pio) {
   FUNC_3(VAR_10);
   VAR_11 = 1;
  }





  if ((VAR_12[VAR_13] & VAR_2) && (VAR_13 == 0) && VAR_10->use_pio) {
   FUNC_2(VAR_10);
   VAR_11 = 1;
  }


  if (VAR_12[VAR_13] & VAR_5) {
   FUNC_1(VAR_10->dev, "TX overrun (ch_id=%d)\n", VAR_13);
   VAR_11 = 1;
  }


  if (VAR_12[VAR_13] & VAR_3) {
   FUNC_1(VAR_10->dev, "RX overrun (ch_id=%d)\n", VAR_13);
   VAR_11 = 1;
  }
 }

 if (VAR_11)
  return VAR_0;
 else
  return VAR_1;
}
