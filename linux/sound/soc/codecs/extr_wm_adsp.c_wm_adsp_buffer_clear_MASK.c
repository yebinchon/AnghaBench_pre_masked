
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_compr_buf {int irq_count; int read_index; scalar_t__ avail; } ;



__attribute__((used)) static void FUNC_0(struct wm_adsp_compr_buf *VAR_0)
{
 VAR_0->irq_count = 0xFFFFFFFF;
 VAR_0->read_index = -1;
 VAR_0->avail = 0;
}
