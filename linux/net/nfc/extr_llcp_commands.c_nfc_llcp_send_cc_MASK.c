
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_sock {scalar_t__ rw; int miux; struct nfc_llcp_local* local; } ;
struct nfc_llcp_local {int tx_queue; scalar_t__ rw; int miux; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct sk_buff*,scalar_t__*,scalar_t__) ;
 struct sk_buff* FUNC_3 (struct nfc_llcp_sock*,int ,int ) ;
 scalar_t__* FUNC_4 (int ,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *,struct sk_buff*) ;

int FUNC_8(struct nfc_llcp_sock *VAR_7)
{
 struct nfc_llcp_local *VAR_8;
 struct sk_buff *VAR_9;
 u8 *VAR_10 = ((void*)0), VAR_11;
 u8 *VAR_12 = ((void*)0), VAR_13, VAR_14;
 int VAR_15;
 u16 VAR_16 = 0;
 __be16 VAR_17;

 FUNC_5("Sending CC\n");

 VAR_8 = VAR_7->local;
 if (VAR_8 == ((void*)0))
  return -VAR_0;


 VAR_17 = FUNC_0(VAR_7->miux) > VAR_2 ?
  VAR_8->miux : VAR_7->miux;
 VAR_14 = VAR_7->rw > VAR_3 ? VAR_8->rw : VAR_7->rw;

 VAR_10 = FUNC_4(VAR_5, (u8 *)&VAR_17, 0,
          &VAR_11);
 if (!VAR_10) {
  VAR_15 = -VAR_1;
  goto error_tlv;
 }
 VAR_16 += VAR_11;

 VAR_12 = FUNC_4(VAR_6, &VAR_14, 0, &VAR_13);
 if (!VAR_12) {
  VAR_15 = -VAR_1;
  goto error_tlv;
 }
 VAR_16 += VAR_13;

 VAR_9 = FUNC_3(VAR_7, VAR_4, VAR_16);
 if (VAR_9 == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto error_tlv;
 }

 FUNC_2(VAR_9, VAR_10, VAR_11);
 FUNC_2(VAR_9, VAR_12, VAR_13);

 FUNC_7(&VAR_8->tx_queue, VAR_9);

 VAR_15 = 0;

error_tlv:
 if (VAR_15)
  FUNC_6("error %d\n", VAR_15);

 FUNC_1(VAR_10);
 FUNC_1(VAR_12);

 return VAR_15;
}
