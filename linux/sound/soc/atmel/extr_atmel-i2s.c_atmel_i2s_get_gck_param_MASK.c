
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_i2s_gck_param {scalar_t__ fs; } ;
struct atmel_i2s_dev {struct atmel_i2s_gck_param const* gck_param; int dev; int gclk; } ;


 int FUNC_0 (struct atmel_i2s_gck_param*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 struct atmel_i2s_gck_param* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct atmel_i2s_dev *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_3->gclk) {
  FUNC_2(VAR_3->dev, "cannot generate the I2S Master Clock\n");
  return -VAR_0;
 }





 VAR_3->gck_param = ((void*)0);
 VAR_6 = VAR_1;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); ++VAR_5) {
  const struct atmel_i2s_gck_param *VAR_7 = &VAR_2[VAR_5];
  int VAR_8 = FUNC_1(VAR_4 - VAR_7->fs);

  if (VAR_8 < VAR_6) {
   VAR_6 = VAR_8;
   VAR_3->gck_param = VAR_7;
  }
 }

 return 0;
}
