
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clock_offset; int pscan_mode; int pscan_rep_mode; int bdaddr; } ;
struct inquiry_entry {TYPE_1__ data; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_remote_name_req {int clock_offset; int pscan_mode; int pscan_rep_mode; int bdaddr; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hci_dev*,int ,int,struct hci_cp_remote_name_req*) ;
 int FUNC_2 (struct hci_cp_remote_name_req*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_1,
       struct inquiry_entry *VAR_2)
{
 struct hci_cp_remote_name_req VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 FUNC_0(&VAR_3.bdaddr, &VAR_2->data.bdaddr);
 VAR_3.pscan_rep_mode = VAR_2->data.pscan_rep_mode;
 VAR_3.pscan_mode = VAR_2->data.pscan_mode;
 VAR_3.clock_offset = VAR_2->data.clock_offset;

 return FUNC_1(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
