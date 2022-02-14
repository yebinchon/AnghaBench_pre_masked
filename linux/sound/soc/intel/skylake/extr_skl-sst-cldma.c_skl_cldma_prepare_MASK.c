
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ area; } ;
struct TYPE_12__ {int (* cl_setup_controller ) (struct sst_dsp*,TYPE_4__*,int ,int ) ;int (* cl_setup_bdle ) (struct sst_dsp*,TYPE_4__*,int **,int ,int) ;int cl_stop_dma; int cl_copy_to_dmabuf; int cl_cleanup_controller; int cl_trigger; int cl_cleanup_spb; int cl_setup_spb; } ;
struct TYPE_13__ {int wait_queue; scalar_t__ dma_buffer_offset; scalar_t__ curr_spib_pos; int frags; int bufsize; TYPE_4__ dmab_bdl; TYPE_2__ ops; TYPE_4__ dmab_data; } ;
struct TYPE_11__ {int (* alloc_dma_buf ) (int ,TYPE_4__*,int ) ;int (* free_dma_buf ) (int ,TYPE_4__*) ;} ;
struct sst_dsp {TYPE_3__ cl_dev; int dev; TYPE_1__ dsp_ops; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sst_dsp*,TYPE_4__*,int **,int ,int) ;
 int FUNC_3 (struct sst_dsp*,TYPE_4__*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,TYPE_4__*,int ) ;
 int FUNC_5 (int ,TYPE_4__*,int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (struct sst_dsp*,TYPE_4__*,int **,int ,int) ;
 int FUNC_8 (struct sst_dsp*,TYPE_4__*,int ,int ) ;

int FUNC_9(struct sst_dsp *VAR_8)
{
 int VAR_9;
 __le32 *VAR_10;

 VAR_8->cl_dev.bufsize = VAR_1;


 VAR_8->cl_dev.ops.cl_setup_bdle = FUNC_2;
 VAR_8->cl_dev.ops.cl_setup_controller = FUNC_3;
 VAR_8->cl_dev.ops.cl_setup_spb = VAR_5;
 VAR_8->cl_dev.ops.cl_cleanup_spb = VAR_3;
 VAR_8->cl_dev.ops.cl_trigger = VAR_7;
 VAR_8->cl_dev.ops.cl_cleanup_controller = VAR_2;
 VAR_8->cl_dev.ops.cl_copy_to_dmabuf = VAR_4;
 VAR_8->cl_dev.ops.cl_stop_dma = VAR_6;


 VAR_9 = VAR_8->dsp_ops.alloc_dma_buf(VAR_8->dev,
   &VAR_8->cl_dev.dmab_data, VAR_8->cl_dev.bufsize);
 if (VAR_9 < 0) {
  FUNC_0(VAR_8->dev, "Alloc buffer for base fw failed: %x\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = VAR_8->dsp_ops.alloc_dma_buf(VAR_8->dev,
   &VAR_8->cl_dev.dmab_bdl, VAR_0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_8->dev, "Alloc buffer for blde failed: %x\n", VAR_9);
  VAR_8->dsp_ops.free_dma_buf(VAR_8->dev, &VAR_8->cl_dev.dmab_data);
  return VAR_9;
 }
 VAR_10 = (__le32 *)VAR_8->cl_dev.dmab_bdl.area;


 VAR_8->cl_dev.ops.cl_setup_bdle(VAR_8, &VAR_8->cl_dev.dmab_data,
   &VAR_10, VAR_8->cl_dev.bufsize, 1);
 VAR_8->cl_dev.ops.cl_setup_controller(VAR_8, &VAR_8->cl_dev.dmab_bdl,
   VAR_8->cl_dev.bufsize, VAR_8->cl_dev.frags);

 VAR_8->cl_dev.curr_spib_pos = 0;
 VAR_8->cl_dev.dma_buffer_offset = 0;
 FUNC_1(&VAR_8->cl_dev.wait_queue);

 return VAR_9;
}
