
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ area; } ;
struct lola {scalar_t__ irq; int pci; TYPE_2__ rb; TYPE_1__* bar; scalar_t__ initialized; } ;
struct TYPE_3__ {int remap_addr; } ;


 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lola*) ;
 int FUNC_3 (struct lola*) ;
 int FUNC_4 (struct lola*) ;
 int FUNC_5 (struct lola*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(struct lola *VAR_0)
{
 if (VAR_0->initialized)
  FUNC_5(VAR_0);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, (void *)VAR_0);
 FUNC_1(VAR_0->bar[0].remap_addr);
 FUNC_1(VAR_0->bar[1].remap_addr);
 if (VAR_0->rb.area)
  FUNC_8(&VAR_0->rb);
 FUNC_7(VAR_0->pci);
 FUNC_6(VAR_0->pci);
 FUNC_2(VAR_0);
}
