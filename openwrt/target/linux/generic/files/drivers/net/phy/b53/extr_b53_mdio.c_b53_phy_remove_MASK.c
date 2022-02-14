
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct b53_device* priv; } ;
struct b53_device {int dummy; } ;


 int FUNC_0 (struct b53_device*) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_0)
{
 struct b53_device *VAR_1 = VAR_0->priv;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1);

 VAR_0->priv = ((void*)0);
}
