
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
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int*) ;
 struct rtl8366_smi* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_2,
     const struct switch_attr *VAR_3,
     struct switch_val *VAR_4)
{
 struct rtl8366_smi *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6;

 FUNC_0(VAR_5, VAR_0, &VAR_6);

 VAR_4->value.i = ((VAR_6 & (VAR_1)) >> 4);

 return 0;
}
