
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {struct davinci_mcasp_pdata* platform_data; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_phandle_args {int * args; } ;
struct of_device_id {int data; } ;
struct device_node {int dummy; } ;
struct davinci_mcasp_pdata {int op_mode; int tdm_slots; int num_serializer; int txnumevt; int rxnumevt; int sram_size_playback; int sram_size_capture; void* dismod; int rx_dma_channel; int tx_dma_channel; int * serial_dir; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 struct davinci_mcasp_pdata* FUNC_4 (TYPE_1__*,int ,int,int ) ;
 int * FUNC_5 (TYPE_1__*,int,int ) ;
 int VAR_5 ;
 int* FUNC_6 (struct device_node*,char*,int*) ;
 struct of_device_id* FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_9 (struct device_node*,char*,char*) ;
 int FUNC_10 (struct device_node*,char*,int*) ;

__attribute__((used)) static struct davinci_mcasp_pdata *FUNC_11(
      struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct davinci_mcasp_pdata *VAR_8 = ((void*)0);
 const struct of_device_id *VAR_9 =
   FUNC_7(VAR_5, &VAR_6->dev);
 struct of_phandle_args VAR_10;

 const u32 *VAR_11;
 u32 VAR_12;
 int VAR_13, VAR_14 = 0;

 if (VAR_6->dev.platform_data) {
  VAR_8 = VAR_6->dev.platform_data;
  VAR_8->dismod = VAR_1;
  return VAR_8;
 } else if (VAR_9) {
  VAR_8 = FUNC_4(&VAR_6->dev, VAR_9->data, sizeof(*VAR_8),
         VAR_4);
  if (!VAR_8) {
   VAR_14 = -VAR_3;
   return VAR_8;
  }
 } else {

  VAR_14 = -VAR_2;
  goto nodata;
 }

 VAR_14 = FUNC_10(VAR_7, "op-mode", &VAR_12);
 if (VAR_14 >= 0)
  VAR_8->op_mode = VAR_12;

 VAR_14 = FUNC_10(VAR_7, "tdm-slots", &VAR_12);
 if (VAR_14 >= 0) {
  if (VAR_12 < 2 || VAR_12 > 32) {
   FUNC_2(&VAR_6->dev,
    "tdm-slots must be in rage [2-32]\n");
   VAR_14 = -VAR_2;
   goto nodata;
  }

  VAR_8->tdm_slots = VAR_12;
 }

 VAR_11 = FUNC_6(VAR_7, "serial-dir", &VAR_12);
 VAR_12 /= sizeof(u32);
 if (VAR_11) {
  u8 *VAR_15 = FUNC_5(&VAR_6->dev,
       (sizeof(*VAR_15) * VAR_12),
       VAR_4);
  if (!VAR_15) {
   VAR_14 = -VAR_3;
   goto nodata;
  }

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   VAR_15[VAR_13] = FUNC_1(&VAR_11[VAR_13]);

  VAR_8->num_serializer = VAR_12;
  VAR_8->serial_dir = VAR_15;
 }

 VAR_14 = FUNC_9(VAR_7, "dma-names", "tx");
 if (VAR_14 < 0)
  goto nodata;

 VAR_14 = FUNC_8(VAR_7, "dmas", "#dma-cells", VAR_14,
      &VAR_10);
 if (VAR_14 < 0)
  goto nodata;

 VAR_8->tx_dma_channel = VAR_10.args[0];


 if (VAR_8->op_mode != VAR_0) {
  VAR_14 = FUNC_9(VAR_7, "dma-names", "rx");
  if (VAR_14 < 0)
   goto nodata;

  VAR_14 = FUNC_8(VAR_7, "dmas", "#dma-cells", VAR_14,
       &VAR_10);
  if (VAR_14 < 0)
   goto nodata;

  VAR_8->rx_dma_channel = VAR_10.args[0];
 }

 VAR_14 = FUNC_10(VAR_7, "tx-num-evt", &VAR_12);
 if (VAR_14 >= 0)
  VAR_8->txnumevt = VAR_12;

 VAR_14 = FUNC_10(VAR_7, "rx-num-evt", &VAR_12);
 if (VAR_14 >= 0)
  VAR_8->rxnumevt = VAR_12;

 VAR_14 = FUNC_10(VAR_7, "sram-size-playback", &VAR_12);
 if (VAR_14 >= 0)
  VAR_8->sram_size_playback = VAR_12;

 VAR_14 = FUNC_10(VAR_7, "sram-size-capture", &VAR_12);
 if (VAR_14 >= 0)
  VAR_8->sram_size_capture = VAR_12;

 VAR_14 = FUNC_10(VAR_7, "dismod", &VAR_12);
 if (VAR_14 >= 0) {
  if (VAR_12 == 0 || VAR_12 == 2 || VAR_12 == 3) {
   VAR_8->dismod = FUNC_0(VAR_12);
  } else {
   FUNC_3(&VAR_6->dev, "Invalid dismod value: %u\n", VAR_12);
   VAR_8->dismod = VAR_1;
  }
 } else {
  VAR_8->dismod = VAR_1;
 }

 return VAR_8;

nodata:
 if (VAR_14 < 0) {
  FUNC_2(&VAR_6->dev, "Error populating platform data, err %d\n",
   VAR_14);
  VAR_8 = ((void*)0);
 }
 return VAR_8;
}
