
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_request {int dummy; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (struct hci_request*,int ) ;
 int FUNC_1 (struct hci_request*,struct hci_dev*) ;
 int FUNC_2 (struct hci_request*,int *) ;

int FUNC_3(struct hci_dev *VAR_0, u8 VAR_1)
{
 struct hci_request VAR_2;

 FUNC_1(&VAR_2, VAR_0);
 FUNC_0(&VAR_2, VAR_1);

 return FUNC_2(&VAR_2, ((void*)0));
}
