
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oob_data {int present; int rand256; int hash256; int rand192; int hash192; int list; int bdaddr_type; int bdaddr; } ;
struct hci_dev {int name; int remote_oob_data; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 struct oob_data* FUNC_2 (struct hci_dev*,int *,int ) ;
 struct oob_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int ,int) ;

int FUNC_7(struct hci_dev *VAR_2, bdaddr_t *VAR_3,
       u8 VAR_4, u8 *VAR_5, u8 *VAR_6,
       u8 *VAR_7, u8 *VAR_8)
{
 struct oob_data *VAR_9;

 VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_9) {
  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
  if (!VAR_9)
   return -VAR_0;

  FUNC_1(&VAR_9->bdaddr, VAR_3);
  VAR_9->bdaddr_type = VAR_4;
  FUNC_4(&VAR_9->list, &VAR_2->remote_oob_data);
 }

 if (VAR_5 && VAR_6) {
  FUNC_5(VAR_9->hash192, VAR_5, sizeof(VAR_9->hash192));
  FUNC_5(VAR_9->rand192, VAR_6, sizeof(VAR_9->rand192));
  if (VAR_7 && VAR_8)
   VAR_9->present = 0x03;
 } else {
  FUNC_6(VAR_9->hash192, 0, sizeof(VAR_9->hash192));
  FUNC_6(VAR_9->rand192, 0, sizeof(VAR_9->rand192));
  if (VAR_7 && VAR_8)
   VAR_9->present = 0x02;
  else
   VAR_9->present = 0x00;
 }

 if (VAR_7 && VAR_8) {
  FUNC_5(VAR_9->hash256, VAR_7, sizeof(VAR_9->hash256));
  FUNC_5(VAR_9->rand256, VAR_8, sizeof(VAR_9->rand256));
 } else {
  FUNC_6(VAR_9->hash256, 0, sizeof(VAR_9->hash256));
  FUNC_6(VAR_9->rand256, 0, sizeof(VAR_9->rand256));
  if (VAR_5 && VAR_6)
   VAR_9->present = 0x01;
 }

 FUNC_0("%s for %pMR", VAR_2->name, VAR_3);

 return 0;
}
