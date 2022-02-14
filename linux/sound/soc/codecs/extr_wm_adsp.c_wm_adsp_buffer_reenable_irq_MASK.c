
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_compr_buf {int irq_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wm_adsp_compr_buf*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct wm_adsp_compr_buf*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct wm_adsp_compr_buf *VAR_1)
{
 if (VAR_1->irq_count & 0x01)
  return 0;

 FUNC_1(VAR_1, "Enable IRQ(0x%x) for next fragment\n", VAR_1->irq_count);

 VAR_1->irq_count |= 0x01;

 return FUNC_2(VAR_1, FUNC_0(VAR_0),
        VAR_1->irq_count);
}
