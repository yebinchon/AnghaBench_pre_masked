
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {scalar_t__ irq; } ;
struct snd_vx222 {int pci; scalar_t__* port; } ;


 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (struct vx_core*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct snd_vx222* FUNC_4 (struct vx_core*) ;

__attribute__((used)) static int FUNC_5(struct vx_core *VAR_0)
{
 struct snd_vx222 *VAR_1 = FUNC_4(VAR_0);

 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, (void*)VAR_0);
 if (VAR_1->port[0])
  FUNC_3(VAR_1->pci);
 FUNC_2(VAR_1->pci);
 FUNC_1(VAR_0);
 return 0;
}
