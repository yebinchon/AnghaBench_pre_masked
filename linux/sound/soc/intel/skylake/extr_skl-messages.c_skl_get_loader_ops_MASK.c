
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dsp_loader_ops {int free_dma_buf; int alloc_dma_buf; } ;


 int FUNC_0 (struct skl_dsp_loader_ops*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct skl_dsp_loader_ops FUNC_1(void)
{
 struct skl_dsp_loader_ops VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(struct skl_dsp_loader_ops));

 VAR_2.alloc_dma_buf = VAR_0;
 VAR_2.free_dma_buf = VAR_1;

 return VAR_2;
}
