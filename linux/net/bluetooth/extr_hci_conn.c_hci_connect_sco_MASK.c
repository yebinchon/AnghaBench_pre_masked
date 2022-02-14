
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ state; int flags; int setting; struct hci_conn* link; } ;
typedef int bdaddr_t ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hci_conn* FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct hci_conn*) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int,int *,int ) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (struct hci_conn*,int ) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int,int *) ;
 int FUNC_6 (struct hci_conn*) ;
 struct hci_conn* FUNC_7 (struct hci_dev*,int *,int ,int ) ;
 int FUNC_8 (struct hci_conn*,int) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

struct hci_conn *FUNC_11(struct hci_dev *VAR_11, int VAR_12, bdaddr_t *VAR_13,
     __u16 VAR_14)
{
 struct hci_conn *VAR_15;
 struct hci_conn *VAR_16;

 VAR_15 = FUNC_7(VAR_11, VAR_13, VAR_4, VAR_6);
 if (FUNC_1(VAR_15))
  return VAR_15;

 VAR_16 = FUNC_5(VAR_11, VAR_12, VAR_13);
 if (!VAR_16) {
  VAR_16 = FUNC_2(VAR_11, VAR_12, VAR_13, VAR_10);
  if (!VAR_16) {
   FUNC_3(VAR_15);
   return FUNC_0(-VAR_5);
  }
 }

 VAR_15->link = VAR_16;
 VAR_16->link = VAR_15;

 FUNC_6(VAR_16);

 VAR_16->setting = VAR_14;

 if (VAR_15->state == VAR_1 &&
     (VAR_16->state == VAR_2 || VAR_16->state == VAR_0)) {
  FUNC_9(VAR_8, &VAR_15->flags);
  FUNC_4(VAR_15, VAR_3);

  if (FUNC_10(VAR_7, &VAR_15->flags)) {

   FUNC_9(VAR_9, &VAR_15->flags);
   return VAR_16;
  }

  FUNC_8(VAR_15, 0x00);
 }

 return VAR_16;
}
