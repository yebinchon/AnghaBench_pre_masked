
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_cp_read_local_oob_ext_data {int dummy; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_request*,int ,int ,int *) ;
 int FUNC_2 (struct hci_request*,struct hci_dev*) ;
 int FUNC_3 (struct hci_request*,int ) ;
 struct mgmt_pending_cmd* FUNC_4 (struct sock*,int ,struct hci_dev*,struct mgmt_cp_read_local_oob_ext_data*,int) ;
 int FUNC_5 (struct mgmt_pending_cmd*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_5, struct sock *VAR_6,
      struct mgmt_cp_read_local_oob_ext_data *VAR_7)
{
 struct mgmt_pending_cmd *VAR_8;
 struct hci_request VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_6, VAR_3, VAR_5,
          VAR_7, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(&VAR_9, VAR_5);

 if (FUNC_0(VAR_5))
  FUNC_1(&VAR_9, VAR_2, 0, ((void*)0));
 else
  FUNC_1(&VAR_9, VAR_1, 0, ((void*)0));

 VAR_10 = FUNC_3(&VAR_9, VAR_4);
 if (VAR_10 < 0) {
  FUNC_5(VAR_8);
  return VAR_10;
 }

 return 0;
}
