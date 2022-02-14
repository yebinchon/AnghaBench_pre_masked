
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct skl_dev {TYPE_4__* dsp; scalar_t__ boot_complete; int ipc; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int (* cl_cleanup_controller ) (TYPE_4__*) ;} ;
struct TYPE_10__ {TYPE_2__ ops; } ;
struct TYPE_11__ {TYPE_3__ cl_dev; TYPE_1__* ops; scalar_t__ fw; } ;
struct TYPE_8__ {int (* free ) (TYPE_4__*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct skl_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;

void FUNC_7(struct device *VAR_0, struct skl_dev *VAR_1)
{

 if (VAR_1->dsp->fw)
  FUNC_0(VAR_1->dsp->fw);
 FUNC_2(VAR_1->dsp);
 FUNC_3(VAR_1);
 FUNC_4(&VAR_1->ipc);
 VAR_1->dsp->ops->free(VAR_1->dsp);
 if (VAR_1->boot_complete) {
  VAR_1->dsp->cl_dev.ops.cl_cleanup_controller(VAR_1->dsp);
  FUNC_1(VAR_1->dsp);
 }
}
