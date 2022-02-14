
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_le_conn_complete {int supervision_timeout; int latency; int interval; int handle; int role; int bdaddr_type; int bdaddr; int status; } ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,int ,int *,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_ev_le_conn_complete *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%2.2x", VAR_0->name, VAR_2->status);

 FUNC_2(VAR_0, VAR_2->status, &VAR_2->bdaddr, VAR_2->bdaddr_type,
        VAR_2->role, FUNC_1(VAR_2->handle),
        FUNC_1(VAR_2->interval),
        FUNC_1(VAR_2->latency),
        FUNC_1(VAR_2->supervision_timeout));
}
