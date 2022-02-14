
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsi_stream {int * chan; scalar_t__ dma_id; } ;
struct TYPE_4__ {int * handler; } ;
struct TYPE_3__ {int * handler; } ;
struct fsi_priv {TYPE_2__ capture; TYPE_1__ playback; scalar_t__ phys; } ;
struct dma_slave_config {int direction; void* src_addr_width; scalar_t__ src_addr; void* dst_addr_width; scalar_t__ dst_addr; } ;
struct device {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,void*) ;
 int * FUNC_5 (struct device*,char*) ;
 int FUNC_6 (int *,struct dma_slave_config*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct fsi_priv*,struct fsi_stream*) ;
 int FUNC_8 (struct fsi_priv*,struct device*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct fsi_priv *VAR_9, struct fsi_stream *VAR_10, struct device *VAR_11)
{
 int VAR_12 = FUNC_7(VAR_9, VAR_10);
 VAR_10->chan = FUNC_5(VAR_11, VAR_12 ? "tx" : "rx");

 if (VAR_10->chan) {
  struct dma_slave_config VAR_13 = {};
  int VAR_14;

  if (VAR_12) {
   VAR_13.dst_addr = VAR_9->phys + VAR_5;
   VAR_13.dst_addr_width = VAR_3;
   VAR_13.direction = VAR_1;
  } else {
   VAR_13.src_addr = VAR_9->phys + VAR_4;
   VAR_13.src_addr_width = VAR_3;
   VAR_13.direction = VAR_0;
  }

  VAR_14 = FUNC_6(VAR_10->chan, &VAR_13);
  if (VAR_14 < 0) {
   FUNC_3(VAR_10->chan);
   VAR_10->chan = ((void*)0);
  }
 }

 if (!VAR_10->chan) {


  if (VAR_12)
   VAR_9->playback.handler = &VAR_7;
  else
   VAR_9->capture.handler = &VAR_6;

  FUNC_0(VAR_11, "switch handler (dma => pio)\n");


  return FUNC_8(VAR_9, VAR_11);
 }

 return 0;
}
