
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 struct mii_bus* FUNC_2 (struct device*) ;

__attribute__((used)) static struct mii_bus *FUNC_3(struct device *VAR_0)
{
 struct device *VAR_1;

 VAR_1 = FUNC_0(VAR_0, "mdio_bus");
 if (VAR_1 != ((void*)0)) {
  struct mii_bus *VAR_2;

  VAR_2 = FUNC_2(VAR_1);
  FUNC_1(VAR_1);

  return VAR_2;
 }

 return ((void*)0);
}
