
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_device {int dev; } ;
struct ar8xxx_priv {scalar_t__ use_count; scalar_t__ sw_mii_bus; int dev; int list; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int FUNC_2 (struct ar8xxx_priv*) ;
 struct ar8xxx_priv* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct mdio_device *VAR_1)
{
 struct ar8xxx_priv *VAR_2 = FUNC_3(&VAR_1->dev);

 if (FUNC_0(!VAR_2))
  return;

 FUNC_6(&VAR_0);

 if (--VAR_2->use_count > 0) {
  FUNC_7(&VAR_0);
  return;
 }

 FUNC_4(&VAR_2->list);
 FUNC_7(&VAR_0);

 FUNC_8(&VAR_2->dev);
 FUNC_2(VAR_2);
 if(VAR_2->sw_mii_bus)
  FUNC_5(VAR_2->sw_mii_bus);
 FUNC_1(VAR_2);
}
