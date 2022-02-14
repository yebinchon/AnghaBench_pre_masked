
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_num_supported_iac {scalar_t__ num_iac; scalar_t__ status; } ;
struct hci_dev {scalar_t__ num_iac; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hci_dev *VAR_0,
       struct sk_buff *VAR_1)
{
 struct hci_rp_read_num_supported_iac *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%2.2x", VAR_0->name, VAR_2->status);

 if (VAR_2->status)
  return;

 VAR_0->num_iac = VAR_2->num_iac;

 FUNC_0("%s num iac %d", VAR_0->name, VAR_0->num_iac);
}
