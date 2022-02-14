
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int bdaddr; int static_addr; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;

void FUNC_3(struct hci_dev *VAR_5, bdaddr_t *VAR_6,
          u8 *VAR_7)
{
 if (FUNC_2(VAR_5, VAR_4) ||
     !FUNC_0(&VAR_5->bdaddr, VAR_2) ||
     (!FUNC_2(VAR_5, VAR_3) &&
      FUNC_0(&VAR_5->static_addr, VAR_2))) {
  FUNC_1(VAR_6, &VAR_5->static_addr);
  *VAR_7 = VAR_1;
 } else {
  FUNC_1(VAR_6, &VAR_5->bdaddr);
  *VAR_7 = VAR_0;
 }
}
