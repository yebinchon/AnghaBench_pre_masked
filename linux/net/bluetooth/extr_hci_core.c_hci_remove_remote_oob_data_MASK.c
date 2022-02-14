
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oob_data {int list; } ;
struct hci_dev {int name; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int ,int *,int ) ;
 int VAR_0 ;
 struct oob_data* FUNC_1 (struct hci_dev*,int *,int ) ;
 int FUNC_2 (struct oob_data*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
          u8 VAR_3)
{
 struct oob_data *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0("%s removing %pMR (%u)", VAR_1->name, VAR_2, VAR_3);

 FUNC_3(&VAR_4->list);
 FUNC_2(VAR_4);

 return 0;
}
