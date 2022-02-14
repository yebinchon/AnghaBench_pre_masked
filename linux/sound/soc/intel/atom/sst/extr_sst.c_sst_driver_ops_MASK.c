
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {int dev_id; int dev; int * ops; int tstamp; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;

int FUNC_1(struct intel_sst_drv *VAR_3)
{

 switch (VAR_3->dev_id) {
 case 128:
 case 130:
 case 129:
  VAR_3->tstamp = VAR_1;
  VAR_3->ops = &VAR_2;
  return 0;

 default:
  FUNC_0(VAR_3->dev,
   "SST Driver capabilities missing for dev_id: %x",
   VAR_3->dev_id);
  return -VAR_0;
 };
}
