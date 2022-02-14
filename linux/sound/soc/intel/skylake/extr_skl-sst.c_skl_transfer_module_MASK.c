
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* cl_copy_to_dmabuf ) (struct sst_dsp*,void const*,int,int) ;int (* cl_stop_dma ) (struct sst_dsp*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct sst_dsp {TYPE_2__ cl_dev; int dev; struct skl_dev* thread_context; } ;
struct skl_dev {int mod_load_complete; int mod_load_status; int mod_load_wait; int ipc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sst_dsp*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (struct sst_dsp*,void const*,int,int) ;
 int FUNC_6 (struct sst_dsp*,void const*,int,int) ;
 int FUNC_7 (struct sst_dsp*) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct sst_dsp *VAR_3, const void *VAR_4,
   u32 VAR_5, u16 VAR_6, u8 VAR_7, bool VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct skl_dev *VAR_12 = VAR_3->thread_context;
 VAR_12->mod_load_complete = 0;

 VAR_10 = VAR_3->cl_dev.ops.cl_copy_to_dmabuf(VAR_3, VAR_4, VAR_5, 0);
 if (VAR_10 < 0)
  return VAR_10;


 if (VAR_8)
  VAR_9 = FUNC_3(&VAR_12->ipc, VAR_2, &VAR_6);
 else
  VAR_9 = FUNC_4(&VAR_12->ipc, 0, VAR_7, 0);

 if (VAR_9 < 0) {
  FUNC_0(VAR_3->dev, "Failed to Load %s with err %d\n",
    VAR_8 ? "module" : "lib", VAR_9);
  goto out;
 }






 while (VAR_10 > 0) {
  VAR_11 = VAR_5 - VAR_10;

  VAR_9 = FUNC_2(VAR_3);
  if (VAR_9 < 0)
   goto out;

  VAR_10 = VAR_3->cl_dev.ops.cl_copy_to_dmabuf(VAR_3,
       VAR_4 + VAR_11,
       VAR_10, 0);
 }

 VAR_9 = FUNC_8(VAR_12->mod_load_wait, VAR_12->mod_load_complete,
    FUNC_1(VAR_1));
 if (VAR_9 == 0 || !VAR_12->mod_load_status) {
  FUNC_0(VAR_3->dev, "Module Load failed\n");
  VAR_9 = -VAR_0;
 }

out:
 VAR_3->cl_dev.ops.cl_stop_dma(VAR_3);

 return VAR_9;
}
