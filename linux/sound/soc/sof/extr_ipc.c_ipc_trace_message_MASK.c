
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sof_ipc_dma_trace_posn {int dummy; } ;
struct snd_sof_dev {int dev; } ;
typedef int posn ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_sof_dev*,int *,struct sof_ipc_dma_trace_posn*,int) ;
 int FUNC_2 (struct snd_sof_dev*,struct sof_ipc_dma_trace_posn*) ;

__attribute__((used)) static void FUNC_3(struct snd_sof_dev *VAR_0, u32 VAR_1)
{
 struct sof_ipc_dma_trace_posn VAR_2;

 switch (VAR_1) {
 case 128:

  FUNC_1(VAR_0, ((void*)0), &VAR_2, sizeof(VAR_2));
  FUNC_2(VAR_0, &VAR_2);
  break;
 default:
  FUNC_0(VAR_0->dev, "error: unhandled trace message %x\n",
   VAR_1);
  break;
 }
}
