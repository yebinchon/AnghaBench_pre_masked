
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_rp_pair_device {TYPE_1__ addr; } ;
struct mgmt_pending_cmd {int index; int sk; struct hci_conn* user_data; } ;
struct hci_conn {int flags; int * disconn_cfm_cb; int * security_cfm_cb; int * connect_cfm_cb; int dst_type; int type; int dst; } ;
typedef int rp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,struct mgmt_rp_pair_device*,int) ;

__attribute__((used)) static int FUNC_6(struct mgmt_pending_cmd *VAR_2, u8 VAR_3)
{
 struct mgmt_rp_pair_device VAR_4;
 struct hci_conn *VAR_5 = VAR_2->user_data;
 int VAR_6;

 FUNC_0(&VAR_4.addr.bdaddr, &VAR_5->dst);
 VAR_4.addr.type = FUNC_4(VAR_5->type, VAR_5->dst_type);

 VAR_6 = FUNC_5(VAR_2->sk, VAR_2->index, VAR_1,
    VAR_3, &VAR_4, sizeof(VAR_4));


 VAR_5->connect_cfm_cb = ((void*)0);
 VAR_5->security_cfm_cb = ((void*)0);
 VAR_5->disconn_cfm_cb = ((void*)0);

 FUNC_2(VAR_5);




 FUNC_1(VAR_0, &VAR_5->flags);

 FUNC_3(VAR_5);

 return VAR_6;
}
