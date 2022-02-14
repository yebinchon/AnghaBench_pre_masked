
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_inquiry_req {int num_rsp; int length; int lap; } ;
struct hci_dev {int flags; int name; } ;
struct hci_cp_inquiry {int num_rsp; int length; int lap; } ;
typedef int cp ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_request*,int ,int,struct hci_cp_inquiry*) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hci_request *VAR_2, unsigned long VAR_3)
{
 struct hci_inquiry_req *VAR_4 = (struct hci_inquiry_req *) VAR_3;
 struct hci_dev *VAR_5 = VAR_2->hdev;
 struct hci_cp_inquiry VAR_6;

 FUNC_0("%s", VAR_5->name);

 if (FUNC_3(VAR_0, &VAR_5->flags))
  return 0;


 FUNC_2(&VAR_6.lap, &VAR_4->lap, 3);
 VAR_6.length = VAR_4->length;
 VAR_6.num_rsp = VAR_4->num_rsp;
 FUNC_1(VAR_2, VAR_1, sizeof(VAR_6), &VAR_6);

 return 0;
}
