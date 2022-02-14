
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int mac_len; scalar_t__ len; } ;
struct scatterlist {int dummy; } ;
struct mac802154_llsec_key {int dummy; } ;
struct mac802154_llsec {int dummy; } ;
struct TYPE_3__ {int level; } ;
struct ieee802154_hdr {TYPE_1__ sec; } ;
struct aead_request {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aead_request* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct aead_request*,int) ;
 int FUNC_2 (struct aead_request*,int ,int *,int *) ;
 int FUNC_3 (struct aead_request*,struct scatterlist*,struct scatterlist*,int,int *) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct aead_request*) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int FUNC_8 (struct mac802154_llsec_key*,int) ;
 int FUNC_9 (struct scatterlist*,unsigned char*,int) ;
 unsigned char* FUNC_10 (struct sk_buff*) ;
 unsigned char* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(struct sk_buff *VAR_3, const struct mac802154_llsec *VAR_4,
        const struct ieee802154_hdr *VAR_5,
        struct mac802154_llsec_key *VAR_6, __le64 VAR_7)
{
 u8 VAR_8[16];
 unsigned char *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 struct scatterlist VAR_14;
 struct aead_request *VAR_15;

 VAR_10 = FUNC_5(&VAR_5->sec);
 FUNC_7(VAR_8, VAR_7, &VAR_5->sec);

 VAR_15 = FUNC_0(FUNC_8(VAR_6, VAR_10), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_12 = VAR_3->mac_len;

 VAR_9 = FUNC_10(VAR_3) + VAR_3->mac_len;
 VAR_11 = FUNC_11(VAR_3) - VAR_9;

 FUNC_9(&VAR_14, FUNC_10(VAR_3), VAR_12 + VAR_11);

 if (!(VAR_5->sec.level & VAR_2)) {
  VAR_12 += VAR_11 - VAR_10;
  VAR_11 = VAR_10;
 }

 FUNC_2(VAR_15, 0, ((void*)0), ((void*)0));
 FUNC_3(VAR_15, &VAR_14, &VAR_14, VAR_11, VAR_8);
 FUNC_1(VAR_15, VAR_12);

 VAR_13 = FUNC_4(VAR_15);

 FUNC_6(VAR_15);
 FUNC_12(VAR_3, VAR_3->len - VAR_10);

 return VAR_13;
}
