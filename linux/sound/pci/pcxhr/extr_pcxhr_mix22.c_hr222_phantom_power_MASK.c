
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {TYPE_1__* pci; int xlx_selmic; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct pcxhr_mgr*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(struct pcxhr_mgr *VAR_2, int VAR_3)
{
 if (VAR_3)
  VAR_2->xlx_selmic |= VAR_0;
 else
  VAR_2->xlx_selmic &= ~VAR_0;

 FUNC_0(VAR_2, VAR_1, VAR_2->xlx_selmic);

 FUNC_1(&VAR_2->pci->dev, "hr222_phantom_power : set %d\n", VAR_3);
}
