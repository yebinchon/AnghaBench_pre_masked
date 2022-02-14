
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {int dummy; } ;
struct amp_mgr {TYPE_2__* l2cap_conn; } ;
struct a2mp_physlink_rsp {int status; int remote_id; int local_id; } ;
struct a2mp_physlink_req {int remote_id; int local_id; } ;
struct a2mp_cmd {int ident; int len; } ;
typedef int rsp ;
struct TYPE_4__ {TYPE_1__* hcon; } ;
struct TYPE_3__ {int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct amp_mgr*,int ,int ,int,struct a2mp_physlink_rsp*) ;
 int FUNC_2 (struct hci_dev*,char*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *) ;
 struct hci_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct amp_mgr *VAR_6, struct sk_buff *VAR_7,
     struct a2mp_cmd *VAR_8)
{
 struct a2mp_physlink_req *VAR_9 = (void *) VAR_7->data;
 struct a2mp_physlink_rsp VAR_10;
 struct hci_dev *VAR_11;
 struct hci_conn *VAR_12;

 if (FUNC_6(VAR_8->len) < sizeof(*VAR_9))
  return -VAR_5;

 FUNC_0("local_id %d remote_id %d", VAR_9->local_id, VAR_9->remote_id);

 VAR_10.local_id = VAR_9->remote_id;
 VAR_10.remote_id = VAR_9->local_id;
 VAR_10.status = VAR_3;

 VAR_11 = FUNC_4(VAR_9->remote_id);
 if (!VAR_11) {
  VAR_10.status = VAR_1;
  goto send_rsp;
 }

 VAR_12 = FUNC_3(VAR_11, VAR_4,
           &VAR_6->l2cap_conn->hcon->dst);
 if (!VAR_12) {
  FUNC_2(VAR_11, "no phys link exist");
  VAR_10.status = VAR_2;
  goto clean;
 }



clean:
 FUNC_5(VAR_11);

send_rsp:
 FUNC_1(VAR_6, VAR_0, VAR_8->ident, sizeof(VAR_10), &VAR_10);

 FUNC_7(VAR_7, sizeof(*VAR_9));
 return 0;
}
