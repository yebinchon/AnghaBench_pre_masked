
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_le_read_resolv_list_size {int size; scalar_t__ status; } ;
struct hci_dev {int le_resolv_list_size; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct hci_dev *VAR_0,
        struct sk_buff *VAR_1)
{
 struct hci_rp_le_read_resolv_list_size *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%2.2x size %u", VAR_0->name, VAR_2->status, VAR_2->size);

 if (VAR_2->status)
  return;

 VAR_0->le_resolv_list_size = VAR_2->size;
}
