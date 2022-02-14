
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct smp_dev {int local_oob; struct crypto_shash* tfm_ecdh; struct crypto_shash* tfm_cmac; } ;
struct l2cap_chan {int nesting; int * ops; int imtu; int mode; int state; int src_type; int src; struct smp_dev* data; } ;
struct hci_dev {int bdaddr; } ;
struct crypto_shash {int dummy; } ;
typedef struct crypto_shash crypto_kpp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct l2cap_chan* FUNC_1 (struct crypto_shash*) ;
 struct l2cap_chan* FUNC_2 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct crypto_shash*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 struct crypto_shash* FUNC_6 (char*,int ,int ) ;
 struct crypto_shash* FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct crypto_shash*) ;
 int FUNC_9 (struct crypto_shash*) ;
 int FUNC_10 (struct hci_dev*,int *,scalar_t__*) ;
 struct smp_dev* FUNC_11 (int,int ) ;
 int FUNC_12 (struct smp_dev*) ;
 int FUNC_13 (struct l2cap_chan*,int ) ;
 struct l2cap_chan* FUNC_14 () ;
 int FUNC_15 (struct l2cap_chan*) ;
 int VAR_13 ;

__attribute__((used)) static struct l2cap_chan *FUNC_16(struct hci_dev *VAR_14, u16 VAR_15)
{
 struct l2cap_chan *VAR_16;
 struct smp_dev *VAR_17;
 struct crypto_shash *VAR_18;
 struct crypto_kpp *VAR_19;

 if (VAR_15 == VAR_9) {
  VAR_17 = ((void*)0);
  goto create_chan;
 }

 VAR_17 = FUNC_11(sizeof(*VAR_17), VAR_7);
 if (!VAR_17)
  return FUNC_2(-VAR_6);

 VAR_18 = FUNC_7("cmac(aes)", 0, 0);
 if (FUNC_3(VAR_18)) {
  FUNC_0("Unable to create CMAC crypto context");
  FUNC_12(VAR_17);
  return FUNC_1(VAR_18);
 }

 VAR_19 = FUNC_6("ecdh", VAR_5, 0);
 if (FUNC_3(VAR_19)) {
  FUNC_0("Unable to create ECDH crypto context");
  FUNC_9(VAR_18);
  FUNC_12(VAR_17);
  return FUNC_1(VAR_19);
 }

 VAR_17->local_oob = 0;
 VAR_17->tfm_cmac = VAR_18;
 VAR_17->tfm_ecdh = VAR_19;

create_chan:
 VAR_16 = FUNC_14();
 if (!VAR_16) {
  if (VAR_17) {
   FUNC_9(VAR_17->tfm_cmac);
   FUNC_8(VAR_17->tfm_ecdh);
   FUNC_12(VAR_17);
  }
  return FUNC_2(-VAR_6);
 }

 VAR_16->data = VAR_17;

 FUNC_13(VAR_16, VAR_15);

 FUNC_15(VAR_16);

 if (VAR_15 == VAR_8) {
  u8 VAR_20;

  FUNC_10(VAR_14, &VAR_16->src, &VAR_20);

  if (VAR_20 == VAR_0)
   VAR_16->src_type = VAR_2;
  else
   VAR_16->src_type = VAR_3;
 } else {
  FUNC_5(&VAR_16->src, &VAR_14->bdaddr);
  VAR_16->src_type = VAR_1;
 }

 VAR_16->state = VAR_4;
 VAR_16->mode = VAR_11;
 VAR_16->imtu = VAR_10;
 VAR_16->ops = &VAR_13;


 FUNC_4(&VAR_16->nesting, VAR_12);

 return VAR_16;
}
