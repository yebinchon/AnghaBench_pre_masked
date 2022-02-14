
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {int sst_lock; int dev; int firmware_name; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct firmware const**,int ,int ) ;
 int FUNC_4 (struct intel_sst_drv*,struct firmware const*) ;

__attribute__((used)) static int FUNC_5(struct intel_sst_drv *VAR_1)
{
 int VAR_2 = 0;
 const struct firmware *VAR_3;

 VAR_2 = FUNC_3(&VAR_3, VAR_1->firmware_name, VAR_1->dev);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "request fw failed %d\n", VAR_2);
  return VAR_2;
 }
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1->dev, "fw is returning as null\n");
  return -VAR_0;
 }
 FUNC_1(&VAR_1->sst_lock);
 VAR_2 = FUNC_4(VAR_1, VAR_3);
 FUNC_2(&VAR_1->sst_lock);

 return VAR_2;
}
