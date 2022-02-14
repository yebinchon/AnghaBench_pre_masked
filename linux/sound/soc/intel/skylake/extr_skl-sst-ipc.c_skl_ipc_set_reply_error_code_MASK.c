
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sst_generic_ipc {TYPE_2__* dsp; int dev; } ;
struct TYPE_9__ {scalar_t__ reply; scalar_t__ err; scalar_t__ msg; } ;
struct TYPE_7__ {int (* get_fw_errcode ) (TYPE_2__*) ;} ;
struct TYPE_8__ {TYPE_1__ fw_ops; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int ) ;
 TYPE_5__* VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct sst_generic_ipc *VAR_2, u32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4].reply == VAR_3)
   break;
 }

 if (VAR_4 == FUNC_0(VAR_1)) {
  FUNC_1(VAR_2->dev, "ipc FW reply: %d FW Error Code: %u\n",
    VAR_3,
    VAR_2->dsp->fw_ops.get_fw_errcode(VAR_2->dsp));
  return -VAR_0;
 }

 if (VAR_1[VAR_4].err < 0)
  FUNC_1(VAR_2->dev, "ipc FW reply: %s FW Error Code: %u\n",
    VAR_1[VAR_4].msg,
    VAR_2->dsp->fw_ops.get_fw_errcode(VAR_2->dsp));
 else
  FUNC_2(VAR_2->dev, "ipc FW reply: %s FW Error Code: %u\n",
    VAR_1[VAR_4].msg,
    VAR_2->dsp->fw_ops.get_fw_errcode(VAR_2->dsp));

 return VAR_1[VAR_4].err;
}
