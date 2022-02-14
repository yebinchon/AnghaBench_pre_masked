
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {scalar_t__ sst_state; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct intel_sst_drv* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct intel_sst_drv*) ;
 int FUNC_7 (struct intel_sst_drv*) ;
 int FUNC_8 (struct intel_sst_drv*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1, bool VAR_2)
{
 struct intel_sst_drv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;
 int VAR_5 = 0;

 if (VAR_2) {
  VAR_4 = FUNC_4(VAR_1);
  VAR_5 = FUNC_0(VAR_1);
  FUNC_1(VAR_3->dev, "Enable: pm usage count: %d\n", VAR_5);
  if (VAR_4 < 0) {
   FUNC_5(VAR_1);
   FUNC_2(VAR_3->dev, "Runtime get failed with err: %d\n", VAR_4);
   return VAR_4;
  }
  if ((VAR_3->sst_state == VAR_0) && (VAR_5 == 1)) {
   VAR_4 = FUNC_6(VAR_3);
   if (VAR_4) {
    FUNC_2(VAR_1, "FW download fail %d\n", VAR_4);
    FUNC_8(VAR_3, VAR_0);
    VAR_4 = FUNC_7(VAR_3);
   }
  }
 } else {
  VAR_5 = FUNC_0(VAR_1);
  FUNC_1(VAR_3->dev, "Disable: pm usage count: %d\n", VAR_5);
  return FUNC_7(VAR_3);
 }
 return VAR_4;
}
