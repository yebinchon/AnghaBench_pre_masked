
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_name {int name; scalar_t__ status; } ;
struct hci_dev {int dev_name; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_rp_read_local_name *VAR_5 = (void *) VAR_4->data;

 FUNC_0("%s status 0x%2.2x", VAR_3->name, VAR_5->status);

 if (VAR_5->status)
  return;

 if (FUNC_1(VAR_3, VAR_2) ||
     FUNC_1(VAR_3, VAR_0))
  FUNC_2(VAR_3->dev_name, VAR_5->name, VAR_1);
}
