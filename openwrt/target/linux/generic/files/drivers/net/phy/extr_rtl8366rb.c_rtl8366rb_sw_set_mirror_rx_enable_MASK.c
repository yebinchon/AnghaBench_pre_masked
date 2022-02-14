
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtl8366_smi*,int ,scalar_t__,scalar_t__) ;
 struct rtl8366_smi* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_2,
        const struct switch_attr *VAR_3,
        struct switch_val *VAR_4)
{
 struct rtl8366_smi *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6;

 if (VAR_4->value.i)
  VAR_6 = VAR_1;
 else
  VAR_6 = 0;

 return FUNC_0(VAR_5, VAR_0, VAR_1, VAR_6);
}
