
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct smp_dev {scalar_t__ debug_key; int local_rand; int local_pk; } ;
struct smp_chan {scalar_t__ local_pk; TYPE_2__* conn; int tfm_ecdh; int flags; scalar_t__ lr; } ;
struct l2cap_chan {struct smp_dev* data; } ;
struct hci_dev {struct l2cap_chan* smp_data; } ;
struct TYPE_4__ {TYPE_1__* hcon; } ;
struct TYPE_3__ {struct hci_dev* hdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static u8 FUNC_10(struct smp_chan *VAR_7)
{
 struct hci_dev *VAR_8 = VAR_7->conn->hcon->hdev;

 FUNC_0("");

 if (FUNC_9(VAR_3, &VAR_7->flags)) {
  struct l2cap_chan *VAR_9 = VAR_8->smp_data;
  struct smp_dev *VAR_10;

  if (!VAR_9 || !VAR_9->data)
   return VAR_4;

  VAR_10 = VAR_9->data;

  FUNC_5(VAR_7->local_pk, VAR_10->local_pk, 64);
  FUNC_5(VAR_7->lr, VAR_10->local_rand, 16);

  if (VAR_10->debug_key)
   FUNC_6(VAR_2, &VAR_7->flags);

  goto done;
 }

 if (FUNC_4(VAR_8, VAR_0)) {
  FUNC_0("Using debug keys");
  if (FUNC_7(VAR_7->tfm_ecdh, VAR_6))
   return VAR_4;
  FUNC_5(VAR_7->local_pk, VAR_5, 64);
  FUNC_6(VAR_2, &VAR_7->flags);
 } else {
  while (1) {

   if (FUNC_3(VAR_7->tfm_ecdh, VAR_7->local_pk))
    return VAR_4;




   if (FUNC_2(VAR_7->local_pk, VAR_5, 64))
    break;
  }
 }

done:
 FUNC_1("Local Public Key X: %32phN", VAR_7->local_pk);
 FUNC_1("Local Public Key Y: %32phN", VAR_7->local_pk + 32);

 FUNC_8(VAR_7->conn, VAR_1, 64, VAR_7->local_pk);

 return 0;
}
