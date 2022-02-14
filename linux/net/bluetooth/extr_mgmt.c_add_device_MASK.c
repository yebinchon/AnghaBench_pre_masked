
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_cp_add_device {int action; TYPE_1__ addr; } ;
struct hci_dev {int id; int whitelist; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sock*,struct hci_dev*,int *,scalar_t__,int) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int *,int ,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct sock*,int ,int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_9, struct hci_dev *VAR_10,
        void *VAR_11, u16 VAR_12)
{
 struct mgmt_cp_add_device *VAR_13 = VAR_11;
 u8 VAR_14, VAR_15;
 int VAR_16;

 FUNC_0("%s", VAR_10->name);

 if (!FUNC_2(VAR_13->addr.type) ||
     !FUNC_1(&VAR_13->addr.bdaddr, VAR_0))
  return FUNC_12(VAR_9, VAR_10->id, VAR_5,
      VAR_7,
      &VAR_13->addr, sizeof(VAR_13->addr));

 if (VAR_13->action != 0x00 && VAR_13->action != 0x01 && VAR_13->action != 0x02)
  return FUNC_12(VAR_9, VAR_10->id, VAR_5,
      VAR_7,
      &VAR_13->addr, sizeof(VAR_13->addr));

 FUNC_6(VAR_10);

 if (VAR_13->addr.type == VAR_1) {

  if (VAR_13->action != 0x01) {
   VAR_16 = FUNC_12(VAR_9, VAR_10->id,
      VAR_5,
      VAR_7,
      &VAR_13->addr, sizeof(VAR_13->addr));
   goto unlock;
  }

  VAR_16 = FUNC_4(&VAR_10->whitelist, &VAR_13->addr.bdaddr,
       VAR_13->addr.type);
  if (VAR_16)
   goto unlock;

  FUNC_9(VAR_10);

  goto added;
 }

 VAR_15 = FUNC_11(VAR_13->addr.type);

 if (VAR_13->action == 0x02)
  VAR_14 = VAR_2;
 else if (VAR_13->action == 0x01)
  VAR_14 = VAR_3;
 else
  VAR_14 = VAR_4;






 if (!FUNC_8(&VAR_13->addr.bdaddr, VAR_15)) {
  VAR_16 = FUNC_12(VAR_9, VAR_10->id, VAR_5,
     VAR_7,
     &VAR_13->addr, sizeof(VAR_13->addr));
  goto unlock;
 }




 if (FUNC_5(VAR_10, &VAR_13->addr.bdaddr, VAR_15,
    VAR_14) < 0) {
  VAR_16 = FUNC_12(VAR_9, VAR_10->id, VAR_5,
     VAR_6, &VAR_13->addr,
     sizeof(VAR_13->addr));
  goto unlock;
 }

 FUNC_10(VAR_10);

added:
 FUNC_3(VAR_9, VAR_10, &VAR_13->addr.bdaddr, VAR_13->addr.type, VAR_13->action);

 VAR_16 = FUNC_12(VAR_9, VAR_10->id, VAR_5,
    VAR_8, &VAR_13->addr,
    sizeof(VAR_13->addr));

unlock:
 FUNC_7(VAR_10);
 return VAR_16;
}
