
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int ops; int ports; int vlans; int name; int cpu_port; } ;
struct ar8xxx_priv {struct switch_dev dev; struct ar8xxx_chip* chip; } ;
struct ar8xxx_chip {int swops; int ports; int vlans; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar8xxx_priv*) ;

__attribute__((used)) static int
FUNC_1(struct ar8xxx_priv *VAR_1)
{
 const struct ar8xxx_chip *VAR_2;
 struct switch_dev *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->chip;

 VAR_3 = &VAR_1->dev;
 VAR_3->cpu_port = VAR_0;
 VAR_3->name = VAR_2->name;
 VAR_3->vlans = VAR_2->vlans;
 VAR_3->ports = VAR_2->ports;
 VAR_3->ops = VAR_2->swops;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  return VAR_4;

 return 0;
}
