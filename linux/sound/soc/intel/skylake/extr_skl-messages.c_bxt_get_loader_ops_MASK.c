
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dsp_loader_ops {int cleanup; int trigger; int prepare; int free_dma_buf; int alloc_dma_buf; } ;
typedef int loader_ops ;


 int FUNC_0 (struct skl_dsp_loader_ops*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct skl_dsp_loader_ops FUNC_1(void)
{
 struct skl_dsp_loader_ops VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.alloc_dma_buf = VAR_0;
 VAR_5.free_dma_buf = VAR_4;
 VAR_5.prepare = VAR_2;
 VAR_5.trigger = VAR_3;
 VAR_5.cleanup = VAR_1;

 return VAR_5;
}
