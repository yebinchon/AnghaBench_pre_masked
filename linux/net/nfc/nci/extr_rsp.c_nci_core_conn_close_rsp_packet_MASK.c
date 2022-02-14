
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__* data; } ;
struct nci_dev {TYPE_1__* nfc_dev; int cur_conn_id; } ;
struct nci_conn_info {int list; } ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct nci_conn_info*) ;
 int FUNC_1 (int *) ;
 struct nci_conn_info* FUNC_2 (struct nci_dev*,int ) ;
 int FUNC_3 (struct nci_dev*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nci_dev *VAR_1,
        struct sk_buff *VAR_2)
{
 struct nci_conn_info *VAR_3;
 __u8 VAR_4 = VAR_2->data[0];

 FUNC_4("status 0x%x\n", VAR_4);
 if (VAR_4 == VAR_0) {
  VAR_3 = FUNC_2(VAR_1,
        VAR_1->cur_conn_id);
  if (VAR_3) {
   FUNC_1(&VAR_3->list);
   FUNC_0(&VAR_1->nfc_dev->dev, VAR_3);
  }
 }
 FUNC_3(VAR_1, VAR_4);
}
