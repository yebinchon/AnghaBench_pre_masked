
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; scalar_t__ irq; int pci; scalar_t__ port; int iobase; int fw_uploaded; int firmware; int midi_tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (struct hdsp*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hdsp*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct hdsp *VAR_5)
{
 if (VAR_5->port) {

  FUNC_7(&VAR_5->midi_tasklet);
  VAR_5->control_register &= ~(VAR_3|VAR_0|VAR_1|VAR_2);
  FUNC_1 (VAR_5, VAR_4, VAR_5->control_register);
 }

 if (VAR_5->irq >= 0)
  FUNC_0(VAR_5->irq, (void *)VAR_5);

 FUNC_6(VAR_5);

 FUNC_5(VAR_5->firmware);
 FUNC_8(VAR_5->fw_uploaded);
 FUNC_2(VAR_5->iobase);

 if (VAR_5->port)
  FUNC_4(VAR_5->pci);

 FUNC_3(VAR_5->pci);
 return 0;
}
