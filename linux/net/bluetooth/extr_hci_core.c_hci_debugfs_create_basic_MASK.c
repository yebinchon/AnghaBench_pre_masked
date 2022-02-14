
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int debugfs; scalar_t__ set_diag; } ;


 int FUNC_0 (char*,int,int ,struct hci_dev*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct hci_dev *VAR_2)
{
 FUNC_0("dut_mode", 0644, VAR_2->debugfs, VAR_2,
       &VAR_0);

 if (VAR_2->set_diag)
  FUNC_0("vendor_diag", 0644, VAR_2->debugfs, VAR_2,
        &VAR_1);
}
