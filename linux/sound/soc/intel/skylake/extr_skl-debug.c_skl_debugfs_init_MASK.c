
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skl_dev {TYPE_2__* pci; TYPE_1__* component; } ;
struct skl_debug {void* fs; void* modules; int * dev; struct skl_dev* skl; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {void* debugfs_root; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,void*) ;
 int FUNC_1 (char*,int,void*,struct skl_debug*,int *) ;
 struct skl_debug* FUNC_2 (int *,int,int ) ;
 int VAR_1 ;

struct skl_debug *FUNC_3(struct skl_dev *VAR_2)
{
 struct skl_debug *VAR_3;

 VAR_3 = FUNC_2(&VAR_2->pci->dev, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);


 VAR_3->fs = FUNC_0("dsp", VAR_2->component->debugfs_root);

 VAR_3->skl = VAR_2;
 VAR_3->dev = &VAR_2->pci->dev;


 VAR_3->modules = FUNC_0("modules", VAR_3->fs);

 FUNC_1("fw_soft_regs_rd", 0444, VAR_3->fs, VAR_3,
       &VAR_1);

 return VAR_3;
}
