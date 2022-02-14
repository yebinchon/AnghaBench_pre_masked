
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpan_phy {int dummy; } ;
struct wpan_dev {int csma_retries; } ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct wpan_phy *VAR_0,
     struct wpan_dev *VAR_1,
     u8 VAR_2)
{
 FUNC_0();

 VAR_1->csma_retries = VAR_2;
 return 0;
}
