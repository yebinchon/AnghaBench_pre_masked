
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {int type; int bdaddr; } ;
struct mgmt_cp_unblock_device {TYPE_1__ addr; } ;
struct hci_dev {int id; int blacklist; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct sock*,int ,int ,int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,struct hci_dev*,TYPE_1__*,int,struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, struct hci_dev *VAR_5, void *VAR_6,
     u16 VAR_7)
{
 struct mgmt_cp_unblock_device *VAR_8 = VAR_6;
 u8 VAR_9;
 int VAR_10;

 FUNC_0("%s", VAR_5->name);

 if (!FUNC_1(VAR_8->addr.type))
  return FUNC_5(VAR_4, VAR_5->id, VAR_1,
      VAR_2,
      &VAR_8->addr, sizeof(VAR_8->addr));

 FUNC_3(VAR_5);

 VAR_10 = FUNC_2(&VAR_5->blacklist, &VAR_8->addr.bdaddr,
      VAR_8->addr.type);
 if (VAR_10 < 0) {
  VAR_9 = VAR_2;
  goto done;
 }

 FUNC_6(VAR_0, VAR_5, &VAR_8->addr, sizeof(VAR_8->addr),
     VAR_4);
 VAR_9 = VAR_3;

done:
 VAR_10 = FUNC_5(VAR_4, VAR_5->id, VAR_1, VAR_9,
    &VAR_8->addr, sizeof(VAR_8->addr));

 FUNC_4(VAR_5);

 return VAR_10;
}
