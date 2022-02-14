
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int adv_instance_expire; scalar_t__ adv_instance_timeout; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hci_dev *VAR_0)
{
 if (VAR_0->adv_instance_timeout) {
  VAR_0->adv_instance_timeout = 0;
  FUNC_0(&VAR_0->adv_instance_expire);
 }
}
