
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_ipc_dma_trace_posn {scalar_t__ host_offset; scalar_t__ overflow; int messages; } ;
struct snd_sof_dev {scalar_t__ host_offset; int dev; int trace_sleep; scalar_t__ dtrace_is_enabled; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct snd_sof_dev *VAR_0,
        struct sof_ipc_dma_trace_posn *VAR_1)
{
 if (VAR_0->dtrace_is_enabled && VAR_0->host_offset != VAR_1->host_offset) {
  VAR_0->host_offset = VAR_1->host_offset;
  FUNC_1(&VAR_0->trace_sleep);
 }

 if (VAR_1->overflow != 0)
  FUNC_0(VAR_0->dev,
   "error: DSP trace buffer overflow %u bytes. Total messages %d\n",
   VAR_1->overflow, VAR_1->messages);

 return 0;
}
