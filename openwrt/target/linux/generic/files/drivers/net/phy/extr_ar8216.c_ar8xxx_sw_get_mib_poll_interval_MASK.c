
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int mib_poll_interval; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar8xxx_priv*) ;
 struct ar8xxx_priv* FUNC_1 (struct switch_dev*) ;

int
FUNC_2(struct switch_dev *VAR_1,
          const struct switch_attr *VAR_2,
          struct switch_val *VAR_3)
{
 struct ar8xxx_priv *VAR_4 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_4))
  return -VAR_0;
 VAR_3->value.i = VAR_4->mib_poll_interval;
 return 0;
}
