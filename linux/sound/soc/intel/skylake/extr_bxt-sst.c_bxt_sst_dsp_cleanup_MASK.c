
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skl_dev {TYPE_2__* dsp; int ipc; int lib_count; int lib_info; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; scalar_t__ fw; } ;
struct TYPE_3__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct skl_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct device *VAR_0, struct skl_dev *VAR_1)
{

 FUNC_3(VAR_1->lib_info, VAR_1->lib_count);
 if (VAR_1->dsp->fw)
  FUNC_0(VAR_1->dsp->fw);
 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->ipc);
 VAR_1->dsp->ops->free(VAR_1->dsp);
}
