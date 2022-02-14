
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct nci_dev {TYPE_3__* hci_dev; TYPE_1__* ops; } ;
struct nci_conn_info {struct nci_dev* data_exchange_cb_context; int data_exchange_cb; } ;
struct TYPE_8__ {scalar_t__ gate; int pipe; int dest_host; } ;
struct TYPE_6__ {int session_id; TYPE_4__* gates; int gate_count; } ;
struct TYPE_7__ {TYPE_2__ init_data; struct nci_conn_info* conn_info; scalar_t__ expected_pipes; scalar_t__ count_pipes; } ;
struct TYPE_5__ {int (* hci_load_session ) (struct nci_dev*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (struct nci_dev*,int ,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct nci_dev*,int ,TYPE_4__*) ;
 int FUNC_5 (struct nci_dev*,scalar_t__,int ,struct sk_buff**) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct nci_dev*,scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct nci_dev*) ;

int FUNC_10(struct nci_dev *VAR_4)
{
 struct nci_conn_info *VAR_5;
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_4->hci_dev->count_pipes = 0;
 VAR_4->hci_dev->expected_pipes = 0;

 VAR_5 = VAR_4->hci_dev->conn_info;
 if (!VAR_5)
  return -VAR_0;

 VAR_5->data_exchange_cb = VAR_3;
 VAR_5->data_exchange_cb_context = VAR_4;

 FUNC_6(VAR_4->hci_dev);

 if (VAR_4->hci_dev->init_data.gates[0].gate != VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4,
     VAR_4->hci_dev->init_data.gates[0].dest_host,
     VAR_4->hci_dev->init_data.gates[0].gate,
     VAR_4->hci_dev->init_data.gates[0].pipe);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_4, VAR_1,
         VAR_2, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6->len &&
     VAR_6->len == FUNC_8(VAR_4->hci_dev->init_data.session_id) &&
     !FUNC_1(VAR_4->hci_dev->init_data.session_id, VAR_6->data, VAR_6->len) &&
     VAR_4->ops->hci_load_session) {

  VAR_7 = VAR_4->ops->hci_load_session(VAR_4);
 } else {
  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 < 0)
   goto exit;

  VAR_7 = FUNC_4(VAR_4,
           VAR_4->hci_dev->init_data.gate_count,
           VAR_4->hci_dev->init_data.gates);
  if (VAR_7 < 0)
   goto exit;

  VAR_7 = FUNC_7(VAR_4, VAR_1,
          VAR_2,
          VAR_4->hci_dev->init_data.session_id,
          FUNC_8(VAR_4->hci_dev->init_data.session_id));
 }

exit:
 FUNC_0(VAR_6);

 return VAR_7;
}
