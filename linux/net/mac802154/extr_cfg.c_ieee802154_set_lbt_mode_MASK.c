
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int dummy; } ;
struct wpan_dev {int lbt; } ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct wpan_phy *VAR_0, struct wpan_dev *VAR_1,
   bool VAR_2)
{
 FUNC_0();

 VAR_1->lbt = VAR_2;
 return 0;
}
