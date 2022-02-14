
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_dev {int debug_key; int local_oob; int local_rand; int * local_pk; int tfm_cmac; int tfm_ecdh; } ;
struct l2cap_chan {struct smp_dev* data; } ;
struct hci_dev {struct l2cap_chan* smp_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *,int *,int ,int ,int *) ;

int FUNC_9(struct hci_dev *VAR_4, u8 VAR_5[16], u8 VAR_6[16])
{
 struct l2cap_chan *VAR_7 = VAR_4->smp_data;
 struct smp_dev *VAR_8;
 int VAR_9;

 if (!VAR_7 || !VAR_7->data)
  return -VAR_0;

 VAR_8 = VAR_7->data;

 if (FUNC_5(VAR_4, VAR_1)) {
  FUNC_0("Using debug keys");
  VAR_9 = FUNC_7(VAR_8->tfm_ecdh, VAR_3);
  if (VAR_9)
   return VAR_9;
  FUNC_6(VAR_8->local_pk, VAR_2, 64);
  VAR_8->debug_key = 1;
 } else {
  while (1) {

   VAR_9 = FUNC_3(VAR_8->tfm_ecdh, VAR_8->local_pk);
   if (VAR_9)
    return VAR_9;




   if (FUNC_2(VAR_8->local_pk, VAR_2, 64))
    break;
  }
  VAR_8->debug_key = 0;
 }

 FUNC_1("OOB Public Key X: %32phN", VAR_8->local_pk);
 FUNC_1("OOB Public Key Y: %32phN", VAR_8->local_pk + 32);

 FUNC_4(VAR_8->local_rand, 16);

 VAR_9 = FUNC_8(VAR_8->tfm_cmac, VAR_8->local_pk, VAR_8->local_pk,
       VAR_8->local_rand, 0, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_6(VAR_6, VAR_8->local_rand, 16);

 VAR_8->local_oob = 1;

 return 0;
}
