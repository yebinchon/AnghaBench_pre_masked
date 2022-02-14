
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* prepare ) (int ,int,int ,struct snd_dma_buffer*) ;int (* cleanup ) (int ,struct snd_dma_buffer*,int) ;int (* trigger ) (int ,int,int) ;} ;
struct sst_dsp {int dev; TYPE_1__ dsp_ops; struct skl_dev* thread_context; } ;
struct snd_dma_buffer {int area; } ;
struct skl_lib_info {int name; } ;
struct skl_dev {int ipc; int * lib_info; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct skl_dev*,int *,struct firmware*,int ,int) ;
 int FUNC_3 (struct skl_lib_info*,int) ;
 int FUNC_4 (int *,int,int,int) ;
 int FUNC_5 (int ,int,int ,struct snd_dma_buffer*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,struct snd_dma_buffer*,int) ;

__attribute__((used)) static int
FUNC_9(struct sst_dsp *VAR_1, struct skl_lib_info *VAR_2, int VAR_3)
{
 struct snd_dma_buffer VAR_4;
 struct skl_dev *VAR_5 = VAR_1->thread_context;
 struct firmware VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9, VAR_10;


 for (VAR_8 = 1; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = FUNC_2(VAR_5, &VAR_5->lib_info[VAR_8], &VAR_6,
     VAR_0, VAR_8);
  if (VAR_7 < 0)
   goto load_library_failed;

  VAR_10 = VAR_1->dsp_ops.prepare(VAR_1->dev, 0x40,
     VAR_6.size, &VAR_4);
  if (VAR_10 <= 0) {
   FUNC_0(VAR_1->dev, "Lib prepare DMA err: %x\n",
     VAR_10);
   VAR_7 = VAR_10;
   goto load_library_failed;
  }

  VAR_9 = VAR_10 - 1;
  FUNC_1(VAR_4.area, VAR_6.data, VAR_6.size);

  VAR_1->dsp_ops.trigger(VAR_1->dev, 1, VAR_10);
  VAR_7 = FUNC_4(&VAR_5->ipc, VAR_9, VAR_8, 1);
  if (VAR_7 < 0)
   FUNC_0(VAR_1->dev, "IPC Load Lib for %s fail: %d\n",
     VAR_2[VAR_8].name, VAR_7);

  VAR_1->dsp_ops.trigger(VAR_1->dev, 0, VAR_10);
  VAR_1->dsp_ops.cleanup(VAR_1->dev, &VAR_4, VAR_10);
 }

 return VAR_7;

load_library_failed:
 FUNC_3(VAR_2, VAR_3);
 return VAR_7;
}
