
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {scalar_t__ irq; int pci; int iores; int dsp_registers; int commpage_dma_buf; scalar_t__ comm_page; } ;


 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (scalar_t__,struct echoaudio*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct echoaudio*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct echoaudio *VAR_0)
{
 if (VAR_0->comm_page)
  FUNC_6(VAR_0);

 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, VAR_0);

 if (VAR_0->comm_page)
  FUNC_7(&VAR_0->commpage_dma_buf);

 FUNC_2(VAR_0->dsp_registers);
 FUNC_5(VAR_0->iores);
 FUNC_4(VAR_0->pci);


 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
 return 0;
}
