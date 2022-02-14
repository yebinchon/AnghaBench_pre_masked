
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wpan_phy {int dummy; } ;
struct wpan_dev {void* max_be; void* min_be; } ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct wpan_phy *VAR_0,
    struct wpan_dev *VAR_1,
    u8 VAR_2, u8 VAR_3)
{
 FUNC_0();

 VAR_1->min_be = VAR_2;
 VAR_1->max_be = VAR_3;
 return 0;
}
