
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ area; } ;
struct intel8x0m {scalar_t__ irq; unsigned int bdbars_count; int pci; scalar_t__ bmaddr; scalar_t__ addr; TYPE_2__ bdbars; TYPE_1__* ichd; } ;
struct TYPE_3__ {scalar_t__ reg_offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct intel8x0m*) ;
 int FUNC_1 (struct intel8x0m*,scalar_t__,int) ;
 int FUNC_2 (struct intel8x0m*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct intel8x0m *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->irq < 0)
  goto __hw_end;

 for (VAR_3 = 0; VAR_3 < VAR_2->bdbars_count; VAR_3++)
  FUNC_1(VAR_2, VAR_0 + VAR_2->ichd[VAR_3].reg_offset, 0x00);

 for (VAR_3 = 0; VAR_3 < VAR_2->bdbars_count; VAR_3++)
  FUNC_1(VAR_2, VAR_0 + VAR_2->ichd[VAR_3].reg_offset, VAR_1);
 __hw_end:
 if (VAR_2->irq >= 0)
  FUNC_0(VAR_2->irq, VAR_2);
 if (VAR_2->bdbars.area)
  FUNC_6(&VAR_2->bdbars);
 if (VAR_2->addr)
  FUNC_4(VAR_2->pci, VAR_2->addr);
 if (VAR_2->bmaddr)
  FUNC_4(VAR_2->pci, VAR_2->bmaddr);
 FUNC_5(VAR_2->pci);
 FUNC_3(VAR_2->pci);
 FUNC_2(VAR_2);
 return 0;
}
