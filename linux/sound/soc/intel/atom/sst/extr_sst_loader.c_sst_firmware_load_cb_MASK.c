
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {scalar_t__ sst_state; int sst_lock; int dev; int * fw_in_mem; } ;
struct firmware {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct intel_sst_drv*,struct firmware const*) ;

void FUNC_6(const struct firmware *VAR_1, void *VAR_2)
{
 struct intel_sst_drv *VAR_3 = VAR_2;

 FUNC_0(VAR_3->dev, "Enter\n");

 if (VAR_1 == ((void*)0)) {
  FUNC_1(VAR_3->dev, "request fw failed\n");
  return;
 }

 FUNC_2(&VAR_3->sst_lock);

 if (VAR_3->sst_state != VAR_0 ||
   VAR_3->fw_in_mem != ((void*)0)) {
  FUNC_4(VAR_1);
  FUNC_3(&VAR_3->sst_lock);
  return;
 }

 FUNC_0(VAR_3->dev, "Request Fw completed\n");
 FUNC_5(VAR_3, VAR_1);
 FUNC_3(&VAR_3->sst_lock);
}
