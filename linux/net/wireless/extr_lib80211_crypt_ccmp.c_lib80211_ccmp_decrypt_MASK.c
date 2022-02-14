
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int* data; } ;
struct scatterlist {int dummy; } ;
struct lib80211_ccmp_data {int* rx_aad; int key_idx; int * rx_pn; int dot11RSNAStatsCCMPDecryptErrors; int tfm; int dot11RSNAStatsCCMPReplays; int key_set; int dot11RSNAStatsCCMPFormatErrors; } ;
struct ieee80211_hdr {int addr2; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct aead_request* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int) ;
 int FUNC_3 (struct aead_request*,int ,int *,int *) ;
 int FUNC_4 (struct aead_request*,struct scatterlist*,struct scatterlist*,size_t,int*) ;
 int FUNC_5 (struct ieee80211_hdr*,int*,int*,int*) ;
 scalar_t__ FUNC_6 (int*,int *) ;
 int FUNC_7 (struct aead_request*) ;
 int FUNC_8 (int *,int*,int ) ;
 int FUNC_9 (int*,int*,int) ;
 int FUNC_10 (char*,int,...) ;
 int FUNC_11 (struct scatterlist*,int) ;
 int FUNC_12 (struct scatterlist*,int*,size_t) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_6, int VAR_7, void *VAR_8)
{
 struct lib80211_ccmp_data *VAR_9 = VAR_8;
 u8 VAR_10, *VAR_11;
 struct ieee80211_hdr *VAR_12;
 struct aead_request *VAR_13;
 struct scatterlist VAR_14[2];
 u8 *VAR_15 = VAR_9->rx_aad;
 u8 VAR_16[VAR_0];
 u8 VAR_17[6];
 int VAR_18, VAR_19;
 size_t VAR_20 = VAR_6->len - VAR_7 - VAR_1;

 if (VAR_6->len < VAR_7 + VAR_1 + VAR_2) {
  VAR_9->dot11RSNAStatsCCMPFormatErrors++;
  return -1;
 }

 VAR_12 = (struct ieee80211_hdr *)VAR_6->data;
 VAR_11 = VAR_6->data + VAR_7;
 VAR_10 = VAR_11[3];
 if (!(VAR_10 & (1 << 5))) {
  FUNC_10("CCMP: received packet without ExtIV flag from %pM\n",
        VAR_12->addr2);
  VAR_9->dot11RSNAStatsCCMPFormatErrors++;
  return -2;
 }
 VAR_10 >>= 6;
 if (VAR_9->key_idx != VAR_10) {
  FUNC_10("CCMP: RX tkey->key_idx=%d frame keyidx=%d\n",
        VAR_9->key_idx, VAR_10);
  return -6;
 }
 if (!VAR_9->key_set) {
  FUNC_10("CCMP: received packet from %pM with keyid=%d that does not have a configured key\n",
        VAR_12->addr2, VAR_10);
  return -3;
 }

 VAR_17[0] = VAR_11[7];
 VAR_17[1] = VAR_11[6];
 VAR_17[2] = VAR_11[5];
 VAR_17[3] = VAR_11[4];
 VAR_17[4] = VAR_11[1];
 VAR_17[5] = VAR_11[0];
 VAR_11 += 8;

 if (FUNC_6(VAR_17, VAR_9->rx_pn)) {







  VAR_9->dot11RSNAStatsCCMPReplays++;
  return -4;
 }

 VAR_13 = FUNC_0(VAR_9->tfm, VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_18 = FUNC_5(VAR_12, VAR_17, VAR_16, VAR_15);

 FUNC_11(VAR_14, 2);
 FUNC_12(&VAR_14[0], VAR_15, VAR_18);
 FUNC_12(&VAR_14[1], VAR_11, VAR_20);

 FUNC_3(VAR_13, 0, ((void*)0), ((void*)0));
 FUNC_2(VAR_13, VAR_18);
 FUNC_4(VAR_13, VAR_14, VAR_14, VAR_20, VAR_16);

 VAR_19 = FUNC_7(VAR_13);
 FUNC_1(VAR_13);

 if (VAR_19) {
  FUNC_10("CCMP: decrypt failed: STA=%pM (%d)\n",
        VAR_12->addr2, VAR_19);
  VAR_9->dot11RSNAStatsCCMPDecryptErrors++;
  return -5;
 }

 FUNC_8(VAR_9->rx_pn, VAR_17, VAR_3);


 FUNC_9(VAR_6->data + VAR_1, VAR_6->data, VAR_7);
 FUNC_13(VAR_6, VAR_1);
 FUNC_14(VAR_6, VAR_6->len - VAR_2);

 return VAR_10;
}
