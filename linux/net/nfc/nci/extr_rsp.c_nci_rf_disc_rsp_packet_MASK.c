
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__* data; } ;
struct nci_dev {struct nci_conn_info* rf_conn_info; int conn_info_list; TYPE_1__* nfc_dev; int state; } ;
struct nci_conn_info {int list; int conn_id; } ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ) ;
 struct nci_conn_info* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nci_dev*,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct nci_dev *VAR_5, struct sk_buff *VAR_6)
{
 struct nci_conn_info *VAR_7;
 __u8 VAR_8 = VAR_6->data[0];

 FUNC_5("status 0x%x\n", VAR_8);

 if (VAR_8 == VAR_3) {
  FUNC_1(&VAR_5->state, VAR_1);

  VAR_7 = VAR_5->rf_conn_info;
  if (!VAR_7) {
   VAR_7 = FUNC_2(&VAR_5->nfc_dev->dev,
       sizeof(struct nci_conn_info),
       VAR_0);
   if (!VAR_7) {
    VAR_8 = VAR_4;
    goto exit;
   }
   VAR_7->conn_id = VAR_2;
   FUNC_0(&VAR_7->list);
   FUNC_3(&VAR_7->list, &VAR_5->conn_info_list);
   VAR_5->rf_conn_info = VAR_7;
  }
 }

exit:
 FUNC_4(VAR_5, VAR_8);
}
