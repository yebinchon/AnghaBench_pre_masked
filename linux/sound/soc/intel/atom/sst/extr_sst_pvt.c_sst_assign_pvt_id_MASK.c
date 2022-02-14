
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {int block_lock; int pvt_id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct intel_sst_drv *VAR_2)
{
 int VAR_3;

 FUNC_4(&VAR_2->block_lock);

 VAR_3 = FUNC_3(VAR_2->pvt_id);
 FUNC_1(VAR_2->dev, "pvt_id assigned --> %d\n", VAR_3);
 if (VAR_3 >= VAR_1){
  FUNC_5(&VAR_2->block_lock);
  FUNC_2(VAR_2->dev, "PVT _ID error: no free id blocks ");
  return -VAR_0;
 }

 FUNC_0(VAR_3, &VAR_2->pvt_id);
 FUNC_5(&VAR_2->block_lock);
 return VAR_3;
}
