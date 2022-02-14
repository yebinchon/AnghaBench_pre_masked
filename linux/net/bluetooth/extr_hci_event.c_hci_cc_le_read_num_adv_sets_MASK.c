
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_le_read_num_supported_adv_sets {int num_of_sets; scalar_t__ status; } ;
struct hci_dev {int le_num_of_adv_sets; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct hci_dev *VAR_0,
          struct sk_buff *VAR_1)
{
 struct hci_rp_le_read_num_supported_adv_sets *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%2.2x No of Adv sets %u", VAR_0->name, VAR_2->status,
        VAR_2->num_of_sets);

 if (VAR_2->status)
  return;

 VAR_0->le_num_of_adv_sets = VAR_2->num_of_sets;
}
