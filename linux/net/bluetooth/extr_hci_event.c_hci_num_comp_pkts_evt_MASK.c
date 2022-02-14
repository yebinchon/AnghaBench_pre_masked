
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct hci_ev_num_comp_pkts {int num_hndl; struct hci_comp_pkts_info* handles; } ;
struct hci_dev {scalar_t__ flow_ctl_mode; int tx_work; int workqueue; int sco_pkts; int sco_cnt; int acl_pkts; int acl_cnt; int le_pkts; int le_cnt; int name; } ;
struct hci_conn {int type; int sent; } ;
struct hci_comp_pkts_info {int count; int handle; } ;
typedef scalar_t__ __u16 ;



 int FUNC_0 (char*,int ,...) ;
 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,char*,int,...) ;
 int VAR_1 ;
 struct hci_conn* FUNC_3 (struct hci_dev*,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct hci_ev_num_comp_pkts*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_ev_num_comp_pkts *VAR_4 = (void *) VAR_3->data;
 int VAR_5;

 if (VAR_2->flow_ctl_mode != VAR_0) {
  FUNC_2(VAR_2, "wrong event for mode %d", VAR_2->flow_ctl_mode);
  return;
 }

 if (VAR_3->len < sizeof(*VAR_4) ||
     VAR_3->len < FUNC_5(VAR_4, VAR_1, VAR_4->num_hndl)) {
  FUNC_0("%s bad parameters", VAR_2->name);
  return;
 }

 FUNC_0("%s num_hndl %d", VAR_2->name, VAR_4->num_hndl);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_hndl; VAR_5++) {
  struct hci_comp_pkts_info *VAR_6 = &VAR_4->handles[VAR_5];
  struct hci_conn *VAR_7;
  __u16 VAR_8, VAR_9;

  VAR_8 = FUNC_1(VAR_6->handle);
  VAR_9 = FUNC_1(VAR_6->count);

  VAR_7 = FUNC_3(VAR_2, VAR_8);
  if (!VAR_7)
   continue;

  VAR_7->sent -= VAR_9;

  switch (VAR_7->type) {
  case 130:
   VAR_2->acl_cnt += VAR_9;
   if (VAR_2->acl_cnt > VAR_2->acl_pkts)
    VAR_2->acl_cnt = VAR_2->acl_pkts;
   break;

  case 129:
   if (VAR_2->le_pkts) {
    VAR_2->le_cnt += VAR_9;
    if (VAR_2->le_cnt > VAR_2->le_pkts)
     VAR_2->le_cnt = VAR_2->le_pkts;
   } else {
    VAR_2->acl_cnt += VAR_9;
    if (VAR_2->acl_cnt > VAR_2->acl_pkts)
     VAR_2->acl_cnt = VAR_2->acl_pkts;
   }
   break;

  case 128:
   VAR_2->sco_cnt += VAR_9;
   if (VAR_2->sco_cnt > VAR_2->sco_pkts)
    VAR_2->sco_cnt = VAR_2->sco_pkts;
   break;

  default:
   FUNC_2(VAR_2, "unknown type %d conn %p",
       VAR_7->type, VAR_7);
   break;
  }
 }

 FUNC_4(VAR_2->workqueue, &VAR_2->tx_work);
}
