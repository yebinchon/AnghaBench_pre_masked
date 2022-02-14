
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {int type; int bdaddr; } ;
struct mgmt_cp_block_device {TYPE_1__ addr; } ;
struct hci_dev {int id; int blacklist; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct sock*,int ,int ,int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,struct hci_dev*,TYPE_1__*,int,struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, struct hci_dev *VAR_6, void *VAR_7,
   u16 VAR_8)
{
 struct mgmt_cp_block_device *VAR_9 = VAR_7;
 u8 VAR_10;
 int VAR_11;

 FUNC_0("%s", VAR_6->name);

 if (!FUNC_1(VAR_9->addr.type))
  return FUNC_5(VAR_5, VAR_6->id, VAR_1,
      VAR_3,
      &VAR_9->addr, sizeof(VAR_9->addr));

 FUNC_3(VAR_6);

 VAR_11 = FUNC_2(&VAR_6->blacklist, &VAR_9->addr.bdaddr,
      VAR_9->addr.type);
 if (VAR_11 < 0) {
  VAR_10 = VAR_2;
  goto done;
 }

 FUNC_6(VAR_0, VAR_6, &VAR_9->addr, sizeof(VAR_9->addr),
     VAR_5);
 VAR_10 = VAR_4;

done:
 VAR_11 = FUNC_5(VAR_5, VAR_6->id, VAR_1, VAR_10,
    &VAR_9->addr, sizeof(VAR_9->addr));

 FUNC_4(VAR_6);

 return VAR_11;
}
