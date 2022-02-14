
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_sys_data {int busnr; int resources; int io_offset; int mem_offset; } ;
struct TYPE_5__ {int start; } ;
struct TYPE_6__ {int start; } ;
struct oxnas_pcie {int cfgbase; TYPE_2__ cfg; TYPE_1__* pdev; TYPE_3__ busn; int io; int pre_mem; int non_mem; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct oxnas_pcie*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 struct oxnas_pcie* FUNC_5 (struct pci_sys_data*) ;

__attribute__((used)) static int FUNC_6(int VAR_1, struct pci_sys_data *VAR_2)
{
 struct oxnas_pcie *VAR_3 = FUNC_5(VAR_2);

 FUNC_3(&VAR_2->resources, &VAR_3->non_mem, VAR_2->mem_offset);
 FUNC_3(&VAR_2->resources, &VAR_3->pre_mem, VAR_2->mem_offset);
 FUNC_3(&VAR_2->resources, &VAR_3->io, VAR_2->io_offset);
 FUNC_2(&VAR_2->resources, &VAR_3->busn);
 if (VAR_2->busnr == 0) {
  VAR_2->busnr = VAR_3->busn.start;
 }

 VAR_3->cfgbase = FUNC_0(&VAR_3->pdev->dev, VAR_3->cfg.start,
         FUNC_4(&VAR_3->cfg));
 if (!VAR_3->cfgbase)
  return -VAR_0;

 FUNC_1(VAR_3);

 return 1;
}
