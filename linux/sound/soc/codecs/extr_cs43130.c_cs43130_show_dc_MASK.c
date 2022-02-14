
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct cs43130_private {int * hpload_dc; int hpload_done; } ;


 int VAR_0 ;
 struct cs43130_private* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (char*,int ,char*,...) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, char *VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_1);
 struct cs43130_private *VAR_5 = FUNC_0(VAR_4);

 if (!VAR_5->hpload_done)
  return FUNC_1(VAR_2, VAR_0, "NO_HPLOAD\n");
 else
  return FUNC_1(VAR_2, VAR_0, "%u\n",
     VAR_5->hpload_dc[VAR_3]);
}
