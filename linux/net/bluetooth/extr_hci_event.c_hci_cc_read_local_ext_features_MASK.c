
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_ext_features {scalar_t__ max_page; size_t page; int features; scalar_t__ status; } ;
struct hci_dev {scalar_t__ max_page; int * features; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_1,
        struct sk_buff *VAR_2)
{
 struct hci_rp_read_local_ext_features *VAR_3 = (void *) VAR_2->data;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 if (VAR_1->max_page < VAR_3->max_page)
  VAR_1->max_page = VAR_3->max_page;

 if (VAR_3->page < VAR_0)
  FUNC_1(VAR_1->features[VAR_3->page], VAR_3->features, 8);
}
