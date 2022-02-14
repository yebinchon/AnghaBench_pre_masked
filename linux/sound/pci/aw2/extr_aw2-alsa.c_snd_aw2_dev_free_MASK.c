
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct aw2* device_data; } ;
struct aw2 {scalar_t__ irq; int pci; int iobase_virt; int saa7146; } ;


 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aw2*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_device *VAR_0)
{
 struct aw2 *VAR_1 = VAR_0->device_data;


 FUNC_5(&VAR_1->saa7146);


 if (VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, (void *)VAR_1);

 FUNC_1(VAR_1->iobase_virt);
 FUNC_4(VAR_1->pci);

 FUNC_3(VAR_1->pci);

 FUNC_2(VAR_1);

 return 0;
}
