
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_val {int dummy; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int reg_mutex; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* atu_flush ) (struct ar8xxx_priv*) ;} ;


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
 int VAR_4;

 FUNC_0(&VAR_3->reg_mutex);
 VAR_4 = VAR_3->chip->atu_flush(VAR_3);
 FUNC_1(&VAR_3->reg_mutex);

 return VAR_4;
}
