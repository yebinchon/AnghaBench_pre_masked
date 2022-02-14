
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; scalar_t__ val; } ;
struct property {TYPE_1__ val; } ;
struct node {int basenamelen; int name; int * bus; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;
typedef int cell_t ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*) ;
 int FUNC_1 (struct check*,struct dt_info*,struct node*,struct property*,char*) ;
 int FUNC_2 (int ) ;
 struct property* FUNC_3 (struct node*,char*) ;
 int FUNC_4 (struct node*) ;
 int FUNC_5 (struct node*) ;
 int VAR_0 ;
 int FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_8(struct check *VAR_1, struct dt_info *VAR_2, struct node *VAR_3)
{
 struct property *VAR_4;
 cell_t *VAR_5;

 VAR_4 = FUNC_3(VAR_3, "device_type");
 if (!VAR_4 || !FUNC_6(VAR_4->val.val, "pci"))
  return;

 VAR_3->bus = &VAR_0;

 if (!FUNC_7(VAR_3->name, VAR_3->basenamelen, "pci") &&
     !FUNC_7(VAR_3->name, VAR_3->basenamelen, "pcie"))
  FUNC_0(VAR_1, VAR_2, VAR_3, "node name is not \"pci\" or \"pcie\"");

 VAR_4 = FUNC_3(VAR_3, "ranges");
 if (!VAR_4)
  FUNC_0(VAR_1, VAR_2, VAR_3, "missing ranges for PCI bridge (or not a bridge)");

 if (FUNC_4(VAR_3) != 3)
  FUNC_0(VAR_1, VAR_2, VAR_3, "incorrect #address-cells for PCI bridge");
 if (FUNC_5(VAR_3) != 2)
  FUNC_0(VAR_1, VAR_2, VAR_3, "incorrect #size-cells for PCI bridge");

 VAR_4 = FUNC_3(VAR_3, "bus-range");
 if (!VAR_4)
  return;

 if (VAR_4->val.len != (sizeof(cell_t) * 2)) {
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, "value must be 2 cells");
  return;
 }
 VAR_5 = (cell_t *)VAR_4->val.val;
 if (FUNC_2(VAR_5[0]) > FUNC_2(VAR_5[1]))
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, "1st cell must be less than or equal to 2nd cell");
 if (FUNC_2(VAR_5[1]) > 0xff)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, "maximum bus number must be less than 256");
}
