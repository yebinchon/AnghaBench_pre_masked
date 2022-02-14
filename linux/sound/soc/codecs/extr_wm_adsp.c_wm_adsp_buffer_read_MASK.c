
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wm_adsp_compr_buf {scalar_t__ host_buf_ptr; int host_buf_mem_type; int dsp; } ;


 int FUNC_0 (int ,int ,scalar_t__,int *) ;

__attribute__((used)) static inline int FUNC_1(struct wm_adsp_compr_buf *VAR_0,
          unsigned int VAR_1, u32 *VAR_2)
{
 return FUNC_0(VAR_0->dsp, VAR_0->host_buf_mem_type,
          VAR_0->host_buf_ptr + VAR_1, VAR_2);
}
