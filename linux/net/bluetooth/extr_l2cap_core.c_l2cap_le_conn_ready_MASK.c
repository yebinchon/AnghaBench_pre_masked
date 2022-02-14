
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn_param_update_req {void* to_multiplier; void* latency; void* max; void* min; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ role; scalar_t__ le_conn_interval; scalar_t__ le_conn_min_interval; scalar_t__ le_conn_max_interval; scalar_t__ le_conn_latency; scalar_t__ le_supv_timeout; int pending_sec_level; scalar_t__ out; struct hci_dev* hdev; } ;
typedef int req ;


 int FUNC_0 (char*,int ,struct l2cap_conn*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct l2cap_conn*) ;
 int FUNC_3 (struct l2cap_conn*,int ,int ,int,struct l2cap_conn_param_update_req*) ;
 int FUNC_4 (struct hci_conn*,int ) ;

__attribute__((used)) static void FUNC_5(struct l2cap_conn *VAR_2)
{
 struct hci_conn *VAR_3 = VAR_2->hcon;
 struct hci_dev *VAR_4 = VAR_3->hdev;

 FUNC_0("%s conn %p", VAR_4->name, VAR_2);




 if (VAR_3->out)
  FUNC_4(VAR_3, VAR_3->pending_sec_level);






 if (VAR_3->role == VAR_0 &&
     (VAR_3->le_conn_interval < VAR_3->le_conn_min_interval ||
      VAR_3->le_conn_interval > VAR_3->le_conn_max_interval)) {
  struct l2cap_conn_param_update_req VAR_5;

  VAR_5.min = FUNC_1(VAR_3->le_conn_min_interval);
  VAR_5.max = FUNC_1(VAR_3->le_conn_max_interval);
  VAR_5.latency = FUNC_1(VAR_3->le_conn_latency);
  VAR_5.to_multiplier = FUNC_1(VAR_3->le_supv_timeout);

  FUNC_3(VAR_2, FUNC_2(VAR_2),
          VAR_1, sizeof(VAR_5), &VAR_5);
 }
}
