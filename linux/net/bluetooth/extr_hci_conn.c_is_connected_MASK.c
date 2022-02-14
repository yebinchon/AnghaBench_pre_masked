
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ state; } ;
typedef int bdaddr_t ;


 scalar_t__ VAR_0 ;
 struct hci_conn* FUNC_0 (struct hci_dev*,int *,int ) ;

__attribute__((used)) static bool FUNC_1(struct hci_dev *VAR_1, bdaddr_t *VAR_2, u8 VAR_3)
{
 struct hci_conn *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return 0;

 if (VAR_4->state != VAR_0)
  return 0;

 return 1;
}
