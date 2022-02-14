
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hci_dev {int bdaddr; int random_addr; } ;
struct hci_conn {int conn_timeout; int le_conn_timeout; TYPE_1__* hdev; int resp_addr; scalar_t__ resp_addr_type; int init_addr; scalar_t__ init_addr_type; } ;
typedef int bdaddr_t ;
struct TYPE_2__ {int workqueue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int *,scalar_t__) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_2, bdaddr_t *VAR_3,
         u8 VAR_4, u8 VAR_5,
         u8 VAR_6)
{
 struct hci_conn *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3,
           VAR_4);
 if (!VAR_7)
  return;





 VAR_7->init_addr_type = VAR_5;
 if (VAR_5 == VAR_0)
  FUNC_0(&VAR_7->init_addr, &VAR_2->random_addr);
 else
  FUNC_0(&VAR_7->init_addr, &VAR_2->bdaddr);

 VAR_7->resp_addr_type = VAR_4;
 FUNC_0(&VAR_7->resp_addr, VAR_3);






 if (VAR_6 == VAR_1)
  FUNC_2(VAR_7->hdev->workqueue,
       &VAR_7->le_conn_timeout,
       VAR_7->conn_timeout);
}
