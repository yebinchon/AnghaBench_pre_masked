
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int src_maxburst; int src_addr_width; int dst_addr; scalar_t__ src_addr; int direction; } ;
struct stm32_spdifrx_data {int * ctrl_chan; TYPE_3__ slave_config; TYPE_2__* dmab; scalar_t__ phys_addr; } ;
struct snd_dma_buffer {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {int type; struct device* dev; } ;
struct TYPE_6__ {int addr; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct device*,char*,...) ;
 TYPE_2__* FUNC_3 (struct device*,int,int ) ;
 int * FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int ,struct device*,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7,
        struct stm32_spdifrx_data *VAR_8)
{
 int VAR_9;

 VAR_8->ctrl_chan = FUNC_4(VAR_7, "rx-ctrl");
 if (FUNC_0(VAR_8->ctrl_chan)) {
  FUNC_2(VAR_7, "dma_request_slave_channel failed\n");
  return FUNC_1(VAR_8->ctrl_chan);
 }

 VAR_8->dmab = FUNC_3(VAR_7, sizeof(struct snd_dma_buffer),
         VAR_3);
 if (!VAR_8->dmab)
  return -VAR_2;

 VAR_8->dmab->dev.type = VAR_4;
 VAR_8->dmab->dev.dev = VAR_7;
 VAR_9 = FUNC_6(VAR_8->dmab->dev.type, VAR_7,
      VAR_5, VAR_8->dmab);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7, "snd_dma_alloc_pages returned error %d\n", VAR_9);
  return VAR_9;
 }

 VAR_8->slave_config.direction = VAR_0;
 VAR_8->slave_config.src_addr = (dma_addr_t)(VAR_8->phys_addr +
      VAR_6);
 VAR_8->slave_config.dst_addr = VAR_8->dmab->addr;
 VAR_8->slave_config.src_addr_width = VAR_1;
 VAR_8->slave_config.src_maxburst = 1;

 VAR_9 = FUNC_5(VAR_8->ctrl_chan,
         &VAR_8->slave_config);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7, "dmaengine_slave_config returned error %d\n", VAR_9);
  VAR_8->ctrl_chan = ((void*)0);
 }

 return VAR_9;
}
