
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366_smi {int gpio_sda; int gpio_sck; int ext_mbus; int (* hw_reset ) (struct rtl8366_smi*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtl8366_smi*,int) ;

__attribute__((used)) static void FUNC_2(struct rtl8366_smi *VAR_0)
{
 if (VAR_0->hw_reset)
  VAR_0->hw_reset(VAR_0, 1);

 if (!VAR_0->ext_mbus) {
  FUNC_0(VAR_0->gpio_sck);
  FUNC_0(VAR_0->gpio_sda);
 }
}
