
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_cp_read_clock_offset {int handle; } ;
struct hci_conn {scalar_t__ type; scalar_t__ role; scalar_t__ state; int handle; struct hci_dev* hdev; } ;
typedef int clkoff_cp ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*,int ) ;
 int FUNC_3 (struct hci_dev*,int ,int,struct hci_cp_read_clock_offset*) ;

int FUNC_4(struct hci_conn *VAR_5, __u8 VAR_6)
{
 FUNC_0("hcon %p", VAR_5);






 if (VAR_5->type == VAR_0 && VAR_5->role == VAR_4 &&
     (VAR_5->state == VAR_2 || VAR_5->state == VAR_1)) {
  struct hci_dev *VAR_7 = VAR_5->hdev;
  struct hci_cp_read_clock_offset VAR_8;

  VAR_8.handle = FUNC_1(VAR_5->handle);
  FUNC_3(VAR_7, VAR_3, sizeof(VAR_8),
        &VAR_8);
 }

 return FUNC_2(VAR_5, VAR_6);
}
