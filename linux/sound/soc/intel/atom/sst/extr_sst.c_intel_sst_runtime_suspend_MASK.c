
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_sst_drv {scalar_t__ sst_state; TYPE_1__* ops; int post_msg_wq; int irq_num; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct intel_sst_drv*) ;scalar_t__ (* save_dsp_context ) (struct intel_sst_drv*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct intel_sst_drv* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_sst_drv*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct intel_sst_drv*) ;
 int FUNC_5 (struct intel_sst_drv*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 int VAR_3 = 0;
 struct intel_sst_drv *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->sst_state == VAR_1) {
  FUNC_0(VAR_2, "LPE is already in RESET state, No action\n");
  return 0;
 }

 if (VAR_4->ops->save_dsp_context(VAR_4))
  return -VAR_0;


 FUNC_3(VAR_4, VAR_1);

 FUNC_6(VAR_4->irq_num);
 FUNC_2(VAR_4->post_msg_wq);

 VAR_4->ops->reset(VAR_4);

 return VAR_3;
}
