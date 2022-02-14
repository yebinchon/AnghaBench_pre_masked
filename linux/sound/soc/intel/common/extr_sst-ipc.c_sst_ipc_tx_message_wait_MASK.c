
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_ipc_message {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* check_dsp_lp_on ) (int ,int) ;} ;
struct sst_generic_ipc {int dsp; TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct sst_generic_ipc*,struct sst_ipc_message,struct sst_ipc_message*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

int FUNC_3(struct sst_generic_ipc *VAR_1,
 struct sst_ipc_message VAR_2, struct sst_ipc_message *VAR_3)
{
 int VAR_4;






 if (VAR_1->ops.check_dsp_lp_on)
  if (VAR_1->ops.check_dsp_lp_on(VAR_1->dsp, 1))
   return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, 1);

 if (VAR_1->ops.check_dsp_lp_on)
  if (VAR_1->ops.check_dsp_lp_on(VAR_1->dsp, 0))
   return -VAR_0;

 return VAR_4;
}
