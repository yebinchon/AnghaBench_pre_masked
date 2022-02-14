
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* phydev; } ;
struct TYPE_3__ {scalar_t__ drv; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static unsigned int FUNC_2(const struct sk_buff *VAR_1)
{
 if (FUNC_0(VAR_1->dev && VAR_1->dev->phydev &&
     VAR_1->dev->phydev->drv))
  return FUNC_1(VAR_1);
 else
  return VAR_0;
}
