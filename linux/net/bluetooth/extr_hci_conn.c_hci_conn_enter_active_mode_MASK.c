
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ idle_timeout; int workqueue; } ;
struct hci_cp_exit_sniff_mode {int handle; } ;
struct hci_conn {scalar_t__ mode; int idle_work; int handle; int flags; struct hci_dev* hdev; } ;
typedef int cp ;
typedef int __u8 ;


 int FUNC_0 (char*,struct hci_conn*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,int ,int,struct hci_cp_exit_sniff_mode*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct hci_conn *VAR_4, __u8 VAR_5)
{
 struct hci_dev *VAR_6 = VAR_4->hdev;

 FUNC_0("hcon %p mode %d", VAR_4, VAR_4->mode);

 if (VAR_4->mode != VAR_0)
  goto timer;

 if (!FUNC_6(VAR_2, &VAR_4->flags) && !VAR_5)
  goto timer;

 if (!FUNC_5(VAR_1, &VAR_4->flags)) {
  struct hci_cp_exit_sniff_mode VAR_7;
  VAR_7.handle = FUNC_1(VAR_4->handle);
  FUNC_2(VAR_6, VAR_3, sizeof(VAR_7), &VAR_7);
 }

timer:
 if (VAR_6->idle_timeout > 0)
  FUNC_4(VAR_6->workqueue, &VAR_4->idle_work,
       FUNC_3(VAR_6->idle_timeout));
}
