
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__* data; } ;
struct TYPE_6__ {scalar_t__ id; int protocol; } ;
struct nci_dev {TYPE_4__* nfc_dev; TYPE_3__* hci_dev; TYPE_2__ cur_params; int conn_info_list; int cur_dest_type; } ;
struct nci_core_conn_create_rsp {int credits_cnt; int max_ctrl_pkt_payload_len; int conn_id; } ;
struct nci_conn_info {int credits_cnt; int max_pkt_payload_len; int conn_id; int list; TYPE_1__* dest_params; int dest_type; } ;
struct dest_spec_params {int dummy; } ;
typedef scalar_t__ __u8 ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {scalar_t__ nfcee_id; struct nci_conn_info* conn_info; } ;
struct TYPE_5__ {scalar_t__ id; int protocol; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct nci_conn_info*) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct nci_dev*,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct nci_dev *VAR_3,
         struct sk_buff *VAR_4)
{
 __u8 VAR_5 = VAR_4->data[0];
 struct nci_conn_info *VAR_6 = ((void*)0);
 struct nci_core_conn_create_rsp *VAR_7;

 FUNC_6("status 0x%x\n", VAR_5);

 if (VAR_5 == VAR_1) {
  VAR_7 = (struct nci_core_conn_create_rsp *)VAR_4->data;

  VAR_6 = FUNC_3(&VAR_3->nfc_dev->dev,
      sizeof(*VAR_6), VAR_0);
  if (!VAR_6) {
   VAR_5 = VAR_2;
   goto exit;
  }

  VAR_6->dest_params = FUNC_3(&VAR_3->nfc_dev->dev,
      sizeof(struct dest_spec_params),
      VAR_0);
  if (!VAR_6->dest_params) {
   VAR_5 = VAR_2;
   goto free_conn_info;
  }

  VAR_6->dest_type = VAR_3->cur_dest_type;
  VAR_6->dest_params->id = VAR_3->cur_params.id;
  VAR_6->dest_params->protocol = VAR_3->cur_params.protocol;
  VAR_6->conn_id = VAR_7->conn_id;





  FUNC_0(&VAR_6->list);
  FUNC_4(&VAR_6->list, &VAR_3->conn_info_list);

  if (VAR_3->cur_params.id == VAR_3->hci_dev->nfcee_id)
   VAR_3->hci_dev->conn_info = VAR_6;

  VAR_6->conn_id = VAR_7->conn_id;
  VAR_6->max_pkt_payload_len = VAR_7->max_ctrl_pkt_payload_len;
  FUNC_1(&VAR_6->credits_cnt, VAR_7->credits_cnt);
 }

free_conn_info:
 if (VAR_5 == VAR_2)
  FUNC_2(&VAR_3->nfc_dev->dev, VAR_6);
exit:

 FUNC_5(VAR_3, VAR_5);
}
