
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_key {int list; } ;
struct hci_dev {int name; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int ,int *) ;
 int VAR_0 ;
 struct link_key* FUNC_1 (struct hci_dev*,int *) ;
 int FUNC_2 (struct link_key*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

int FUNC_4(struct hci_dev *VAR_2, bdaddr_t *VAR_3)
{
 struct link_key *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0("%s removing %pMR", VAR_2->name, VAR_3);

 FUNC_3(&VAR_4->list);
 FUNC_2(VAR_4, VAR_1);

 return 0;
}
