
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int reg_mutex; TYPE_2__* chip; int source_port; } ;
struct TYPE_4__ {int (* set_mirror_regs ) (struct ar8xxx_priv*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ar8xxx_priv*) ;
 struct ar8xxx_priv* FUNC_3 (struct switch_dev*) ;

int
FUNC_4(struct switch_dev *VAR_0,
     const struct switch_attr *VAR_1,
     struct switch_val *VAR_2)
{
 struct ar8xxx_priv *VAR_3 = FUNC_3(VAR_0);

 FUNC_0(&VAR_3->reg_mutex);
 VAR_3->source_port = VAR_2->value.i;
 VAR_3->chip->set_mirror_regs(VAR_3);
 FUNC_1(&VAR_3->reg_mutex);

 return 0;
}
