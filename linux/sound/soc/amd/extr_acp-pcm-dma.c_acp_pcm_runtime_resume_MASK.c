
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct audio_drv_data {int acp_mmio; int asic_type; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct audio_drv_data* FUNC_3 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 int VAR_2;
 struct audio_drv_data *VAR_3 = FUNC_3(VAR_1);

 VAR_2 = FUNC_0(VAR_3->acp_mmio, VAR_3->asic_type);
 if (VAR_2) {
  FUNC_2(VAR_1, "ACP Init failed status:%d\n", VAR_2);
  return VAR_2;
 }
 FUNC_1(1, VAR_3->acp_mmio, VAR_0);
 return 0;
}
