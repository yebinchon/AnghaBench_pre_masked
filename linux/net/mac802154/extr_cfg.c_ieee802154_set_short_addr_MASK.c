
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int dummy; } ;
struct wpan_dev {int short_addr; } ;
typedef int __le16 ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct wpan_phy *VAR_0, struct wpan_dev *VAR_1,
     __le16 VAR_2)
{
 FUNC_0();

 VAR_1->short_addr = VAR_2;
 return 0;
}
