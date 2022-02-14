
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_block {scalar_t__ ret_code; int condition; } ;
struct intel_sst_drv {int dev; int wait_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct intel_sst_drv *VAR_2,
    struct sst_block *VAR_3)
{
 int VAR_4 = 0;

 if (!FUNC_2(VAR_2->wait_queue,
    VAR_3->condition)) {

  if (VAR_3->ret_code < 0) {
   FUNC_1(VAR_2->dev,
    "stream failed %d\n", VAR_3->ret_code);
   VAR_4 = -VAR_0;
  } else {
   FUNC_0(VAR_2->dev, "event up\n");
   VAR_4 = 0;
  }
 } else {
  FUNC_1(VAR_2->dev, "signal interrupted\n");
  VAR_4 = -VAR_1;
 }
 return VAR_4;

}
