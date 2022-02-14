
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* cl_copy_to_dmabuf ) (struct sst_dsp*,void const*,int ,int) ;int (* cl_stop_dma ) (struct sst_dsp*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct sst_dsp {TYPE_2__ cl_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sst_dsp*,int ,int ,int ,int ,char*) ;
 int FUNC_1 (struct sst_dsp*,void const*,int ,int) ;
 int FUNC_2 (struct sst_dsp*) ;

__attribute__((used)) static int FUNC_3(struct sst_dsp *VAR_4,
  const void *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = VAR_4->cl_dev.ops.cl_copy_to_dmabuf(VAR_4, VAR_5, VAR_6,
        1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4,
   VAR_0,
   VAR_3,
   VAR_2,
   VAR_1,
   "Firmware boot");

 VAR_4->cl_dev.ops.cl_stop_dma(VAR_4);

 return VAR_7;
}
