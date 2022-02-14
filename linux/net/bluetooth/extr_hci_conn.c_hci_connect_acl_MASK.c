
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ state; void* auth_type; void* pending_sec_level; int sec_level; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hci_conn* FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct hci_conn*) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *,int ) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *) ;
 int FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_6 (struct hci_dev*) ;

struct hci_conn *FUNC_7(struct hci_dev *VAR_9, bdaddr_t *VAR_10,
     u8 VAR_11, u8 VAR_12)
{
 struct hci_conn *VAR_13;

 if (!FUNC_5(VAR_9, VAR_7)) {
  if (FUNC_6(VAR_9))
   return FUNC_0(-VAR_4);

  return FUNC_0(-VAR_6);
 }

 VAR_13 = FUNC_3(VAR_9, VAR_0, VAR_10);
 if (!VAR_13) {
  VAR_13 = FUNC_2(VAR_9, VAR_0, VAR_10, VAR_8);
  if (!VAR_13)
   return FUNC_0(-VAR_5);
 }

 FUNC_4(VAR_13);

 if (VAR_13->state == VAR_2 || VAR_13->state == VAR_1) {
  VAR_13->sec_level = VAR_3;
  VAR_13->pending_sec_level = VAR_11;
  VAR_13->auth_type = VAR_12;
  FUNC_1(VAR_13);
 }

 return VAR_13;
}
