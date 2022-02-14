
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hci_dev {int dummy; } ;
struct hci_cp_le_conn_param_req_neg_reply {int reason; int handle; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hci_dev*,int ,int,struct hci_cp_le_conn_param_req_neg_reply*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_1, u16 VAR_2,
          u8 VAR_3)
{
 struct hci_cp_le_conn_param_req_neg_reply VAR_4;

 VAR_4.handle = FUNC_0(VAR_2);
 VAR_4.reason = VAR_3;

 FUNC_1(VAR_1, VAR_0, sizeof(VAR_4),
       &VAR_4);
}
