
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_3__ {int* b; } ;
struct mgmt_cp_set_static_address {TYPE_1__ bdaddr; } ;
struct hci_dev {int static_addr; int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct sock*,int ,int ,int ) ;
 int FUNC_8 (struct hci_dev*,struct sock*) ;
 int FUNC_9 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_6, struct hci_dev *VAR_7,
         void *VAR_8, u16 VAR_9)
{
 struct mgmt_cp_set_static_address *VAR_10 = VAR_8;
 int VAR_11;

 FUNC_0("%s", VAR_7->name);

 if (!FUNC_6(VAR_7))
  return FUNC_7(VAR_6, VAR_7->id, VAR_2,
           VAR_4);

 if (FUNC_5(VAR_7))
  return FUNC_7(VAR_6, VAR_7->id, VAR_2,
           VAR_5);

 if (FUNC_1(&VAR_10->bdaddr, VAR_0)) {
  if (!FUNC_1(&VAR_10->bdaddr, VAR_1))
   return FUNC_7(VAR_6, VAR_7->id,
            VAR_2,
            VAR_3);


  if ((VAR_10->bdaddr.b[5] & 0xc0) != 0xc0)
   return FUNC_7(VAR_6, VAR_7->id,
            VAR_2,
            VAR_3);
 }

 FUNC_3(VAR_7);

 FUNC_2(&VAR_7->static_addr, &VAR_10->bdaddr);

 VAR_11 = FUNC_9(VAR_6, VAR_2, VAR_7);
 if (VAR_11 < 0)
  goto unlock;

 VAR_11 = FUNC_8(VAR_7, VAR_6);

unlock:
 FUNC_4(VAR_7);
 return VAR_11;
}
