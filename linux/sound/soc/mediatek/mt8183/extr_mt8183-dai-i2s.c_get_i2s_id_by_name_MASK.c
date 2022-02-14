
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct mtk_base_afe *VAR_6,
         const char *VAR_7)
{
 if (FUNC_0(VAR_7, "I2S0", 4) == 0)
  return VAR_1;
 else if (FUNC_0(VAR_7, "I2S1", 4) == 0)
  return VAR_2;
 else if (FUNC_0(VAR_7, "I2S2", 4) == 0)
  return VAR_3;
 else if (FUNC_0(VAR_7, "I2S3", 4) == 0)
  return VAR_4;
 else if (FUNC_0(VAR_7, "I2S5", 4) == 0)
  return VAR_5;
 else
  return -VAR_0;
}
