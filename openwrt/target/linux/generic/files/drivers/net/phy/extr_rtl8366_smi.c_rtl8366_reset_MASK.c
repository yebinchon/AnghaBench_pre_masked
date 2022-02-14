
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_smi {TYPE_1__* ops; int (* hw_reset ) (struct rtl8366_smi*,int) ;} ;
struct TYPE_2__ {int (* reset_chip ) (struct rtl8366_smi*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtl8366_smi*,int) ;
 int FUNC_2 (struct rtl8366_smi*,int) ;
 int FUNC_3 (struct rtl8366_smi*) ;

__attribute__((used)) static int FUNC_4(struct rtl8366_smi *VAR_2)
{
 if (VAR_2->hw_reset) {
  VAR_2->hw_reset(VAR_2, 1);
  FUNC_0(VAR_1);
  VAR_2->hw_reset(VAR_2, 0);
  FUNC_0(VAR_0);
  return 0;
 }

 return VAR_2->ops->reset_chip(VAR_2);
}
