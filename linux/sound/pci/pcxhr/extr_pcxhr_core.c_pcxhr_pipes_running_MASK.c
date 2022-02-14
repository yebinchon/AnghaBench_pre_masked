
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct pcxhr_mgr*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static inline int FUNC_2(struct pcxhr_mgr *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_0);





 VAR_2 &= 0xffffff;
 FUNC_1(&VAR_1->pci->dev, "CMD_PIPE_STATE MBOX2=0x%06x\n", VAR_2);
 return VAR_2;
}
