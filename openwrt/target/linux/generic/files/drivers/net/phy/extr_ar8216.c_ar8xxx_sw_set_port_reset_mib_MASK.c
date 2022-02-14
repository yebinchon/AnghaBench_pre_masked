
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {int port_vlan; } ;
struct switch_dev {int ports; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int mib_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar8xxx_priv*) ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int FUNC_2 (struct ar8xxx_priv*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ar8xxx_priv* FUNC_5 (struct switch_dev*) ;

int
FUNC_6(struct switch_dev *VAR_2,
        const struct switch_attr *VAR_3,
        struct switch_val *VAR_4)
{
 struct ar8xxx_priv *VAR_5 = FUNC_5(VAR_2);
 int VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_5))
  return -VAR_1;

 VAR_6 = VAR_4->port_vlan;
 if (VAR_6 >= VAR_2->ports)
  return -VAR_0;

 FUNC_3(&VAR_5->mib_lock);
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  goto unlock;

 FUNC_2(VAR_5, VAR_6, 1);

 VAR_7 = 0;

unlock:
 FUNC_4(&VAR_5->mib_lock);
 return VAR_7;
}
