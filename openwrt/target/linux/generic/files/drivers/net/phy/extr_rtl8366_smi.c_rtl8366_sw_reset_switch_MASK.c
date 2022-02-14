
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int dummy; } ;
struct rtl8366_smi {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* setup ) (struct rtl8366_smi*) ;} ;


 int FUNC_0 (struct rtl8366_smi*,int) ;
 int FUNC_1 (struct rtl8366_smi*,int) ;
 int FUNC_2 (struct rtl8366_smi*) ;
 int FUNC_3 (struct rtl8366_smi*) ;
 int FUNC_4 (struct rtl8366_smi*) ;
 struct rtl8366_smi* FUNC_5 (struct switch_dev*) ;

int FUNC_6(struct switch_dev *VAR_0)
{
 struct rtl8366_smi *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = VAR_1->ops->setup(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_1, 1);
}
