
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct cs43130_private {int ** hpload_ac; scalar_t__ ac_meas; scalar_t__ hpload_done; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cs43130_private* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (char*,scalar_t__,char*,...) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, char *VAR_3, u8 VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7;
 struct i2c_client *VAR_8 = FUNC_3(VAR_2);
 struct cs43130_private *VAR_9 = FUNC_1(VAR_8);

 if (VAR_9->hpload_done && VAR_9->ac_meas) {
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
   VAR_7 = FUNC_2(VAR_3 + VAR_6, VAR_0 - VAR_6, "%u\n",
     VAR_9->hpload_ac[VAR_5][VAR_4]);
   if (!VAR_7)
    break;

   VAR_6 += VAR_7;
  }

  return VAR_6;
 } else {
  return FUNC_2(VAR_3, VAR_0, "NO_HPLOAD\n");
 }
}
