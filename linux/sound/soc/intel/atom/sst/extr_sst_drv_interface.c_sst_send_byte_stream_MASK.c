
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sst_bytes_v2 {int dummy; } ;
struct intel_sst_drv {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct intel_sst_drv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_sst_drv*) ;
 int FUNC_4 (struct intel_sst_drv*,struct snd_sst_bytes_v2*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1,
  struct snd_sst_bytes_v2 *VAR_2)
{
 int VAR_3 = 0;
 struct intel_sst_drv *VAR_4 = FUNC_0(VAR_1);

 if (((void*)0) == VAR_2)
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_4->dev);
 if (VAR_3 < 0) {
  FUNC_2(VAR_4->dev);
  return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_4, VAR_2);
 FUNC_3(VAR_4);

 return VAR_3;
}
