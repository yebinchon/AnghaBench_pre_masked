
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_port_link {int dummy; } ;
struct switch_dev {int dummy; } ;
struct ar8xxx_priv {int dummy; } ;


 int FUNC_0 (struct ar8xxx_priv*,int,struct switch_port_link*) ;
 struct ar8xxx_priv* FUNC_1 (struct switch_dev*) ;

int
FUNC_2(struct switch_dev *VAR_0, int VAR_1,
   struct switch_port_link *VAR_2)
{
 struct ar8xxx_priv *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_1, VAR_2);
 return 0;
}
