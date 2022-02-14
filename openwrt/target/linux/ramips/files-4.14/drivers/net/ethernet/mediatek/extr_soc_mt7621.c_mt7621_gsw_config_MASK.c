
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fe_priv {scalar_t__ mii_bus; int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct fe_priv *VAR_0)
{
 if (VAR_0->mii_bus && FUNC_0(VAR_0->mii_bus, 0x1f))
  FUNC_1(VAR_0->dev, ((void*)0), VAR_0->mii_bus, 1);

 return 0;
}
