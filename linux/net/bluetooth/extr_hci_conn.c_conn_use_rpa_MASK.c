
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_conn {struct hci_dev* hdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*,int ) ;

__attribute__((used)) static bool FUNC_1(struct hci_conn *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_1->hdev;

 return FUNC_0(VAR_2, VAR_0);
}
