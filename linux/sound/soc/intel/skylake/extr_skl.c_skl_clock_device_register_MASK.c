
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_dev {int clk_dev; TYPE_1__* pci; } ;
struct skl_clk_pdata {struct skl_dev* pvt_data; int ssp_clks; int num_clks; int parent_clks; } ;
struct platform_device_info {int id; char* name; int size_data; struct skl_clk_pdata* data; int * parent; int * member_0; } ;
struct TYPE_2__ {int dev; int device; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct skl_clk_pdata* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct platform_device_info*) ;
 int VAR_2 ;
 int FUNC_5 (struct skl_dev*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct skl_dev *VAR_4)
{
 struct platform_device_info VAR_5 = {((void*)0)};
 struct skl_clk_pdata *VAR_6;

 VAR_6 = FUNC_2(&VAR_4->pci->dev, sizeof(*VAR_6),
       VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_4->pci->device);

 VAR_6->parent_clks = VAR_2;
 VAR_6->ssp_clks = VAR_3;
 VAR_6->num_clks = FUNC_0(VAR_3);


 FUNC_5(VAR_4, VAR_6->ssp_clks);
 VAR_6->pvt_data = VAR_4;


 VAR_5.parent = &VAR_4->pci->dev;
 VAR_5.id = -1;
 VAR_5.name = "skl-ssp-clk";
 VAR_5.data = VAR_6;
 VAR_5.size_data = sizeof(*VAR_6);
 VAR_4->clk_dev = FUNC_4(&VAR_5);
 return FUNC_1(VAR_4->clk_dev);
}
