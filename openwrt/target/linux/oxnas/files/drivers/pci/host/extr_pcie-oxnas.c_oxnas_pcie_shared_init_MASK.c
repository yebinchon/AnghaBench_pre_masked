
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct oxnas_pcie {int phy; } ;
struct TYPE_2__ {int refcount; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1, struct oxnas_pcie *VAR_2)
{
 if (++VAR_0.refcount == 1) {
  FUNC_0(VAR_2->phy);
  FUNC_1(VAR_2->phy);
  return 0;
 } else {
  return 0;
 }
}
