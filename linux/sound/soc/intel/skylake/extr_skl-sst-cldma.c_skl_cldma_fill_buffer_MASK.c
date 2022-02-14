
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* cl_trigger ) (struct sst_dsp*,int) ;int (* cl_setup_spb ) (struct sst_dsp*,unsigned int,int) ;} ;
struct TYPE_4__ {scalar_t__ area; } ;
struct TYPE_6__ {unsigned int dma_buffer_offset; unsigned int curr_spib_pos; unsigned int bufsize; int wait_condition; TYPE_2__ ops; TYPE_1__ dmab_data; } ;
struct sst_dsp {TYPE_3__ cl_dev; int dev; } ;


 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (scalar_t__,void const*,unsigned int) ;
 int FUNC_2 (struct sst_dsp*) ;
 int FUNC_3 (struct sst_dsp*,unsigned int,int) ;
 int FUNC_4 (struct sst_dsp*,int) ;

__attribute__((used)) static void FUNC_5(struct sst_dsp *VAR_0, unsigned int VAR_1,
  const void *VAR_2, bool VAR_3, bool VAR_4)
{
 FUNC_0(VAR_0->dev, "Size: %x, intr_enable: %d\n", VAR_1, VAR_3);
 FUNC_0(VAR_0->dev, "buf_pos_index:%d, trigger:%d\n",
   VAR_0->cl_dev.dma_buffer_offset, VAR_4);
 FUNC_0(VAR_0->dev, "spib position: %d\n", VAR_0->cl_dev.curr_spib_pos);






 if (VAR_0->cl_dev.dma_buffer_offset + VAR_1 > VAR_0->cl_dev.bufsize) {
  unsigned int VAR_5 = VAR_0->cl_dev.bufsize -
     VAR_0->cl_dev.dma_buffer_offset;
  FUNC_1(VAR_0->cl_dev.dmab_data.area + VAR_0->cl_dev.dma_buffer_offset,
   VAR_2, VAR_5);
  VAR_1 -= VAR_5;
  VAR_2 += VAR_5;
  VAR_0->cl_dev.dma_buffer_offset = 0;
 }

 FUNC_1(VAR_0->cl_dev.dmab_data.area + VAR_0->cl_dev.dma_buffer_offset,
   VAR_2, VAR_1);

 if (VAR_0->cl_dev.curr_spib_pos == VAR_0->cl_dev.bufsize)
  VAR_0->cl_dev.dma_buffer_offset = 0;
 else
  VAR_0->cl_dev.dma_buffer_offset = VAR_0->cl_dev.curr_spib_pos;

 VAR_0->cl_dev.wait_condition = 0;

 if (VAR_3)
  FUNC_2(VAR_0);

 VAR_0->cl_dev.ops.cl_setup_spb(VAR_0, VAR_0->cl_dev.curr_spib_pos, VAR_4);
 if (VAR_4)
  VAR_0->cl_dev.ops.cl_trigger(VAR_0, 1);
}
