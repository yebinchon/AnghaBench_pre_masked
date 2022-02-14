
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sof_ipc_reply {int dummy; } ;
struct sof_ipc_fw_version {scalar_t__ abi_version; } ;
struct sof_ipc_fw_ready {struct sof_ipc_fw_version version; } ;
struct TYPE_8__ {int size; int cmd; } ;
struct TYPE_7__ {scalar_t__ pages; int size; int phy_addr; } ;
struct sof_ipc_dma_trace_params_ext {TYPE_4__ hdr; scalar_t__ stream_tag; TYPE_3__ buffer; int timestamp_ns; } ;
struct sof_ipc_dma_trace_params {int dummy; } ;
struct TYPE_6__ {int bytes; } ;
struct TYPE_5__ {int addr; } ;
struct snd_sof_dev {int dtrace_is_enabled; int dtrace_draining; int dev; int ipc; scalar_t__ host_offset; scalar_t__ dma_trace_pages; TYPE_2__ dmatb; TYPE_1__ dmatp; struct sof_ipc_fw_ready fw_ready; } ;
typedef int params ;
typedef int ipc_reply ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct snd_sof_dev*,scalar_t__*) ;
 int FUNC_5 (struct snd_sof_dev*) ;
 int FUNC_6 (struct snd_sof_dev*,int ) ;
 int FUNC_7 (int ,int ,struct sof_ipc_dma_trace_params_ext*,int,struct sof_ipc_reply*,int) ;

int FUNC_8(struct snd_sof_dev *VAR_5)
{
 struct sof_ipc_fw_ready *VAR_6 = &VAR_5->fw_ready;
 struct sof_ipc_fw_version *VAR_7 = &VAR_6->version;
 struct sof_ipc_dma_trace_params_ext VAR_8;
 struct sof_ipc_reply VAR_9;
 int VAR_10;

 if (VAR_5->dtrace_is_enabled || !VAR_5->dma_trace_pages)
  return -VAR_0;


 VAR_8.hdr.cmd = VAR_2;

 if (VAR_7->abi_version >= FUNC_0(3, 7, 0)) {
  VAR_8.hdr.size = sizeof(struct sof_ipc_dma_trace_params_ext);
  VAR_8.hdr.cmd |= VAR_4;
  VAR_8.timestamp_ns = FUNC_3();
 } else {
  VAR_8.hdr.size = sizeof(struct sof_ipc_dma_trace_params);
  VAR_8.hdr.cmd |= VAR_3;
 }
 VAR_8.buffer.phy_addr = VAR_5->dmatp.addr;
 VAR_8.buffer.size = VAR_5->dmatb.bytes;
 VAR_8.buffer.pages = VAR_5->dma_trace_pages;
 VAR_8.stream_tag = 0;

 VAR_5->host_offset = 0;
 VAR_5->dtrace_draining = 0;

 VAR_10 = FUNC_4(VAR_5, &VAR_8.stream_tag);
 if (VAR_10 < 0) {
  FUNC_2(VAR_5->dev,
   "error: fail in snd_sof_dma_trace_init %d\n", VAR_10);
  return VAR_10;
 }
 FUNC_1(VAR_5->dev, "stream_tag: %d\n", VAR_8.stream_tag);


 VAR_10 = FUNC_7(VAR_5->ipc,
     VAR_8.hdr.cmd, &VAR_8, sizeof(VAR_8),
     &VAR_9, sizeof(VAR_9));
 if (VAR_10 < 0) {
  FUNC_2(VAR_5->dev,
   "error: can't set params for DMA for trace %d\n", VAR_10);
  goto trace_release;
 }

 VAR_10 = FUNC_6(VAR_5, VAR_1);
 if (VAR_10 < 0) {
  FUNC_2(VAR_5->dev,
   "error: snd_sof_dma_trace_trigger: start: %d\n", VAR_10);
  goto trace_release;
 }

 VAR_5->dtrace_is_enabled = 1;

 return 0;

trace_release:
 FUNC_5(VAR_5);
 return VAR_10;
}
