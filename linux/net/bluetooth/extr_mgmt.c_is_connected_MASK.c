
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ dst_type; scalar_t__ state; } ;
typedef int bdaddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct hci_conn* FUNC_0 (struct hci_dev*,int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct hci_dev *VAR_2, bdaddr_t *VAR_3, u8 VAR_4)
{
 struct hci_conn *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (!VAR_5)
  return 0;

 if (VAR_5->dst_type != VAR_4)
  return 0;

 if (VAR_5->state != VAR_0)
  return 0;

 return 1;
}
