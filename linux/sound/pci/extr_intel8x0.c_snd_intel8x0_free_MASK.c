
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ area; } ;
struct intel8x0 {scalar_t__ irq; unsigned int bdbars_count; scalar_t__ device_type; int pci; scalar_t__ bmaddr; scalar_t__ addr; TYPE_2__ bdbars; TYPE_1__* ichd; } ;
struct TYPE_3__ {scalar_t__ reg_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,struct intel8x0*) ;
 int FUNC_1 (struct intel8x0*,scalar_t__,int) ;
 int FUNC_2 (struct intel8x0*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int,unsigned int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,unsigned int) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct intel8x0 *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4->irq < 0)
  goto __hw_end;

 for (VAR_5 = 0; VAR_5 < VAR_4->bdbars_count; VAR_5++)
  FUNC_1(VAR_4, VAR_1 + VAR_4->ichd[VAR_5].reg_offset, 0x00);

 for (VAR_5 = 0; VAR_5 < VAR_4->bdbars_count; VAR_5++)
  FUNC_1(VAR_4, VAR_1 + VAR_4->ichd[VAR_5].reg_offset, VAR_2);
 if (VAR_4->device_type == VAR_0 && !VAR_3) {

  unsigned int VAR_6;
  FUNC_5(VAR_4->pci, 0x4c, &VAR_6);
  VAR_6 &= ~0x1000000;
  FUNC_7(VAR_4->pci, 0x4c, VAR_6);
 }


      __hw_end:
 if (VAR_4->irq >= 0)
  FUNC_0(VAR_4->irq, VAR_4);
 if (VAR_4->bdbars.area)
  FUNC_8(&VAR_4->bdbars);
 if (VAR_4->addr)
  FUNC_4(VAR_4->pci, VAR_4->addr);
 if (VAR_4->bmaddr)
  FUNC_4(VAR_4->pci, VAR_4->bmaddr);
 FUNC_6(VAR_4->pci);
 FUNC_3(VAR_4->pci);
 FUNC_2(VAR_4);
 return 0;
}
