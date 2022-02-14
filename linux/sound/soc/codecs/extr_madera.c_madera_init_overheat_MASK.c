
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_priv {struct madera* madera; } ;
struct madera {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct madera*,int ,char*,int ,struct madera*) ;
 int VAR_2 ;

int FUNC_2(struct madera_priv *VAR_3)
{
 struct madera *VAR_4 = VAR_3->madera;
 struct device *VAR_5 = VAR_4->dev;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1,
     "Thermal warning", VAR_2,
     VAR_4);
 if (VAR_6)
  FUNC_0(VAR_5, "Failed to get thermal warning IRQ: %d\n", VAR_6);

 VAR_6 = FUNC_1(VAR_4, VAR_0,
     "Thermal shutdown", VAR_2,
     VAR_4);
 if (VAR_6)
  FUNC_0(VAR_5, "Failed to get thermal shutdown IRQ: %d\n", VAR_6);

 return 0;
}
