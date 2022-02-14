
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_cp_remove_remote_oob_data {TYPE_1__ addr; } ;
struct hci_dev {int id; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int *,scalar_t__) ;
 int FUNC_6 (struct sock*,int ,int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, struct hci_dev *VAR_6,
      void *VAR_7, u16 VAR_8)
{
 struct mgmt_cp_remove_remote_oob_data *VAR_9 = VAR_7;
 u8 VAR_10;
 int VAR_11;

 FUNC_0("%s", VAR_6->name);

 if (VAR_9->addr.type != VAR_1)
  return FUNC_6(VAR_5, VAR_6->id,
      VAR_2,
      VAR_3,
      &VAR_9->addr, sizeof(VAR_9->addr));

 FUNC_2(VAR_6);

 if (!FUNC_1(&VAR_9->addr.bdaddr, VAR_0)) {
  FUNC_4(VAR_6);
  VAR_10 = VAR_4;
  goto done;
 }

 VAR_11 = FUNC_5(VAR_6, &VAR_9->addr.bdaddr, VAR_9->addr.type);
 if (VAR_11 < 0)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_4;

done:
 VAR_11 = FUNC_6(VAR_5, VAR_6->id, VAR_2,
    VAR_10, &VAR_9->addr, sizeof(VAR_9->addr));

 FUNC_3(VAR_6);
 return VAR_11;
}
