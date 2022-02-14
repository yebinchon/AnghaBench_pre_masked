
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_dsp_busy; int tx_data_copy; int tx_msg; } ;
struct sst_generic_ipc {TYPE_1__ ops; int rx_data_max_size; int tx_data_max_size; struct device* dev; int dsp; } ;
struct skl_dev {int dsp; struct sst_generic_ipc ipc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sst_generic_ipc*) ;

int FUNC_1(struct device *VAR_5, struct skl_dev *VAR_6)
{
 struct sst_generic_ipc *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_6->ipc;
 VAR_7->dsp = VAR_6->dsp;
 VAR_7->dev = VAR_5;

 VAR_7->tx_data_max_size = VAR_1;
 VAR_7->rx_data_max_size = VAR_0;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7->ops.tx_msg = VAR_4;
 VAR_7->ops.tx_data_copy = VAR_3;
 VAR_7->ops.is_dsp_busy = VAR_2;

 return 0;
}
