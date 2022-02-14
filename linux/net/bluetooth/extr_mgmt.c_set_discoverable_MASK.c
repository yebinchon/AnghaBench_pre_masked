
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_cp_set_discoverable {int val; int timeout; } ;
struct hci_dev {int discov_timeout; int discoverable_update; int req_workqueue; int discov_off; int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_11 (struct sock*,int ,struct hci_dev*,void*,void*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_14 (int ,struct hci_dev*) ;
 int FUNC_15 (int ,int *,int) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_12, struct hci_dev *VAR_13, void *VAR_14,
       u16 VAR_15)
{
 struct mgmt_cp_set_discoverable *VAR_16 = VAR_14;
 struct mgmt_pending_cmd *VAR_17;
 u16 VAR_18;
 int VAR_19;

 FUNC_0("request for %s", VAR_13->name);

 if (!FUNC_7(VAR_13, VAR_4) &&
     !FUNC_7(VAR_13, VAR_1))
  return FUNC_10(VAR_12, VAR_13->id, VAR_7,
           VAR_11);

 if (VAR_16->val != 0x00 && VAR_16->val != 0x01 && VAR_16->val != 0x02)
  return FUNC_10(VAR_12, VAR_13->id, VAR_7,
           VAR_9);

 VAR_18 = FUNC_1(VAR_16->timeout);




 if ((VAR_16->val == 0x00 && VAR_18 > 0) ||
     (VAR_16->val == 0x02 && VAR_18 == 0))
  return FUNC_10(VAR_12, VAR_13->id, VAR_7,
           VAR_9);

 FUNC_5(VAR_13);

 if (!FUNC_9(VAR_13) && VAR_18 > 0) {
  VAR_19 = FUNC_10(VAR_12, VAR_13->id, VAR_7,
          VAR_10);
  goto failed;
 }

 if (FUNC_14(VAR_7, VAR_13) ||
     FUNC_14(VAR_6, VAR_13)) {
  VAR_19 = FUNC_10(VAR_12, VAR_13->id, VAR_7,
          VAR_8);
  goto failed;
 }

 if (!FUNC_7(VAR_13, VAR_2)) {
  VAR_19 = FUNC_10(VAR_12, VAR_13->id, VAR_7,
          VAR_11);
  goto failed;
 }

 if (!FUNC_9(VAR_13)) {
  bool VAR_20 = 0;





  if (!!VAR_16->val != FUNC_7(VAR_13, VAR_3)) {
   FUNC_3(VAR_13, VAR_3);
   VAR_20 = 1;
  }

  VAR_19 = FUNC_17(VAR_12, VAR_7, VAR_13);
  if (VAR_19 < 0)
   goto failed;

  if (VAR_20)
   VAR_19 = FUNC_13(VAR_13, VAR_12);

  goto failed;
 }





 if (!!VAR_16->val == FUNC_7(VAR_13, VAR_3) &&
     (VAR_16->val == 0x02) == FUNC_7(VAR_13,
         VAR_5)) {
  FUNC_2(&VAR_13->discov_off);
  VAR_13->discov_timeout = VAR_18;

  if (VAR_16->val && VAR_13->discov_timeout > 0) {
   int VAR_21 = FUNC_12(VAR_13->discov_timeout * 1000);
   FUNC_15(VAR_13->req_workqueue,
        &VAR_13->discov_off, VAR_21);
  }

  VAR_19 = FUNC_17(VAR_12, VAR_7, VAR_13);
  goto failed;
 }

 VAR_17 = FUNC_11(VAR_12, VAR_7, VAR_13, VAR_14, VAR_15);
 if (!VAR_17) {
  VAR_19 = -VAR_0;
  goto failed;
 }





 FUNC_2(&VAR_13->discov_off);
 VAR_13->discov_timeout = VAR_18;

 if (VAR_16->val)
  FUNC_6(VAR_13, VAR_3);
 else
  FUNC_4(VAR_13, VAR_3);


 if (VAR_16->val == 0x02)
  FUNC_6(VAR_13, VAR_5);
 else
  FUNC_4(VAR_13, VAR_5);

 FUNC_16(VAR_13->req_workqueue, &VAR_13->discoverable_update);
 VAR_19 = 0;

failed:
 FUNC_8(VAR_13);
 return VAR_19;
}
