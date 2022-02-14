
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int arl_age_time; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ar8xxx_priv* FUNC_1 (struct switch_dev*) ;

int
FUNC_2(struct switch_dev *VAR_1, const struct switch_attr *VAR_2,
      struct switch_val *VAR_3)
{
 struct ar8xxx_priv *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = VAR_3->value.i;
 u32 VAR_6;

 if (VAR_5 < 0)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == 0 || VAR_6 > 0xffff)
  return -VAR_0;

 VAR_4->arl_age_time = VAR_5;
 return 0;
}
