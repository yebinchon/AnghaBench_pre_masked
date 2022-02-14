
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {unsigned char xlx_selmic; TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct pcxhr_mgr*,int ,unsigned char) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct pcxhr_mgr *VAR_3, int VAR_4)
{
 unsigned char VAR_5;
 VAR_5 = (unsigned char) (VAR_4 << VAR_1);
 if (VAR_5 & (~VAR_0))
  return;

 VAR_3->xlx_selmic &= ~VAR_0;
 VAR_3->xlx_selmic |= VAR_5;

 FUNC_0(VAR_3, VAR_2, VAR_3->xlx_selmic);

 FUNC_1(&VAR_3->pci->dev, "hr222_micro_boost : set %x\n", VAR_5);
}
